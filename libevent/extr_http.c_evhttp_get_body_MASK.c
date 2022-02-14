
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evhttp_request {scalar_t__ kind; int chunked; int ntoread; TYPE_1__* evcon; int input_headers; int type; } ;
struct evhttp_connection {int bufev; int state; } ;
typedef int ev_uint64_t ;
struct TYPE_2__ {int max_body_size; } ;



 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct evhttp_connection*) ;
 int FUNC_3 (struct evhttp_connection*,int ) ;
 char* FUNC_4 (int ,char*) ;
 int FUNC_5 (struct evhttp_request*) ;
 int FUNC_6 (struct evhttp_request*,int) ;
 int FUNC_7 (struct evhttp_connection*,struct evhttp_request*) ;
 int FUNC_8 (struct evhttp_connection*,int ) ;
 int FUNC_9 (struct evhttp_connection*,struct evhttp_request*) ;
 int FUNC_10 (struct evhttp_connection*,struct evhttp_request*) ;
 int FUNC_11 (struct evhttp_request*,int ,int *) ;
 scalar_t__ FUNC_12 (char const*,char*) ;

__attribute__((used)) static void
FUNC_13(struct evhttp_connection *VAR_5, struct evhttp_request *VAR_6)
{
 const char *VAR_7;


 if (VAR_6->kind == VAR_1 &&
     !FUNC_8(VAR_5, VAR_6->type)) {
  FUNC_2(VAR_5);
  return;
 }
 VAR_5->state = VAR_0;
 VAR_7 = FUNC_4(VAR_6->input_headers, "Transfer-Encoding");
 if (VAR_7 != ((void*)0) && FUNC_12(VAR_7, "chunked") == 0) {
  VAR_6->chunked = 1;
  VAR_6->ntoread = -1;
 } else {
  if (FUNC_5(VAR_6) == -1) {
   FUNC_3(VAR_5, VAR_2);
   return;
  }
  if (VAR_6->kind == VAR_1 && VAR_6->ntoread < 1) {


   FUNC_2(VAR_5);
   return;
  }
 }


 switch (FUNC_6(VAR_6, 1)) {
  case 130:






    if (VAR_6->ntoread > 0) {

     if ((VAR_6->evcon->max_body_size <= VAR_3) &&
      (ev_uint64_t)VAR_6->ntoread > VAR_6->evcon->max_body_size) {
      FUNC_7(VAR_5, VAR_6);
      return;
     }
    }
    if (!FUNC_1(FUNC_0(VAR_5->bufev)))
     FUNC_10(VAR_5, VAR_6);
   break;
  case 128:
   FUNC_11(VAR_6, VAR_4, ((void*)0));
   return;
  case 129: break;
 }

 FUNC_9(VAR_5, VAR_6);

}
