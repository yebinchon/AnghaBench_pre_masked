
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xgene_edac_mc_ctx {TYPE_1__* edac; } ;
struct TYPE_2__ {int mc_active_mask; int mcba_map; int mcbb_map; int csw_map; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct xgene_edac_mc_ctx *VAR_4, int VAR_5)
{
 unsigned int VAR_6;
 u32 VAR_7;

 if (FUNC_0(VAR_4->edac->csw_map, VAR_0, &VAR_6))
  return 0;

 if (VAR_6 & VAR_1) {




  if (FUNC_0(VAR_4->edac->mcbb_map, VAR_2, &VAR_6))
   return 0;
  VAR_7 = (VAR_6 & VAR_3) ? 0xF : 0x5;
 } else {




  if (FUNC_0(VAR_4->edac->mcba_map, VAR_2, &VAR_6))
   return 0;
  VAR_7 = (VAR_6 & VAR_3) ? 0x3 : 0x1;
 }


 if (!VAR_4->edac->mc_active_mask)
  VAR_4->edac->mc_active_mask = VAR_7;

 return (VAR_7 & (1 << VAR_5)) ? 1 : 0;
}
