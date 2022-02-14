
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qce_sha_ctx {int dummy; } ;
struct qce_device {int dev; } ;
struct crypto_alg {int cra_priority; int cra_ctxsize; int cra_name; int cra_driver_name; int cra_init; int cra_module; scalar_t__ cra_alignmask; int cra_flags; int cra_blocksize; } ;
struct TYPE_4__ {struct crypto_alg base; int statesize; int digestsize; } ;
struct ahash_alg {TYPE_2__ halg; int setkey; int import; int export; int digest; int final; int update; int init; } ;
struct TYPE_3__ {struct ahash_alg ahash; } ;
struct qce_alg_template {int entry; struct qce_device* qce; int alg_flags; int crypto_alg_type; TYPE_1__ alg; int std_iv; } ;
struct qce_ahash_def {char* name; char* drv_name; int flags; int blocksize; int statesize; int digestsize; int std_iv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct ahash_alg*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (struct qce_alg_template*) ;
 struct qce_alg_template* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_8 (int ,int ,char*,char*) ;

__attribute__((used)) static int FUNC_9(const struct qce_ahash_def *VAR_15,
      struct qce_device *VAR_16)
{
 struct qce_alg_template *VAR_17;
 struct ahash_alg *VAR_18;
 struct crypto_alg *VAR_19;
 int VAR_20;

 VAR_17 = FUNC_6(sizeof(*VAR_17), VAR_4);
 if (!VAR_17)
  return -VAR_3;

 VAR_17->std_iv = VAR_15->std_iv;

 VAR_18 = &VAR_17->alg.ahash;
 VAR_18->init = VAR_13;
 VAR_18->update = VAR_14;
 VAR_18->final = VAR_10;
 VAR_18->digest = VAR_8;
 VAR_18->export = VAR_9;
 VAR_18->import = VAR_12;
 if (FUNC_1(VAR_15->flags))
  VAR_18->setkey = VAR_11;
 VAR_18->halg.digestsize = VAR_15->digestsize;
 VAR_18->halg.statesize = VAR_15->statesize;

 VAR_19 = &VAR_18->halg.base;
 VAR_19->cra_blocksize = VAR_15->blocksize;
 VAR_19->cra_priority = 300;
 VAR_19->cra_flags = VAR_0;
 VAR_19->cra_ctxsize = sizeof(struct qce_sha_ctx);
 VAR_19->cra_alignmask = 0;
 VAR_19->cra_module = VAR_5;
 VAR_19->cra_init = VAR_7;

 FUNC_8(VAR_19->cra_name, VAR_2, "%s", VAR_15->name);
 FUNC_8(VAR_19->cra_driver_name, VAR_2, "%s",
   VAR_15->drv_name);

 FUNC_0(&VAR_17->entry);
 VAR_17->crypto_alg_type = VAR_1;
 VAR_17->alg_flags = VAR_15->flags;
 VAR_17->qce = VAR_16;

 VAR_20 = FUNC_2(VAR_18);
 if (VAR_20) {
  FUNC_5(VAR_17);
  FUNC_4(VAR_16->dev, "%s registration failed\n", VAR_19->cra_name);
  return VAR_20;
 }

 FUNC_7(&VAR_17->entry, &VAR_6);
 FUNC_3(VAR_16->dev, "%s is registered\n", VAR_19->cra_name);
 return 0;
}
