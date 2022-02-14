
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_async_request {int dummy; } ;
struct crypto_ahash {int dummy; } ;
struct ccp_sha_req_ctx {unsigned int hash_rem; unsigned int nbytes; unsigned int buf_count; int data_sg; int ctx; scalar_t__ final; int src; int buf; } ;
struct ahash_request {scalar_t__ result; } ;


 struct ahash_request* FUNC_0 (struct crypto_async_request*) ;
 struct ccp_sha_req_ctx* FUNC_1 (struct ahash_request*) ;
 unsigned int FUNC_2 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_3 (struct ahash_request*) ;
 int FUNC_4 (scalar_t__,int ,unsigned int) ;
 int FUNC_5 (int ,int ,unsigned int,unsigned int,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct crypto_async_request *VAR_0, int VAR_1)
{
 struct ahash_request *VAR_2 = FUNC_0(VAR_0);
 struct crypto_ahash *VAR_3 = FUNC_3(VAR_2);
 struct ccp_sha_req_ctx *VAR_4 = FUNC_1(VAR_2);
 unsigned int VAR_5 = FUNC_2(VAR_3);

 if (VAR_1)
  goto e_free;

 if (VAR_4->hash_rem) {

  unsigned int VAR_6 = VAR_4->nbytes - VAR_4->hash_rem;

  FUNC_5(VAR_4->buf, VAR_4->src,
      VAR_6, VAR_4->hash_rem, 0);
  VAR_4->buf_count = VAR_4->hash_rem;
 } else {
  VAR_4->buf_count = 0;
 }


 if (VAR_2->result && VAR_4->final)
  FUNC_4(VAR_2->result, VAR_4->ctx, VAR_5);

e_free:
 FUNC_6(&VAR_4->data_sg);

 return VAR_1;
}
