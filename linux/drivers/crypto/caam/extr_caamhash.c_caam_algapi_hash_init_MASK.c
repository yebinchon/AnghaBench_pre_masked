
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct TYPE_12__ {unsigned int digestsize; } ;
struct TYPE_13__ {TYPE_4__ halg; } ;
struct caam_hash_template {int alg_type; int driver_name; int hmac_driver_name; TYPE_5__ template_ahash; } ;
struct TYPE_14__ {int cra_driver_name; } ;
struct TYPE_15__ {TYPE_6__ base; } ;
struct TYPE_16__ {TYPE_7__ halg; } ;
struct caam_hash_alg {int entry; TYPE_8__ ahash_alg; } ;
struct caam_drv_private {int era; TYPE_3__* ctrl; } ;
struct TYPE_10__ {int mdha; } ;
struct TYPE_9__ {int cha_num_ls; int cha_id_ls; } ;
struct TYPE_11__ {TYPE_2__ vreg; TYPE_1__ perfmon; } ;


 int FUNC_0 (struct caam_hash_template*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct caam_hash_alg*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct caam_hash_alg*) ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 struct caam_hash_alg* FUNC_4 (struct caam_hash_template*,int) ;
 int FUNC_5 (TYPE_8__*) ;
 struct caam_drv_private* FUNC_6 (struct device*) ;
 struct caam_hash_template* VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct caam_hash_alg*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (char*,int ,...) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct device *VAR_12)
{
 int VAR_13 = 0, VAR_14 = 0;
 struct caam_drv_private *VAR_15 = FUNC_6(VAR_12);
 unsigned int VAR_16 = VAR_9;
 u32 VAR_17, VAR_18;





 if (VAR_15->era < 10) {
  VAR_18 = (FUNC_11(&VAR_15->ctrl->perfmon.cha_id_ls) &
     VAR_0) >> VAR_1;
  VAR_17 = (FUNC_11(&VAR_15->ctrl->perfmon.cha_num_ls) &
      VAR_0) >> VAR_1;
 } else {
  u32 VAR_19 = FUNC_11(&VAR_15->ctrl->vreg.mdha);

  VAR_18 = (VAR_19 & VAR_3) >> VAR_5;
  VAR_17 = VAR_19 & VAR_2;
 }





 if (!VAR_17)
  return 0;


 if (VAR_18 == VAR_4)
  VAR_16 = VAR_8;

 FUNC_1(&VAR_11);


 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_10); VAR_13++) {
  struct caam_hash_alg *VAR_20;
  struct caam_hash_template *VAR_21 = VAR_10 + VAR_13;


  if (FUNC_7(VAR_21->alg_type) &&
      VAR_21->template_ahash.halg.digestsize > VAR_16)
   continue;


  VAR_20 = FUNC_4(VAR_21, 1);
  if (FUNC_2(VAR_20)) {
   VAR_14 = FUNC_3(VAR_20);
   FUNC_10("%s alg allocation failed\n",
    VAR_21->hmac_driver_name);
   continue;
  }

  VAR_14 = FUNC_5(&VAR_20->ahash_alg);
  if (VAR_14) {
   FUNC_10("%s alg registration failed: %d\n",
    VAR_20->ahash_alg.halg.base.cra_driver_name,
    VAR_14);
   FUNC_8(VAR_20);
  } else
   FUNC_9(&VAR_20->entry, &VAR_11);

  if ((VAR_21->alg_type & VAR_7) == VAR_6)
   continue;


  VAR_20 = FUNC_4(VAR_21, 0);
  if (FUNC_2(VAR_20)) {
   VAR_14 = FUNC_3(VAR_20);
   FUNC_10("%s alg allocation failed\n", VAR_21->driver_name);
   continue;
  }

  VAR_14 = FUNC_5(&VAR_20->ahash_alg);
  if (VAR_14) {
   FUNC_10("%s alg registration failed: %d\n",
    VAR_20->ahash_alg.halg.base.cra_driver_name,
    VAR_14);
   FUNC_8(VAR_20);
  } else
   FUNC_9(&VAR_20->entry, &VAR_11);
 }

 return VAR_14;
}
