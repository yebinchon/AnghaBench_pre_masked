
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sha256_state {int buf; scalar_t__ state; int count; } ;
struct sha1_state {int buffer; scalar_t__ state; int count; } ;
struct qce_sha_reqctx {unsigned long flags; int buf; int digest; int count; } ;
struct crypto_ahash {int dummy; } ;
struct ahash_request {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 struct qce_sha_reqctx* FUNC_4 (struct ahash_request*) ;
 unsigned int FUNC_5 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_6 (struct ahash_request*) ;
 int FUNC_7 (struct crypto_ahash*) ;
 unsigned int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,unsigned int) ;
 int FUNC_10 (int *,int ,unsigned int) ;

__attribute__((used)) static int FUNC_11(struct ahash_request *VAR_1, void *VAR_2)
{
 struct crypto_ahash *VAR_3 = FUNC_6(VAR_1);
 struct qce_sha_reqctx *VAR_4 = FUNC_4(VAR_1);
 unsigned long VAR_5 = VAR_4->flags;
 unsigned int VAR_6 = FUNC_5(VAR_3);
 unsigned int VAR_7 =
   FUNC_8(FUNC_7(VAR_3));

 if (FUNC_0(VAR_5) || FUNC_1(VAR_5)) {
  struct sha1_state *VAR_8 = VAR_2;

  VAR_8->count = VAR_4->count;
  FUNC_10((__be32 *)VAR_8->state,
           VAR_4->digest, VAR_6);
  FUNC_9(VAR_8->buffer, VAR_4->buf, VAR_7);
 } else if (FUNC_2(VAR_5) || FUNC_3(VAR_5)) {
  struct sha256_state *VAR_9 = VAR_2;

  VAR_9->count = VAR_4->count;
  FUNC_10((__be32 *)VAR_9->state,
           VAR_4->digest, VAR_6);
  FUNC_9(VAR_9->buf, VAR_4->buf, VAR_7);
 } else {
  return -VAR_0;
 }

 return 0;
}
