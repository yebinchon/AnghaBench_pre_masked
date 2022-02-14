
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct device {int dummy; } ;
struct TYPE_14__ {int cra_driver_name; } ;
struct TYPE_17__ {TYPE_5__ base; } ;
struct TYPE_13__ {scalar_t__ class1_alg_type; } ;
struct caam_skcipher_alg {int registered; TYPE_8__ skcipher; TYPE_4__ caam; } ;
struct caam_drv_private {int era; TYPE_3__* ctrl; int qi_present; } ;
struct TYPE_16__ {int cra_driver_name; } ;
struct TYPE_18__ {unsigned int maxauthsize; TYPE_7__ base; } ;
struct TYPE_15__ {scalar_t__ class1_alg_type; scalar_t__ class2_alg_type; } ;
struct caam_aead_alg {int registered; TYPE_9__ aead; TYPE_6__ caam; } ;
struct TYPE_11__ {int desa; int mdha; int aesa; } ;
struct TYPE_10__ {int cha_num_ls; int cha_id_ls; } ;
struct TYPE_12__ {TYPE_2__ vreg; TYPE_1__ perfmon; } ;


 int FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 int FUNC_1 (struct caam_aead_alg*) ;
 scalar_t__ VAR_18 ;
 int FUNC_2 (struct caam_skcipher_alg*) ;
 int FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (TYPE_8__*) ;
 struct caam_drv_private* FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct device*,char*,int ) ;
 void* VAR_19 ;
 void* VAR_20 ;
 int FUNC_8 (char*,int ) ;
 scalar_t__ FUNC_9 (int *) ;

int FUNC_10(struct device *VAR_21)
{
 struct caam_drv_private *VAR_22 = FUNC_5(VAR_21);
 int VAR_23 = 0, VAR_24 = 0;
 u32 VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
 unsigned int VAR_30 = VAR_17;
 bool VAR_31 = 0;


 if (!VAR_22->qi_present || VAR_18)
  return 0;





 if (VAR_22->era < 10) {
  u32 VAR_32, VAR_33;

  VAR_32 = FUNC_9(&VAR_22->ctrl->perfmon.cha_id_ls);
  VAR_25 = VAR_32 & VAR_0;
  VAR_28 = (VAR_32 & VAR_3) >> VAR_4;

  VAR_33 = FUNC_9(&VAR_22->ctrl->perfmon.cha_num_ls);
  VAR_27 = (VAR_33 & VAR_1) >>
      VAR_2;
  VAR_26 = VAR_33 & VAR_0;
  VAR_29 = (VAR_33 & VAR_3) >> VAR_4;
 } else {
  u32 VAR_34, VAR_35;

  VAR_34 = FUNC_9(&VAR_22->ctrl->vreg.aesa);
  VAR_35 = FUNC_9(&VAR_22->ctrl->vreg.mdha);

  VAR_25 = (VAR_34 & VAR_7) >> VAR_9;
  VAR_28 = (VAR_35 & VAR_7) >> VAR_9;

  VAR_27 = FUNC_9(&VAR_22->ctrl->vreg.desa) & VAR_5;
  VAR_26 = VAR_34 & VAR_5;
  VAR_29 = VAR_35 & VAR_5;
 }


 if (VAR_29 && VAR_28 == VAR_8)
  VAR_30 = VAR_16;

 for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_20); VAR_23++) {
  struct caam_skcipher_alg *VAR_36 = VAR_20 + VAR_23;
  u32 VAR_37 = VAR_36->caam.class1_alg_type & VAR_15;


  if (!VAR_27 &&
      ((VAR_37 == VAR_12) ||
       (VAR_37 == VAR_14)))
   continue;


  if (!VAR_26 && (VAR_37 == VAR_13))
   continue;

  FUNC_2(VAR_36);

  VAR_24 = FUNC_4(&VAR_36->skcipher);
  if (VAR_24) {
   FUNC_7(VAR_21, "%s alg registration failed\n",
     VAR_36->skcipher.base.cra_driver_name);
   continue;
  }

  VAR_36->registered = 1;
  VAR_31 = 1;
 }

 for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_19); VAR_23++) {
  struct caam_aead_alg *VAR_38 = VAR_19 + VAR_23;
  u32 VAR_39 = VAR_38->caam.class1_alg_type &
     VAR_15;
  u32 VAR_40 = VAR_38->caam.class2_alg_type &
     VAR_15;
  u32 VAR_41 = VAR_38->caam.class1_alg_type & VAR_11;


  if (!VAR_27 &&
      ((VAR_39 == VAR_12) ||
       (VAR_39 == VAR_14)))
   continue;


  if (!VAR_26 && (VAR_39 == VAR_13))
   continue;





  if (VAR_25 == VAR_6 && VAR_41 == VAR_10)
   continue;





  if (VAR_40 &&
      (!VAR_29 || (VAR_38->aead.maxauthsize > VAR_30)))
   continue;

  FUNC_1(VAR_38);

  VAR_24 = FUNC_3(&VAR_38->aead);
  if (VAR_24) {
   FUNC_8("%s alg registration failed\n",
    VAR_38->aead.base.cra_driver_name);
   continue;
  }

  VAR_38->registered = 1;
  VAR_31 = 1;
 }

 if (VAR_31)
  FUNC_6(VAR_21, "algorithms registered in /proc/crypto\n");

 return VAR_24;
}
