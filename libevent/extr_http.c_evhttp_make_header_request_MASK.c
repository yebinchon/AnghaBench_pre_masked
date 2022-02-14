
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {scalar_t__ type; int output_headers; int output_buffer; int minor; int major; int uri; } ;
struct evhttp_connection {int bufev; } ;
typedef int size ;
typedef int ev_uint16_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char const*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,char*) ;
 int * FUNC_5 (int ,char*) ;
 char* FUNC_6 (struct evhttp_connection*,scalar_t__,int*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (char*,int,int ,int ) ;

__attribute__((used)) static void
FUNC_9(struct evhttp_connection *VAR_4,
    struct evhttp_request *VAR_5)
{
 const char *VAR_6;
 ev_uint16_t VAR_7;

 FUNC_7(VAR_5->output_headers, "Proxy-Connection");


 if (!(VAR_6 = FUNC_6(VAR_4, VAR_5->type, &VAR_7))) {
  VAR_6 = "NULL";
 }

 FUNC_2(FUNC_1(VAR_4->bufev),
     "%s %s HTTP/%d.%d\r\n",
     VAR_6, VAR_5->uri, VAR_5->major, VAR_5->minor);



 if ((VAR_7 & VAR_0) &&
     (FUNC_3(VAR_5->output_buffer) > 0 ||
      VAR_5->type == VAR_1 || VAR_5->type == VAR_2) &&
     FUNC_5(VAR_5->output_headers, "Content-Length") == ((void*)0)) {
  char VAR_8[22];
  FUNC_8(VAR_8, sizeof(VAR_8), VAR_3,
      FUNC_0(FUNC_3(VAR_5->output_buffer)));
  FUNC_4(VAR_5->output_headers, "Content-Length", VAR_8);
 }
}
