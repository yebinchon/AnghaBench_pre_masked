
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_newreqcb_test_state {int connections_noticed; int connections_throttled; } ;
struct evhttp_request {int dummy; } ;


 int FUNC_0 (struct http_newreqcb_test_state*) ;

__attribute__((used)) static int
FUNC_1(struct evhttp_request* VAR_0, void *VAR_1)
{
 struct http_newreqcb_test_state* VAR_2 = VAR_1;
 ++VAR_2->connections_noticed;
 FUNC_0(VAR_2);
 if (1 == VAR_2->connections_noticed % 7) {
  VAR_2->connections_throttled++;
  return -1;
 }
 return 0;
}
