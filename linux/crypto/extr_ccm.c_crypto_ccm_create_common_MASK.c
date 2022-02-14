
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* cra_name; int cra_blocksize; char* cra_driver_name; int cra_flags; int cra_priority; int cra_alignmask; } ;
struct skcipher_alg {TYPE_2__ base; } ;
struct rtattr {int dummy; } ;
struct TYPE_5__ {char* cra_name; char* cra_driver_name; int cra_priority; int cra_alignmask; } ;
struct hash_alg_common {int digestsize; TYPE_1__ base; } ;
struct crypto_template {int dummy; } ;
struct crypto_ccm_ctx {int dummy; } ;
struct crypto_attr_type {int type; int mask; } ;
struct crypto_alg {int type; int mask; } ;
struct ccm_instance_ctx {int mac; int ctr; } ;
struct TYPE_7__ {int cra_flags; int cra_priority; int cra_blocksize; int cra_alignmask; int cra_ctxsize; int cra_driver_name; int cra_name; } ;
struct TYPE_8__ {int ivsize; int maxauthsize; int decrypt; int encrypt; int setauthsize; int setkey; int exit; int init; TYPE_3__ base; int chunksize; } ;
struct aead_instance {int free; TYPE_4__ alg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct crypto_attr_type*) ;
 int FUNC_1 (struct crypto_attr_type*) ;
 struct hash_alg_common* FUNC_2 (struct crypto_attr_type*) ;
 int FUNC_3 (struct aead_instance*) ;
 struct ccm_instance_ctx* FUNC_4 (struct aead_instance*) ;
 int FUNC_5 (struct crypto_template*,struct aead_instance*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct crypto_attr_type* FUNC_8 (char const*,int *,int ,int) ;
 struct crypto_attr_type* FUNC_9 (struct rtattr**) ;
 int FUNC_10 (int *,char const*,int ,int ) ;
 int FUNC_11 (int *,struct hash_alg_common*,int ) ;
 int FUNC_12 (struct crypto_attr_type*) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (struct skcipher_alg*) ;
 int FUNC_16 (struct skcipher_alg*) ;
 struct skcipher_alg* FUNC_17 (int *) ;
 int FUNC_18 (struct aead_instance*) ;
 struct aead_instance* FUNC_19 (int,int ) ;
 scalar_t__ FUNC_20 (int ,scalar_t__,char*,char*,...) ;
 scalar_t__ FUNC_21 (char*,char*) ;
 scalar_t__ FUNC_22 (char*,char*,int) ;

__attribute__((used)) static int FUNC_23(struct crypto_template *VAR_17,
        struct rtattr **VAR_18,
        const char *VAR_19,
        const char *VAR_20)
{
 struct crypto_attr_type *VAR_21;
 struct aead_instance *VAR_22;
 struct skcipher_alg *VAR_23;
 struct crypto_alg *VAR_24;
 struct hash_alg_common *VAR_25;
 struct ccm_instance_ctx *VAR_26;
 int VAR_27;

 VAR_21 = FUNC_9(VAR_18);
 if (FUNC_0(VAR_21))
  return FUNC_1(VAR_21);

 if ((VAR_21->type ^ VAR_1) & VAR_21->mask)
  return -VAR_5;

 VAR_24 = FUNC_8(VAR_20, &VAR_9,
      VAR_3,
      VAR_2 |
      VAR_0);
 if (FUNC_0(VAR_24))
  return FUNC_1(VAR_24);

 VAR_25 = FUNC_2(VAR_24);
 VAR_27 = -VAR_5;
 if (FUNC_22(VAR_25->base.cra_name, "cbcmac(", 7) != 0 ||
     VAR_25->digestsize != 16)
  goto out_put_mac;

 VAR_22 = FUNC_19(sizeof(*VAR_22) + sizeof(*VAR_26), VAR_8);
 VAR_27 = -VAR_7;
 if (!VAR_22)
  goto out_put_mac;

 VAR_26 = FUNC_4(VAR_22);
 VAR_27 = FUNC_11(&VAR_26->mac, VAR_25,
          FUNC_3(VAR_22));
 if (VAR_27)
  goto err_free_inst;

 FUNC_14(&VAR_26->ctr, FUNC_3(VAR_22));
 VAR_27 = FUNC_10(&VAR_26->ctr, VAR_19, 0,
       FUNC_13(VAR_21->type,
       VAR_21->mask));
 if (VAR_27)
  goto err_drop_mac;

 VAR_23 = FUNC_17(&VAR_26->ctr);


 VAR_27 = -VAR_5;
 if (FUNC_22(VAR_23->base.cra_name, "ctr(", 4) != 0 ||
     FUNC_16(VAR_23) != 16 ||
     VAR_23->base.cra_blocksize != 1)
  goto err_drop_ctr;


 if (FUNC_21(VAR_23->base.cra_name + 4, VAR_25->base.cra_name + 7) != 0)
  goto err_drop_ctr;

 VAR_27 = -VAR_6;
 if (FUNC_20(VAR_22->alg.base.cra_name, VAR_4,
       "ccm(%s", VAR_23->base.cra_name + 4) >= VAR_4)
  goto err_drop_ctr;

 if (FUNC_20(VAR_22->alg.base.cra_driver_name, VAR_4,
       "ccm_base(%s,%s)", VAR_23->base.cra_driver_name,
       VAR_25->base.cra_driver_name) >= VAR_4)
  goto err_drop_ctr;

 VAR_22->alg.base.cra_flags = VAR_23->base.cra_flags & VAR_0;
 VAR_22->alg.base.cra_priority = (VAR_25->base.cra_priority +
           VAR_23->base.cra_priority) / 2;
 VAR_22->alg.base.cra_blocksize = 1;
 VAR_22->alg.base.cra_alignmask = VAR_25->base.cra_alignmask |
           VAR_23->base.cra_alignmask;
 VAR_22->alg.ivsize = 16;
 VAR_22->alg.chunksize = FUNC_15(VAR_23);
 VAR_22->alg.maxauthsize = 16;
 VAR_22->alg.base.cra_ctxsize = sizeof(struct crypto_ccm_ctx);
 VAR_22->alg.init = VAR_14;
 VAR_22->alg.exit = VAR_12;
 VAR_22->alg.setkey = VAR_16;
 VAR_22->alg.setauthsize = VAR_15;
 VAR_22->alg.encrypt = VAR_11;
 VAR_22->alg.decrypt = VAR_10;

 VAR_22->free = VAR_13;

 VAR_27 = FUNC_5(VAR_17, VAR_22);
 if (VAR_27)
  goto err_drop_ctr;

out_put_mac:
 FUNC_12(VAR_24);
 return VAR_27;

err_drop_ctr:
 FUNC_7(&VAR_26->ctr);
err_drop_mac:
 FUNC_6(&VAR_26->mac);
err_free_inst:
 FUNC_18(VAR_22);
 goto out_put_mac;
}
