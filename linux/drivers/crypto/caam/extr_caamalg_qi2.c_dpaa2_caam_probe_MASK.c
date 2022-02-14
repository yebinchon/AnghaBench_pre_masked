
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef scalar_t__ u32 ;
struct device {int dummy; } ;
struct fsl_mc_device {struct device dev; } ;
struct TYPE_16__ {int md_acc_num; int ptha_acc_num; int ccha_acc_num; int aes_acc_num; int des_acc_num; } ;
struct dpaa2_caam_priv {int mc_io; int * ppriv; TYPE_5__ sec_attr; int domain; } ;
struct TYPE_13__ {int cra_driver_name; } ;
struct TYPE_19__ {TYPE_2__ base; } ;
struct TYPE_12__ {scalar_t__ class1_alg_type; struct device* dev; } ;
struct caam_skcipher_alg {int registered; TYPE_8__ skcipher; TYPE_1__ caam; } ;
struct caam_hash_template {int driver_name; } ;
struct TYPE_17__ {int cra_driver_name; } ;
struct TYPE_18__ {TYPE_6__ base; } ;
struct TYPE_20__ {TYPE_7__ halg; } ;
struct caam_hash_alg {int entry; TYPE_9__ ahash_alg; } ;
struct TYPE_15__ {int cra_driver_name; } ;
struct TYPE_11__ {TYPE_4__ base; } ;
struct TYPE_14__ {scalar_t__ class1_alg_type; scalar_t__ class2_alg_type; struct device* dev; } ;
struct caam_aead_alg {int registered; TYPE_10__ aead; TYPE_3__ caam; } ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct caam_hash_alg*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (struct caam_hash_alg*) ;
 int VAR_12 ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (struct caam_aead_alg*) ;
 struct caam_hash_alg* FUNC_7 (struct device*,struct caam_hash_template*,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_8 (struct caam_skcipher_alg*) ;
 int FUNC_9 (TYPE_10__*) ;
 int FUNC_10 (TYPE_9__*) ;
 int FUNC_11 (TYPE_8__*) ;
 int FUNC_12 (struct device*,char*) ;
 int FUNC_13 (struct device*,char*) ;
 int FUNC_14 (struct device*,struct dpaa2_caam_priv*) ;
 int FUNC_15 (struct device*,char*,int ,int) ;
 struct dpaa2_caam_priv* FUNC_16 (struct device*,int,int ) ;
 int FUNC_17 (struct device*,int ) ;
 int FUNC_18 (struct dpaa2_caam_priv*) ;
 int FUNC_19 (struct dpaa2_caam_priv*) ;
 int FUNC_20 (struct dpaa2_caam_priv*) ;
 int FUNC_21 (struct dpaa2_caam_priv*) ;
 int FUNC_22 (struct dpaa2_caam_priv*) ;
 int FUNC_23 (struct dpaa2_caam_priv*) ;
 int FUNC_24 (struct fsl_mc_device*) ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 int FUNC_25 (int *) ;
 int FUNC_26 (struct fsl_mc_device*,int ,int *) ;
 int FUNC_27 (int ) ;
 int VAR_18 ;
 int FUNC_28 (struct device*) ;
 int FUNC_29 (struct caam_hash_alg*) ;
 int FUNC_30 (char*,int ,int ,int ,int *) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (int *,int *) ;
 int FUNC_33 (int *) ;
 int VAR_19 ;

__attribute__((used)) static int FUNC_34(struct fsl_mc_device *VAR_20)
{
 struct device *VAR_21;
 struct dpaa2_caam_priv *VAR_22;
 int VAR_23, VAR_24 = 0;
 bool VAR_25 = 0;







 VAR_14 = 1;

 VAR_13 = 0;

 VAR_21 = &VAR_20->dev;

 VAR_22 = FUNC_16(VAR_21, sizeof(*VAR_22), VAR_4);
 if (!VAR_22)
  return -VAR_1;

 FUNC_14(VAR_21, VAR_22);

 VAR_22->domain = FUNC_28(VAR_21);

 VAR_19 = FUNC_30("dpaa2_caamqicache", VAR_0,
         0, VAR_12, ((void*)0));
 if (!VAR_19) {
  FUNC_12(VAR_21, "Can't allocate SEC cache\n");
  return -VAR_1;
 }

 VAR_24 = FUNC_17(VAR_21, FUNC_1(49));
 if (VAR_24) {
  FUNC_12(VAR_21, "dma_set_mask_and_coherent() failed\n");
  goto err_dma_mask;
 }


 VAR_24 = FUNC_26(VAR_20, 0, &VAR_22->mc_io);
 if (VAR_24) {
  if (VAR_24 == -VAR_2)
   VAR_24 = -VAR_3;
  else
   FUNC_12(VAR_21, "MC portal allocation failed\n");

  goto err_dma_mask;
 }

 VAR_22->ppriv = FUNC_5(*VAR_22->ppriv);
 if (!VAR_22->ppriv) {
  FUNC_12(VAR_21, "alloc_percpu() failed\n");
  VAR_24 = -VAR_1;
  goto err_alloc_ppriv;
 }


 VAR_24 = FUNC_24(VAR_20);
 if (VAR_24) {
  FUNC_12(VAR_21, "dpaa2_dpseci_setup() failed\n");
  goto err_dpseci_setup;
 }


 VAR_24 = FUNC_21(VAR_22);
 if (VAR_24) {
  if (VAR_24 != -VAR_3)
   FUNC_12(VAR_21, "dpaa2_dpseci_dpio_setup() failed\n");
  goto err_dpio_setup;
 }


 VAR_24 = FUNC_18(VAR_22);
 if (VAR_24) {
  FUNC_12(VAR_21, "dpaa2_dpseci_bind() failed\n");
  goto err_bind;
 }


 VAR_24 = FUNC_22(VAR_22);
 if (VAR_24) {
  FUNC_12(VAR_21, "dpaa2_dpseci_enable() failed\n");
  goto err_bind;
 }

 FUNC_19(VAR_22);


 for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_16); VAR_23++) {
  struct caam_skcipher_alg *VAR_26 = VAR_16 + VAR_23;
  u32 VAR_27 = VAR_26->caam.class1_alg_type & VAR_9;


  if (!VAR_22->sec_attr.des_acc_num &&
      (VAR_27 == VAR_5 ||
       VAR_27 == VAR_8))
   continue;


  if (!VAR_22->sec_attr.aes_acc_num &&
      VAR_27 == VAR_6)
   continue;


  if (VAR_27 == VAR_7 &&
      !VAR_22->sec_attr.ccha_acc_num)
   continue;

  VAR_26->caam.dev = VAR_21;
  FUNC_8(VAR_26);

  VAR_24 = FUNC_11(&VAR_26->skcipher);
  if (VAR_24) {
   FUNC_15(VAR_21, "%s alg registration failed: %d\n",
     VAR_26->skcipher.base.cra_driver_name, VAR_24);
   continue;
  }

  VAR_26->registered = 1;
  VAR_25 = 1;
 }

 for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_15); VAR_23++) {
  struct caam_aead_alg *VAR_28 = VAR_15 + VAR_23;
  u32 VAR_29 = VAR_28->caam.class1_alg_type &
     VAR_9;
  u32 VAR_30 = VAR_28->caam.class2_alg_type &
     VAR_9;


  if (!VAR_22->sec_attr.des_acc_num &&
      (VAR_29 == VAR_5 ||
       VAR_29 == VAR_8))
   continue;


  if (!VAR_22->sec_attr.aes_acc_num &&
      VAR_29 == VAR_6)
   continue;


  if (VAR_29 == VAR_7 &&
      !VAR_22->sec_attr.ccha_acc_num)
   continue;


  if (VAR_30 == VAR_10 &&
      !VAR_22->sec_attr.ptha_acc_num)
   continue;





  if ((VAR_30 & ~VAR_11) == 0x40 &&
      !VAR_22->sec_attr.md_acc_num)
   continue;

  VAR_28->caam.dev = VAR_21;
  FUNC_6(VAR_28);

  VAR_24 = FUNC_9(&VAR_28->aead);
  if (VAR_24) {
   FUNC_15(VAR_21, "%s alg registration failed: %d\n",
     VAR_28->aead.base.cra_driver_name, VAR_24);
   continue;
  }

  VAR_28->registered = 1;
  VAR_25 = 1;
 }
 if (VAR_25)
  FUNC_13(VAR_21, "algorithms registered in /proc/crypto\n");


 FUNC_2(&VAR_18);





 if (!VAR_22->sec_attr.md_acc_num)
  return 0;

 for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_17); VAR_23++) {
  struct caam_hash_alg *VAR_31;
  struct caam_hash_template *VAR_32 = VAR_17 + VAR_23;


  VAR_31 = FUNC_7(VAR_21, VAR_32, 1);
  if (FUNC_3(VAR_31)) {
   VAR_24 = FUNC_4(VAR_31);
   FUNC_15(VAR_21, "%s hash alg allocation failed: %d\n",
     VAR_32->driver_name, VAR_24);
   continue;
  }

  VAR_24 = FUNC_10(&VAR_31->ahash_alg);
  if (VAR_24) {
   FUNC_15(VAR_21, "%s alg registration failed: %d\n",
     VAR_31->ahash_alg.halg.base.cra_driver_name,
     VAR_24);
   FUNC_29(VAR_31);
  } else {
   FUNC_32(&VAR_31->entry, &VAR_18);
  }


  VAR_31 = FUNC_7(VAR_21, VAR_32, 0);
  if (FUNC_3(VAR_31)) {
   VAR_24 = FUNC_4(VAR_31);
   FUNC_15(VAR_21, "%s alg allocation failed: %d\n",
     VAR_32->driver_name, VAR_24);
   continue;
  }

  VAR_24 = FUNC_10(&VAR_31->ahash_alg);
  if (VAR_24) {
   FUNC_15(VAR_21, "%s alg registration failed: %d\n",
     VAR_31->ahash_alg.halg.base.cra_driver_name,
     VAR_24);
   FUNC_29(VAR_31);
  } else {
   FUNC_32(&VAR_31->entry, &VAR_18);
  }
 }
 if (!FUNC_33(&VAR_18))
  FUNC_13(VAR_21, "hash algorithms registered in /proc/crypto\n");

 return VAR_24;

err_bind:
 FUNC_20(VAR_22);
err_dpio_setup:
 FUNC_23(VAR_22);
err_dpseci_setup:
 FUNC_25(VAR_22->ppriv);
err_alloc_ppriv:
 FUNC_27(VAR_22->mc_io);
err_dma_mask:
 FUNC_31(VAR_19);

 return VAR_24;
}
