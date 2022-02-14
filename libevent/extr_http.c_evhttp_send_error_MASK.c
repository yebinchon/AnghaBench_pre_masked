
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int evcon; } ;
struct evbuffer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct evbuffer*,int ,int,char const*,char const*) ;
 int FUNC_1 (struct evbuffer*) ;
 struct evbuffer* FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct evhttp_request*,int,char const*) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (struct evhttp_request*,struct evbuffer*) ;

void
FUNC_7(struct evhttp_request *VAR_1, int VAR_2, const char *VAR_3)
{







 struct evbuffer *VAR_4 = FUNC_2();
 if (VAR_4 == ((void*)0)) {

  FUNC_3(VAR_1->evcon);
  return;
 }
 if (VAR_3 == ((void*)0)) {
  VAR_3 = FUNC_5(VAR_2);
 }

 FUNC_4(VAR_1, VAR_2, VAR_3);

 FUNC_0(VAR_4, "<HTML><HEAD>\n" "<TITLE>%d %s</TITLE>\n" "</HEAD><BODY>\n" "<H1>%s</H1>\n" "</BODY></HTML>\n", VAR_2, VAR_3, VAR_3);

 FUNC_6(VAR_1, VAR_4);

 FUNC_1(VAR_4);

}
