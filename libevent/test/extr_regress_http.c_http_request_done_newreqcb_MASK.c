
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_newreqcb_test_state {int connections_done; int connections_good; } ;
struct evhttp_request {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct evhttp_request*) ;
 int FUNC_1 (struct evhttp_request*,int *) ;
 int FUNC_2 (struct http_newreqcb_test_state*) ;

__attribute__((used)) static void
FUNC_3(struct evhttp_request *VAR_1, void *VAR_2)
{
 struct http_newreqcb_test_state* VAR_3 = VAR_2;
 if (VAR_1 && FUNC_0(VAR_1) == VAR_0) {
  ++VAR_3->connections_good;
  FUNC_1(VAR_1, ((void*)0));
 }
 ++VAR_3->connections_done;

 FUNC_2(VAR_3);
}
