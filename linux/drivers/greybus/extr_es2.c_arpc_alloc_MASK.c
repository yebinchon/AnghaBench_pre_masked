
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct arpc {struct arpc* req; int response_received; int data; int size; int type; void* resp; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct arpc*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,void*,int) ;

__attribute__((used)) static struct arpc *FUNC_6(void *VAR_2, u16 VAR_3, u8 VAR_4)
{
 struct arpc *VAR_5;

 if (VAR_3 + sizeof(*VAR_5->req) > VAR_0)
  return ((void*)0);

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return ((void*)0);

 FUNC_0(&VAR_5->list);
 VAR_5->req = FUNC_4(sizeof(*VAR_5->req) + VAR_3, VAR_1);
 if (!VAR_5->req)
  goto err_free_rpc;

 VAR_5->resp = FUNC_4(sizeof(*VAR_5->resp), VAR_1);
 if (!VAR_5->resp)
  goto err_free_req;

 VAR_5->req->type = VAR_4;
 VAR_5->req->size = FUNC_1(sizeof(*VAR_5->req) + VAR_3);
 FUNC_5(VAR_5->req->data, VAR_2, VAR_3);

 FUNC_2(&VAR_5->response_received);

 return VAR_5;

err_free_req:
 FUNC_3(VAR_5->req);
err_free_rpc:
 FUNC_3(VAR_5);

 return ((void*)0);
}
