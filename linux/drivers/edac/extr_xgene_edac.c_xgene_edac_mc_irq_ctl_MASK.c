
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xgene_edac_mc_ctx {int mcu_id; TYPE_1__* edac; scalar_t__ mcu_csr; } ;
struct mem_ctl_info {struct xgene_edac_mc_ctx* pvt_info; } ;
struct TYPE_3__ {int mc_registered_mask; int mc_active_mask; int mc_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned int,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct mem_ctl_info *VAR_12, bool VAR_13)
{
 struct xgene_edac_mc_ctx *VAR_14 = VAR_12->pvt_info;
 unsigned int VAR_15;

 if (VAR_11 != VAR_0)
  return;

 FUNC_0(&VAR_14->edac->mc_lock);
 if (VAR_13) {

  VAR_14->edac->mc_registered_mask |= 1 << VAR_14->mcu_id;


  if (VAR_14->edac->mc_registered_mask ==
      VAR_14->edac->mc_active_mask) {

   FUNC_4(VAR_14->edac, VAR_9,
            VAR_7 |
            VAR_3);
   FUNC_4(VAR_14->edac, VAR_10,
            VAR_2);
  }


  VAR_15 = FUNC_2(VAR_14->mcu_csr + VAR_1);
  VAR_15 |= VAR_6 |
         VAR_4 |
         VAR_5 |
         VAR_8;
  FUNC_3(VAR_15, VAR_14->mcu_csr + VAR_1);
 } else {

  VAR_15 = FUNC_2(VAR_14->mcu_csr + VAR_1);
  VAR_15 &= ~(VAR_6 |
    VAR_4 |
    VAR_5 |
    VAR_8);
  FUNC_3(VAR_15, VAR_14->mcu_csr + VAR_1);


  FUNC_5(VAR_14->edac, VAR_9,
           VAR_7 | VAR_3);
  FUNC_5(VAR_14->edac, VAR_10,
           VAR_2);


  VAR_14->edac->mc_registered_mask &= ~(1 << VAR_14->mcu_id);
 }

 FUNC_1(&VAR_14->edac->mc_lock);
}
