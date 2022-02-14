
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int chunked; int * evcon; int output_headers; } ;


 scalar_t__ FUNC_0 (struct evhttp_request*,int,int) ;
 int FUNC_1 (int ,char*,char*) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,struct evhttp_request*) ;
 int FUNC_4 (struct evhttp_request*,int,char const*) ;
 scalar_t__ FUNC_5 (struct evhttp_request*) ;
 int FUNC_6 (int *,int *,int *) ;

void
FUNC_7(struct evhttp_request *VAR_0, int VAR_1,
    const char *VAR_2)
{
 FUNC_4(VAR_0, VAR_1, VAR_2);

 if (VAR_0->evcon == ((void*)0))
  return;

 if (FUNC_2(VAR_0->output_headers, "Content-Length") == ((void*)0) &&
     FUNC_0(VAR_0, 1, 1) &&
     FUNC_5(VAR_0)) {





  FUNC_1(VAR_0->output_headers, "Transfer-Encoding",
      "chunked");
  VAR_0->chunked = 1;
 } else {
  VAR_0->chunked = 0;
 }
 FUNC_3(VAR_0->evcon, VAR_0);
 FUNC_6(VAR_0->evcon, ((void*)0), ((void*)0));
}
