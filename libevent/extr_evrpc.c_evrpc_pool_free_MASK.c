
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evrpc_request_wrapper {int output_hooks; int input_hooks; int connections; int paused_requests; int requests; } ;
struct evrpc_pool {int output_hooks; int input_hooks; int connections; int paused_requests; int requests; } ;
struct evrpc_hook_ctx {int output_hooks; int input_hooks; int connections; int paused_requests; int requests; } ;
struct evrpc_hook {int dummy; } ;
struct evhttp_connection {int output_hooks; int input_hooks; int connections; int paused_requests; int requests; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct evrpc_request_wrapper*,int ) ;
 int FUNC_3 (struct evrpc_request_wrapper*) ;
 int FUNC_4 (struct evrpc_request_wrapper*,int ,struct evrpc_hook*) ;
 int FUNC_5 (struct evrpc_request_wrapper*) ;
 int FUNC_6 (struct evrpc_request_wrapper*) ;
 int VAR_2 ;

void
FUNC_7(struct evrpc_pool *VAR_3)
{
 struct evhttp_connection *VAR_4;
 struct evrpc_request_wrapper *VAR_5;
 struct evrpc_hook_ctx *VAR_6;
 struct evrpc_hook *VAR_7;
 int VAR_8;

 while ((VAR_5 = FUNC_1(&VAR_3->requests)) != ((void*)0)) {
  FUNC_2(&VAR_3->requests, VAR_5, VAR_2);
  FUNC_5(VAR_5);
 }

 while ((VAR_6 = FUNC_1(&VAR_3->paused_requests)) != ((void*)0)) {
  FUNC_2(&VAR_3->paused_requests, VAR_6, VAR_2);
  FUNC_6(VAR_6);
 }

 while ((VAR_4 = FUNC_1(&VAR_3->connections)) != ((void*)0)) {
  FUNC_2(&VAR_3->connections, VAR_4, VAR_2);
  FUNC_3(VAR_4);
 }

 while ((VAR_7 = FUNC_1(&VAR_3->input_hooks)) != ((void*)0)) {
  VAR_8 = FUNC_4(VAR_3, VAR_0, VAR_7);
  FUNC_0(VAR_8);
 }

 while ((VAR_7 = FUNC_1(&VAR_3->output_hooks)) != ((void*)0)) {
  VAR_8 = FUNC_4(VAR_3, VAR_1, VAR_7);
  FUNC_0(VAR_8);
 }

 FUNC_6(VAR_3);
}
