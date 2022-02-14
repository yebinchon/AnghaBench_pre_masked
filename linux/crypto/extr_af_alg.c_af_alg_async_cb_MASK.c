
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct kiocb {int (* ki_complete ) (struct kiocb*,int,int ) ;} ;
struct crypto_async_request {struct af_alg_async_req* data; } ;
struct af_alg_async_req {unsigned int outlen; struct kiocb* iocb; struct sock* sk; } ;


 int FUNC_0 (struct af_alg_async_req*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct kiocb*,int,int ) ;

void FUNC_3(struct crypto_async_request *VAR_0, int VAR_1)
{
 struct af_alg_async_req *VAR_2 = VAR_0->data;
 struct sock *VAR_3 = VAR_2->sk;
 struct kiocb *VAR_4 = VAR_2->iocb;
 unsigned int VAR_5;


 VAR_5 = VAR_2->outlen;

 FUNC_0(VAR_2);
 FUNC_1(VAR_3);

 VAR_4->ki_complete(VAR_4, VAR_1 ? VAR_1 : VAR_5, 0);
}
