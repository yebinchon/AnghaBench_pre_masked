
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_edac_pmd_ctx {int pmd; int edac; } ;
struct edac_device_ctl_info {scalar_t__ op_state; struct xgene_edac_pmd_ctx* pvt_info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct edac_device_ctl_info*,int) ;
 int FUNC_3 (struct edac_device_ctl_info*) ;

__attribute__((used)) static void FUNC_4(struct edac_device_ctl_info *VAR_4,
      bool VAR_5)
{
 struct xgene_edac_pmd_ctx *VAR_6 = VAR_4->pvt_info;
 int VAR_7;


 if (VAR_4->op_state == VAR_1) {
  if (VAR_5)
   FUNC_0(VAR_6->edac, VAR_2,
            VAR_3 << VAR_6->pmd);
  else
   FUNC_1(VAR_6->edac, VAR_2,
            VAR_3 << VAR_6->pmd);
 }

 if (VAR_5) {
  FUNC_3(VAR_4);


  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
   FUNC_2(VAR_4, VAR_7);
 }
}
