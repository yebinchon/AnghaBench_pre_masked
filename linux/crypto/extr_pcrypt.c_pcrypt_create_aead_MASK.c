
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rtattr {int dummy; } ;
struct pcrypt_instance_ctx {int spawn; } ;
struct pcrypt_aead_ctx {int dummy; } ;
struct crypto_template {int dummy; } ;
typedef char const crypto_attr_type ;
struct TYPE_3__ {int cra_ctxsize; int cra_flags; } ;
struct TYPE_4__ {int decrypt; int encrypt; int setauthsize; int setkey; int exit; int init; TYPE_1__ base; int maxauthsize; int ivsize; } ;
struct aead_instance {int free; TYPE_2__ alg; } ;
struct aead_alg {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (struct aead_instance*) ;
 struct pcrypt_instance_ctx* FUNC_3 (struct aead_instance*) ;
 int FUNC_4 (struct crypto_template*,struct aead_instance*) ;
 int FUNC_5 (struct aead_alg*) ;
 int FUNC_6 (struct aead_alg*) ;
 char* FUNC_7 (struct rtattr*) ;
 int FUNC_8 (int *) ;
 char* FUNC_9 (struct rtattr**) ;
 int FUNC_10 (int *,char const*,int ,int ) ;
 int FUNC_11 (int *,int ) ;
 struct aead_alg* FUNC_12 (int *) ;
 int FUNC_13 (struct aead_instance*) ;
 struct aead_instance* FUNC_14 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_15 (int ,int *) ;

__attribute__((used)) static int FUNC_16(struct crypto_template *VAR_10, struct rtattr **VAR_11,
         u32 VAR_12, u32 VAR_13)
{
 struct pcrypt_instance_ctx *VAR_14;
 struct crypto_attr_type *VAR_15;
 struct aead_instance *VAR_16;
 struct aead_alg *VAR_17;
 const char *VAR_18;
 int VAR_19;

 VAR_15 = FUNC_9(VAR_11);
 if (FUNC_0(VAR_15))
  return FUNC_1(VAR_15);

 VAR_18 = FUNC_7(VAR_11[1]);
 if (FUNC_0(VAR_18))
  return FUNC_1(VAR_18);

 VAR_16 = FUNC_14(sizeof(*VAR_16) + sizeof(*VAR_14), VAR_2);
 if (!VAR_16)
  return -VAR_1;

 VAR_14 = FUNC_3(VAR_16);
 FUNC_11(&VAR_14->spawn, FUNC_2(VAR_16));

 VAR_19 = FUNC_10(&VAR_14->spawn, VAR_18, 0, 0);
 if (VAR_19)
  goto out_free_inst;

 VAR_17 = FUNC_12(&VAR_14->spawn);
 VAR_19 = FUNC_15(FUNC_2(VAR_16), &VAR_17->base);
 if (VAR_19)
  goto out_drop_aead;

 VAR_16->alg.base.cra_flags = VAR_0;

 VAR_16->alg.ivsize = FUNC_5(VAR_17);
 VAR_16->alg.maxauthsize = FUNC_6(VAR_17);

 VAR_16->alg.base.cra_ctxsize = sizeof(struct pcrypt_aead_ctx);

 VAR_16->alg.init = VAR_6;
 VAR_16->alg.exit = VAR_5;

 VAR_16->alg.setkey = VAR_8;
 VAR_16->alg.setauthsize = VAR_7;
 VAR_16->alg.encrypt = VAR_4;
 VAR_16->alg.decrypt = VAR_3;

 VAR_16->free = VAR_9;

 VAR_19 = FUNC_4(VAR_10, VAR_16);
 if (VAR_19)
  goto out_drop_aead;

out:
 return VAR_19;

out_drop_aead:
 FUNC_8(&VAR_14->spawn);
out_free_inst:
 FUNC_13(VAR_16);
 goto out;
}
