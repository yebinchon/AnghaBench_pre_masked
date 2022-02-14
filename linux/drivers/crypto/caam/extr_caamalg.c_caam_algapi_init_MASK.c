
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


typedef int u32 ;
struct device {int dummy; } ;
struct TYPE_14__ {int cra_driver_name; } ;
struct TYPE_17__ {TYPE_5__ base; } ;
struct TYPE_13__ {int class1_alg_type; } ;
struct caam_skcipher_alg {int registered; TYPE_8__ skcipher; TYPE_4__ caam; } ;
struct caam_drv_private {int era; TYPE_3__* ctrl; } ;
struct TYPE_16__ {int cra_driver_name; } ;
struct TYPE_18__ {unsigned int maxauthsize; TYPE_7__ base; } ;
struct TYPE_15__ {int class1_alg_type; int class2_alg_type; } ;
struct caam_aead_alg {int registered; TYPE_9__ aead; TYPE_6__ caam; } ;
struct TYPE_11__ {int afha; int ptha; int ccha; int desa; int mdha; int aesa; } ;
struct TYPE_10__ {int cha_rev_ls; int cha_num_ls; int cha_id_ls; } ;
struct TYPE_12__ {TYPE_2__ vreg; TYPE_1__ perfmon; } ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 int FUNC_1 (struct caam_aead_alg*) ;
 int FUNC_2 (struct caam_skcipher_alg*) ;
 int FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (TYPE_8__*) ;
 struct caam_drv_private* FUNC_5 (struct device*) ;
 void* VAR_25 ;
 void* VAR_26 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct device *VAR_27)
{
 struct caam_drv_private *VAR_28 = FUNC_5(VAR_27);
 int VAR_29 = 0, VAR_30 = 0;
 u32 VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37;
 u32 VAR_38;
 unsigned int VAR_39 = VAR_24;
 bool VAR_40 = 0, VAR_41;





 if (VAR_28->era < 10) {
  u32 VAR_42, VAR_43, VAR_44;

  VAR_42 = FUNC_9(&VAR_28->ctrl->perfmon.cha_id_ls);
  VAR_31 = VAR_42 & VAR_0;
  VAR_34 = (VAR_42 & VAR_5) >> VAR_6;

  VAR_43 = FUNC_9(&VAR_28->ctrl->perfmon.cha_num_ls);
  VAR_33 = (VAR_43 & VAR_3) >>
      VAR_4;
  VAR_32 = VAR_43 & VAR_0;
  VAR_35 = (VAR_43 & VAR_5) >> VAR_6;
  VAR_38 = (VAR_43 & VAR_1) >>
       VAR_2;
  VAR_36 = 0;
  VAR_37 = 0;

  VAR_44 = FUNC_9(&VAR_28->ctrl->perfmon.cha_rev_ls) &
    VAR_0;
  VAR_41 = !(VAR_31 == VAR_9 && VAR_44 < 8);
 } else {
  u32 VAR_45, VAR_46;

  VAR_45 = FUNC_9(&VAR_28->ctrl->vreg.aesa);
  VAR_46 = FUNC_9(&VAR_28->ctrl->vreg.mdha);

  VAR_31 = (VAR_45 & VAR_10) >> VAR_12;
  VAR_34 = (VAR_46 & VAR_10) >> VAR_12;

  VAR_33 = FUNC_9(&VAR_28->ctrl->vreg.desa) & VAR_8;
  VAR_32 = VAR_45 & VAR_8;
  VAR_35 = VAR_46 & VAR_8;
  VAR_36 = FUNC_9(&VAR_28->ctrl->vreg.ccha) & VAR_8;
  VAR_37 = FUNC_9(&VAR_28->ctrl->vreg.ptha) & VAR_8;
  VAR_38 = FUNC_9(&VAR_28->ctrl->vreg.afha) & VAR_8;

  VAR_41 = VAR_45 & VAR_7;
 }


 if (VAR_35 && VAR_34 == VAR_11)
  VAR_39 = VAR_23;

 for (VAR_29 = 0; VAR_29 < FUNC_0(VAR_26); VAR_29++) {
  struct caam_skcipher_alg *VAR_47 = VAR_26 + VAR_29;
  u32 VAR_48 = VAR_47->caam.class1_alg_type & VAR_21;


  if (!VAR_33 &&
      ((VAR_48 == VAR_16) ||
       (VAR_48 == VAR_20)))
    continue;


  if (!VAR_32 && (VAR_48 == VAR_17))
    continue;


  if (!VAR_38 && VAR_48 == VAR_18)
   continue;





  if (VAR_31 == VAR_9 &&
      (VAR_47->caam.class1_alg_type & VAR_14) ==
      VAR_15)
   continue;

  FUNC_2(VAR_47);

  VAR_30 = FUNC_4(&VAR_47->skcipher);
  if (VAR_30) {
   FUNC_8("%s alg registration failed\n",
    VAR_47->skcipher.base.cra_driver_name);
   continue;
  }

  VAR_47->registered = 1;
  VAR_40 = 1;
 }

 for (VAR_29 = 0; VAR_29 < FUNC_0(VAR_25); VAR_29++) {
  struct caam_aead_alg *VAR_49 = VAR_25 + VAR_29;
  u32 VAR_50 = VAR_49->caam.class1_alg_type &
     VAR_21;
  u32 VAR_51 = VAR_49->caam.class2_alg_type &
     VAR_21;
  u32 VAR_52 = VAR_49->caam.class1_alg_type & VAR_14;


  if (!VAR_33 &&
      ((VAR_50 == VAR_16) ||
       (VAR_50 == VAR_20)))
    continue;


  if (!VAR_32 && (VAR_50 == VAR_17))
    continue;


  if (VAR_50 == VAR_19 && !VAR_36)
   continue;


  if (VAR_51 == VAR_22 && !VAR_37)
   continue;


  if (VAR_50 == VAR_17 &&
      VAR_52 == VAR_13 && !VAR_41)
   continue;





  if (FUNC_6(VAR_51) &&
      (!VAR_35 || VAR_49->aead.maxauthsize > VAR_39))
   continue;

  FUNC_1(VAR_49);

  VAR_30 = FUNC_3(&VAR_49->aead);
  if (VAR_30) {
   FUNC_8("%s alg registration failed\n",
    VAR_49->aead.base.cra_driver_name);
   continue;
  }

  VAR_49->registered = 1;
  VAR_40 = 1;
 }

 if (VAR_40)
  FUNC_7("caam algorithms registered in /proc/crypto\n");

 return VAR_30;
}
