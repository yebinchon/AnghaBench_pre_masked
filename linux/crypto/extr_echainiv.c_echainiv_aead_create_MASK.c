
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct rtattr {int dummy; } ;
struct crypto_template {int dummy; } ;
struct TYPE_3__ {int cra_ctxsize; } ;
struct TYPE_4__ {int ivsize; TYPE_1__ base; int exit; int init; int decrypt; int encrypt; } ;
struct aead_instance {int (* free ) (struct aead_instance*) ;TYPE_2__ alg; } ;
struct aead_geniv_ctx {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct aead_instance*) ;
 int FUNC_1 (struct aead_instance*) ;
 int VAR_1 ;
 struct aead_instance* FUNC_2 (struct crypto_template*,struct rtattr**,int ,int ) ;
 int FUNC_3 (struct aead_instance*) ;
 int VAR_2 ;
 int FUNC_4 (struct crypto_template*,struct aead_instance*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct crypto_template *VAR_5,
    struct rtattr **VAR_6)
{
 struct aead_instance *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_5, VAR_6, 0, 0);

 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_8 = -VAR_0;
 if (VAR_7->alg.ivsize & (sizeof(u64) - 1) || !VAR_7->alg.ivsize)
  goto free_inst;

 VAR_7->alg.encrypt = VAR_4;
 VAR_7->alg.decrypt = VAR_3;

 VAR_7->alg.init = VAR_2;
 VAR_7->alg.exit = VAR_1;

 VAR_7->alg.base.cra_ctxsize = sizeof(struct aead_geniv_ctx);
 VAR_7->alg.base.cra_ctxsize += VAR_7->alg.ivsize;

 VAR_7->free = FUNC_3;

 VAR_8 = FUNC_4(VAR_5, VAR_7);
 if (VAR_8)
  goto free_inst;

out:
 return VAR_8;

free_inst:
 FUNC_3(VAR_7);
 goto out;
}
