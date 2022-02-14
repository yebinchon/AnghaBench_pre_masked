
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evrpc_req_generic {int * rpc_data; int * reply; int * request; int * hook_meta; struct evrpc* rpc; } ;
struct evrpc {int (* reply_free ) (int *) ;int (* request_free ) (int *) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct evrpc_req_generic*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(struct evrpc_req_generic* VAR_0)
{
 struct evrpc *VAR_1;
 FUNC_0(VAR_0 != ((void*)0));
 VAR_1 = VAR_0->rpc;


 if (VAR_0->hook_meta != ((void*)0))
  FUNC_2(VAR_0->hook_meta);
 if (VAR_0->request != ((void*)0))
  VAR_1->request_free(VAR_0->request);
 if (VAR_0->reply != ((void*)0))
  VAR_1->reply_free(VAR_0->reply);
 if (VAR_0->rpc_data != ((void*)0))
  FUNC_1(VAR_0->rpc_data);
 FUNC_3(VAR_0);
}
