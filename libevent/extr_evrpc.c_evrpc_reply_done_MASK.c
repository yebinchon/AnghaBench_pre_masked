
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evrpc_request_wrapper {int evcon; int hook_meta; struct evhttp_request* req; int ev_timeout; struct evrpc_pool* pool; } ;
struct evrpc_pool {int input_hooks; } ;
struct evhttp_request {int input_buffer; } ;





 int FUNC_0 (int) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct evhttp_request*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct evrpc_pool*,struct evrpc_request_wrapper*,int (*) (struct evrpc_request_wrapper*,int)) ;
 int FUNC_6 (int *,struct evrpc_request_wrapper*,struct evhttp_request*,int ) ;
 int FUNC_7 (struct evrpc_request_wrapper*,int) ;

__attribute__((used)) static void
FUNC_8(struct evhttp_request *VAR_0, void *VAR_1)
{
 struct evrpc_request_wrapper *VAR_2 = VAR_1;
 struct evrpc_pool *VAR_3 = VAR_2->pool;
 int VAR_4 = 130;


 FUNC_2(&VAR_2->ev_timeout);

 VAR_2->req = VAR_0;


 if (VAR_0 == ((void*)0)) {
  FUNC_7(VAR_2, 130);
  return;
 }

 if (FUNC_1(&VAR_3->input_hooks) != ((void*)0)) {
  FUNC_4(&VAR_2->hook_meta, VAR_2->evcon);


  VAR_4 = FUNC_6(&VAR_3->input_hooks,
      VAR_2, VAR_0, VAR_0->input_buffer);

  switch (VAR_4) {
  case 128:
  case 130:
   break;
  case 129:






   FUNC_3(VAR_0);

   FUNC_5(VAR_3, VAR_2,
       FUNC_7);
   return;
  default:
   FUNC_0(VAR_4 == 128 ||
       VAR_4 == 130 ||
       VAR_4 == 129);
  }
 }

 FUNC_7(VAR_2, VAR_4);


}
