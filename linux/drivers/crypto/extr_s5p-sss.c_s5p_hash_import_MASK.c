
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_hash_reqctx {scalar_t__ bufcnt; int error; int dd; } ;
struct s5p_hash_ctx {int dd; } ;
struct crypto_ahash {int dummy; } ;
struct ahash_request {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct s5p_hash_reqctx* FUNC_0 (struct ahash_request*) ;
 struct s5p_hash_ctx* FUNC_1 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (struct s5p_hash_reqctx*,void const*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct ahash_request *VAR_2, const void *VAR_3)
{
 struct s5p_hash_reqctx *VAR_4 = FUNC_0(VAR_2);
 struct crypto_ahash *VAR_5 = FUNC_2(VAR_2);
 struct s5p_hash_ctx *VAR_6 = FUNC_1(VAR_5);
 const struct s5p_hash_reqctx *VAR_7 = VAR_3;

 FUNC_3(VAR_4, VAR_3, sizeof(*VAR_4) + VAR_0);
 if (VAR_7->bufcnt > VAR_0) {
  VAR_4->error = 1;
  return -VAR_1;
 }

 VAR_4->dd = VAR_6->dd;
 VAR_4->error = 0;

 return 0;
}
