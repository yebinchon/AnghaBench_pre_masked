
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
struct evbuffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct evbuffer*,int ) ;
 int FUNC_1 (struct evbuffer*) ;
 struct evbuffer* FUNC_2 () ;
 int FUNC_3 (struct evhttp_request*,int ,char*,struct evbuffer*) ;

__attribute__((used)) static void
FUNC_4(struct evhttp_request *VAR_2, void *VAR_3)
{
 struct evbuffer *VAR_4 = FUNC_2();
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 1<<20; ++VAR_5) {
  FUNC_0(VAR_4, VAR_0);
 }
 FUNC_3(VAR_2, VAR_1, "Everything is fine", VAR_4);
 FUNC_1(VAR_4);
}
