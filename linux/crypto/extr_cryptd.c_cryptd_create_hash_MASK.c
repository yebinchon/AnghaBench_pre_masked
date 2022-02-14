
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int cra_flags; int cra_ctxsize; int cra_exit; int cra_init; } ;
struct TYPE_5__ {TYPE_1__ base; int statesize; int digestsize; } ;
struct TYPE_6__ {int digest; int setkey; int import; int export; int finup; int final; int update; int init; TYPE_2__ halg; } ;
struct crypto_alg {int cra_flags; } ;
struct shash_alg {TYPE_3__ alg; int statesize; int digestsize; struct crypto_alg base; } ;
struct rtattr {int dummy; } ;
struct hashd_instance_ctx {int spawn; struct cryptd_queue* queue; } ;
struct crypto_template {int dummy; } ;
struct cryptd_queue {int dummy; } ;
struct cryptd_hash_ctx {int dummy; } ;
struct ahash_instance {TYPE_3__ alg; int statesize; int digestsize; struct crypto_alg base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct shash_alg*) ;
 int FUNC_1 (struct shash_alg*) ;
 int FUNC_2 (struct shash_alg*) ;
 struct hashd_instance_ctx* FUNC_3 (struct shash_alg*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct crypto_template*,struct shash_alg*) ;
 struct shash_alg* FUNC_6 (struct crypto_alg*,int ,int) ;
 int FUNC_7 (struct rtattr**,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,struct shash_alg*,int ) ;
 int FUNC_10 (struct crypto_alg*) ;
 scalar_t__ FUNC_11 (struct shash_alg*) ;
 int FUNC_12 (struct shash_alg*) ;
 struct shash_alg* FUNC_13 (struct rtattr*,int ,int ) ;

__attribute__((used)) static int FUNC_14(struct crypto_template *VAR_13, struct rtattr **VAR_14,
         struct cryptd_queue *VAR_15)
{
 struct hashd_instance_ctx *VAR_16;
 struct ahash_instance *VAR_17;
 struct shash_alg *VAR_18;
 struct crypto_alg *VAR_19;
 u32 VAR_20 = 0;
 u32 VAR_21 = 0;
 int VAR_22;

 FUNC_7(VAR_14, &VAR_20, &VAR_21);

 VAR_18 = FUNC_13(VAR_14[1], VAR_20, VAR_21);
 if (FUNC_0(VAR_18))
  return FUNC_1(VAR_18);

 VAR_19 = &VAR_18->base;
 VAR_17 = FUNC_6(VAR_19, FUNC_4(),
         sizeof(*VAR_16));
 VAR_22 = FUNC_1(VAR_17);
 if (FUNC_0(VAR_17))
  goto out_put_alg;

 VAR_16 = FUNC_3(VAR_17);
 VAR_16->queue = VAR_15;

 VAR_22 = FUNC_9(&VAR_16->spawn, VAR_18,
          FUNC_2(VAR_17));
 if (VAR_22)
  goto out_free_inst;

 VAR_17->alg.halg.base.cra_flags = VAR_0 |
  (VAR_19->cra_flags & (VAR_1 |
       VAR_2));

 VAR_17->alg.halg.digestsize = VAR_18->digestsize;
 VAR_17->alg.halg.statesize = VAR_18->statesize;
 VAR_17->alg.halg.base.cra_ctxsize = sizeof(struct cryptd_hash_ctx);

 VAR_17->alg.halg.base.cra_init = VAR_10;
 VAR_17->alg.halg.base.cra_exit = VAR_4;

 VAR_17->alg.init = VAR_9;
 VAR_17->alg.update = VAR_12;
 VAR_17->alg.final = VAR_6;
 VAR_17->alg.finup = VAR_7;
 VAR_17->alg.export = VAR_5;
 VAR_17->alg.import = VAR_8;
 if (FUNC_11(VAR_18))
  VAR_17->alg.setkey = VAR_11;
 VAR_17->alg.digest = VAR_3;

 VAR_22 = FUNC_5(VAR_13, VAR_17);
 if (VAR_22) {
  FUNC_8(&VAR_16->spawn);
out_free_inst:
  FUNC_12(VAR_17);
 }

out_put_alg:
 FUNC_10(VAR_19);
 return VAR_22;
}
