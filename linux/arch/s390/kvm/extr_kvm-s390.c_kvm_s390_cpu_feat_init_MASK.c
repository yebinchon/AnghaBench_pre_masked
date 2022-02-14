
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int cpacf_mask_t ;
struct TYPE_4__ {int* plo; int dfltcc; int sortl; scalar_t__ kdsa; scalar_t__ kma; scalar_t__ ppno; scalar_t__ pcc; scalar_t__ kmo; scalar_t__ kmf; scalar_t__ kmctr; scalar_t__ pckmo; scalar_t__ klmd; scalar_t__ kimd; scalar_t__ km; scalar_t__ kmc; scalar_t__ kmac; int ptff; } ;
struct TYPE_3__ {scalar_t__ has_kss; scalar_t__ has_ibs; scalar_t__ has_cei; scalar_t__ has_ib; scalar_t__ has_gsls; scalar_t__ has_gpere; scalar_t__ has_siif; scalar_t__ has_64bscao; int has_sief2; } ;


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
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_2__ VAR_27 ;
 int VAR_28 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int,int ) ;
 TYPE_1__ VAR_29 ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(void)
{
 int VAR_30;

 for (VAR_30 = 0; VAR_30 < 256; ++VAR_30) {
  if (FUNC_3(VAR_30))
   VAR_27.plo[VAR_30 >> 3] |= 0x80 >> (VAR_30 & 7);
 }

 if (FUNC_5(28))
  FUNC_4(VAR_27.ptff,
       sizeof(VAR_27.ptff),
       VAR_26);

 if (FUNC_5(17)) {
  FUNC_0(VAR_5, (cpacf_mask_t *)
         VAR_27.kmac);
  FUNC_0(VAR_6, (cpacf_mask_t *)
         VAR_27.kmc);
  FUNC_0(VAR_3, (cpacf_mask_t *)
         VAR_27.km);
  FUNC_0(VAR_1, (cpacf_mask_t *)
         VAR_27.kimd);
  FUNC_0(VAR_2, (cpacf_mask_t *)
         VAR_27.klmd);
 }
 if (FUNC_5(76))
  FUNC_0(VAR_11, (cpacf_mask_t *)
         VAR_27.pckmo);
 if (FUNC_5(77)) {
  FUNC_0(VAR_7, (cpacf_mask_t *)
         VAR_27.kmctr);
  FUNC_0(VAR_8, (cpacf_mask_t *)
         VAR_27.kmf);
  FUNC_0(VAR_9, (cpacf_mask_t *)
         VAR_27.kmo);
  FUNC_0(VAR_10, (cpacf_mask_t *)
         VAR_27.pcc);
 }
 if (FUNC_5(57))
  FUNC_0(VAR_12, (cpacf_mask_t *)
         VAR_27.ppno);

 if (FUNC_5(146))
  FUNC_0(VAR_4, (cpacf_mask_t *)
         VAR_27.kma);

 if (FUNC_5(155))
  FUNC_0(VAR_0, (cpacf_mask_t *)
         VAR_27.kdsa);

 if (FUNC_5(150))
  FUNC_1(VAR_14, VAR_27.sortl);

 if (FUNC_5(151))
  FUNC_1(VAR_13, VAR_27.dfltcc);

 if (VAR_25)
  FUNC_2(VAR_17);




 if (!VAR_29.has_sief2 || !VAR_25 || !VAR_29.has_64bscao ||
     !FUNC_5(3) || !VAR_28)
  return;
 FUNC_2(VAR_23);
 if (VAR_29.has_64bscao)
  FUNC_2(VAR_15);
 if (VAR_29.has_siif)
  FUNC_2(VAR_24);
 if (VAR_29.has_gpere)
  FUNC_2(VAR_18);
 if (VAR_29.has_gsls)
  FUNC_2(VAR_19);
 if (VAR_29.has_ib)
  FUNC_2(VAR_20);
 if (VAR_29.has_cei)
  FUNC_2(VAR_16);
 if (VAR_29.has_ibs)
  FUNC_2(VAR_21);
 if (VAR_29.has_kss)
  FUNC_2(VAR_22);
}
