
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evhttp_request {int major; int minor; int flags; int output_headers; int input_headers; int output_buffer; int response_code_line; int response_code; } ;
struct evhttp_connection {TYPE_1__* http_server; int bufev; } ;
struct TYPE_2__ {char* default_content_type; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,int,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*) ;
 int * FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 scalar_t__ FUNC_10 (struct evhttp_request*) ;

__attribute__((used)) static void
FUNC_11(struct evhttp_connection *VAR_1,
    struct evhttp_request *VAR_2)
{
 int VAR_3 = FUNC_6(VAR_2->input_headers);
 FUNC_1(FUNC_0(VAR_1->bufev),
     "HTTP/%d.%d %d %s\r\n",
     VAR_2->major, VAR_2->minor, VAR_2->response_code,
     VAR_2->response_code_line);

 if (VAR_2->major == 1) {
  if (VAR_2->minor >= 1)
   FUNC_8(VAR_2->output_headers);





  if (VAR_2->minor == 0 && VAR_3)
   FUNC_3(VAR_2->output_headers,
       "Connection", "keep-alive");

  if ((VAR_2->minor >= 1 || VAR_3) &&
      FUNC_10(VAR_2)) {





   FUNC_7(
    VAR_2->output_headers,
    FUNC_2(VAR_2->output_buffer));
  }
 }


 if (FUNC_10(VAR_2)) {
  if (FUNC_4(VAR_2->output_headers,
   "Content-Type") == ((void*)0)
      && VAR_1->http_server->default_content_type) {
   FUNC_3(VAR_2->output_headers,
       "Content-Type",
       VAR_1->http_server->default_content_type);
  }
 }


 if (FUNC_5(VAR_2->flags, VAR_2->input_headers)) {
  FUNC_9(VAR_2->output_headers, "Connection");
  if (!(VAR_2->flags & VAR_0))
      FUNC_3(VAR_2->output_headers, "Connection", "close");
  FUNC_9(VAR_2->output_headers, "Proxy-Connection");
 }
}
