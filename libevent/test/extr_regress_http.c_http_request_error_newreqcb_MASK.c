
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_newreqcb_test_state {int connections_error; } ;
typedef enum evhttp_request_error { ____Placeholder_evhttp_request_error } evhttp_request_error ;


 int FUNC_0 (struct http_newreqcb_test_state*) ;

__attribute__((used)) static void
FUNC_1(enum evhttp_request_error VAR_0, void *VAR_1)
{
 struct http_newreqcb_test_state* VAR_2 = VAR_1;
 ++VAR_2->connections_error;

 FUNC_0(VAR_2);
}
