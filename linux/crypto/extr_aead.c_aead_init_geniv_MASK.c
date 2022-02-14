
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_aead {int dummy; } ;
struct aead_request {int dummy; } ;
struct aead_instance {int dummy; } ;
struct aead_geniv_ctx {struct crypto_aead* child; struct crypto_aead* sknull; int salt; int lock; } ;


 scalar_t__ FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (struct crypto_aead*) ;
 struct aead_instance* FUNC_2 (struct crypto_aead*) ;
 int FUNC_3 (struct aead_instance*) ;
 struct aead_geniv_ctx* FUNC_4 (struct crypto_aead*) ;
 int FUNC_5 (struct crypto_aead*) ;
 scalar_t__ FUNC_6 (struct crypto_aead*) ;
 int FUNC_7 (struct crypto_aead*,scalar_t__) ;
 int VAR_0 ;
 struct crypto_aead* FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int ,int ) ;
 struct crypto_aead* FUNC_13 (int ) ;
 int FUNC_14 (int *) ;

int FUNC_15(struct crypto_aead *VAR_1)
{
 struct aead_geniv_ctx *VAR_2 = FUNC_4(VAR_1);
 struct aead_instance *VAR_3 = FUNC_2(VAR_1);
 struct crypto_aead *VAR_4;
 int VAR_5;

 FUNC_14(&VAR_2->lock);

 VAR_5 = FUNC_9();
 if (VAR_5)
  goto out;

 VAR_5 = FUNC_12(VAR_0, VAR_2->salt,
       FUNC_5(VAR_1));
 FUNC_11();
 if (VAR_5)
  goto out;

 VAR_2->sknull = FUNC_8();
 VAR_5 = FUNC_1(VAR_2->sknull);
 if (FUNC_0(VAR_2->sknull))
  goto out;

 VAR_4 = FUNC_13(FUNC_3(VAR_3));
 VAR_5 = FUNC_1(VAR_4);
 if (FUNC_0(VAR_4))
  goto drop_null;

 VAR_2->child = VAR_4;
 FUNC_7(VAR_1, FUNC_6(VAR_4) +
          sizeof(struct aead_request));

 VAR_5 = 0;

out:
 return VAR_5;

drop_null:
 FUNC_10();
 goto out;
}
