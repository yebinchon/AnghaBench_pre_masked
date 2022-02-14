
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evrpc_req_generic {int hook_meta; int * rpc_data; struct evhttp_request* http_req; struct evrpc* rpc; } ;
struct evrpc {TYPE_1__* base; } ;
struct evhttp_request {scalar_t__ type; int input_buffer; int evcon; } ;
struct TYPE_2__ {int input_hooks; } ;


 scalar_t__ VAR_0 ;



 int FUNC_0 (int) ;
 int VAR_1 ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct evhttp_request*,int ,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_1__*,struct evrpc_req_generic*,int (*) (struct evrpc_req_generic*,int const)) ;
 int FUNC_6 (int *,struct evrpc_req_generic*,struct evhttp_request*,int ) ;
 int FUNC_7 (struct evrpc_req_generic*) ;
 int FUNC_8 (struct evrpc_req_generic*,int const) ;
 struct evrpc_req_generic* FUNC_9 (int,int) ;

__attribute__((used)) static void
FUNC_10(struct evhttp_request *VAR_2, void *VAR_3)
{
 struct evrpc *VAR_4 = VAR_3;
 struct evrpc_req_generic *VAR_5 = ((void*)0);


 if (VAR_2->type != VAR_0 ||
     FUNC_2(VAR_2->input_buffer) <= 0)
  goto error;

 VAR_5 = FUNC_9(1, sizeof(struct evrpc_req_generic));
 if (VAR_5 == ((void*)0))
  goto error;
 VAR_5->rpc = VAR_4;
 VAR_5->http_req = VAR_2;
 VAR_5->rpc_data = ((void*)0);

 if (FUNC_1(&VAR_4->base->input_hooks) != ((void*)0)) {
  int VAR_6;

  FUNC_4(&VAR_5->hook_meta, VAR_2->evcon);




  VAR_6 = FUNC_6(&VAR_4->base->input_hooks,
      VAR_5, VAR_2, VAR_2->input_buffer);
  switch (VAR_6) {
  case 128:
   goto error;
  case 129:
   FUNC_5(VAR_4->base, VAR_5,
       FUNC_8);
   return;
  case 130:
   break;
  default:
   FUNC_0(VAR_6 == 128 ||
       VAR_6 == 130 ||
       VAR_6 == 129);
  }
 }

 FUNC_8(VAR_5, 130);
 return;

error:
 if (VAR_5)
  FUNC_7(VAR_5);
 FUNC_3(VAR_2, VAR_1, ((void*)0));
 return;
}
