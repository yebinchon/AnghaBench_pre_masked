
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sahara_sha_reqctx {int digest_size; int context_size; scalar_t__ active; int mode; } ;
struct crypto_ahash {int dummy; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 struct sahara_sha_reqctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (struct sahara_sha_reqctx*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct ahash_request *VAR_3)
{
 struct crypto_ahash *VAR_4 = FUNC_2(VAR_3);
 struct sahara_sha_reqctx *VAR_5 = FUNC_0(VAR_3);

 FUNC_3(VAR_5, 0, sizeof(*VAR_5));

 switch (FUNC_1(VAR_4)) {
 case 129:
  VAR_5->mode |= VAR_1;
  VAR_5->digest_size = 129;
  break;
 case 128:
  VAR_5->mode |= VAR_2;
  VAR_5->digest_size = 128;
  break;
 default:
  return -VAR_0;
 }

 VAR_5->context_size = VAR_5->digest_size + 4;
 VAR_5->active = 0;

 return 0;
}
