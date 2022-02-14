
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int cra_ctxsize; int cra_priority; int cra_alignmask; int cra_blocksize; } ;
struct TYPE_6__ {int exit; int init; int setkey; TYPE_2__ base; int ivsize; int max_keysize; int min_keysize; } ;
struct skcipher_instance {TYPE_3__ alg; int free; } ;
struct skcipher_ctx_simple {int dummy; } ;
struct rtattr {int dummy; } ;
struct crypto_template {int name; } ;
struct crypto_spawn {int dummy; } ;
struct TYPE_4__ {int cia_max_keysize; int cia_min_keysize; } ;
struct crypto_attr_type {int type; int mask; int cra_blocksize; TYPE_1__ cra_cipher; int cra_priority; int cra_alignmask; } ;
struct crypto_alg {int type; int mask; int cra_blocksize; TYPE_1__ cra_cipher; int cra_priority; int cra_alignmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct skcipher_instance* FUNC_0 (struct crypto_attr_type*) ;
 struct skcipher_instance* FUNC_1 (int) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct crypto_attr_type*) ;
 struct crypto_attr_type* FUNC_3 (struct rtattr**,int ,int) ;
 struct crypto_attr_type* FUNC_4 (struct rtattr**) ;
 int FUNC_5 (struct crypto_spawn*,struct crypto_attr_type*,int ,int) ;
 int FUNC_6 (int ,int ,struct crypto_attr_type*) ;
 int FUNC_7 (struct crypto_attr_type*) ;
 int FUNC_8 (int,int,int ) ;
 int FUNC_9 (struct skcipher_instance*) ;
 struct skcipher_instance* FUNC_10 (int,int ) ;
 int FUNC_11 (struct skcipher_instance*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct crypto_spawn* FUNC_12 (struct skcipher_instance*) ;
 int VAR_10 ;

struct skcipher_instance *
FUNC_13(struct crypto_template *VAR_11, struct rtattr **VAR_12,
          struct crypto_alg **VAR_13)
{
 struct crypto_attr_type *VAR_14;
 struct crypto_alg *VAR_15;
 struct skcipher_instance *VAR_16;
 struct crypto_spawn *VAR_17;
 u32 VAR_18;
 int VAR_19;

 VAR_14 = FUNC_4(VAR_12);
 if (FUNC_2(VAR_14))
  return FUNC_0(VAR_14);

 if ((VAR_14->type ^ VAR_3) & VAR_14->mask)
  return FUNC_1(-VAR_4);

 VAR_18 = VAR_2 |
  FUNC_8(VAR_14->type, VAR_14->mask,
        VAR_0);

 VAR_15 = FUNC_3(VAR_12, VAR_1, VAR_18);
 if (FUNC_2(VAR_15))
  return FUNC_0(VAR_15);

 VAR_16 = FUNC_10(sizeof(*VAR_16) + sizeof(*VAR_17), VAR_6);
 if (!VAR_16) {
  VAR_19 = -VAR_5;
  goto err_put_cipher_alg;
 }
 VAR_17 = FUNC_12(VAR_16);

 VAR_19 = FUNC_6(FUNC_11(VAR_16), VAR_11->name,
      VAR_15);
 if (VAR_19)
  goto err_free_inst;

 VAR_19 = FUNC_5(VAR_17, VAR_15,
    FUNC_11(VAR_16),
    VAR_2);
 if (VAR_19)
  goto err_free_inst;
 VAR_16->free = VAR_8;


 VAR_16->alg.base.cra_blocksize = VAR_15->cra_blocksize;
 VAR_16->alg.base.cra_alignmask = VAR_15->cra_alignmask;
 VAR_16->alg.base.cra_priority = VAR_15->cra_priority;
 VAR_16->alg.min_keysize = VAR_15->cra_cipher.cia_min_keysize;
 VAR_16->alg.max_keysize = VAR_15->cra_cipher.cia_max_keysize;
 VAR_16->alg.ivsize = VAR_15->cra_blocksize;


 VAR_16->alg.base.cra_ctxsize = sizeof(struct skcipher_ctx_simple);
 VAR_16->alg.setkey = VAR_10;
 VAR_16->alg.init = VAR_9;
 VAR_16->alg.exit = VAR_7;

 *VAR_13 = VAR_15;
 return VAR_16;

err_free_inst:
 FUNC_9(VAR_16);
err_put_cipher_alg:
 FUNC_7(VAR_15);
 return FUNC_1(VAR_19);
}
