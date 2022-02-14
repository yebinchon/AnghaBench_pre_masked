
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_edac_pmd_ctx {unsigned int pmd; int edac; } ;
struct edac_device_ctl_info {struct xgene_edac_pmd_ctx* pvt_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (struct edac_device_ctl_info*,int) ;
 int FUNC_2 (struct edac_device_ctl_info*) ;

__attribute__((used)) static void FUNC_3(struct edac_device_ctl_info *VAR_3)
{
 struct xgene_edac_pmd_ctx *VAR_4 = VAR_3->pvt_info;
 unsigned int VAR_5;
 int VAR_6;

 FUNC_0(VAR_4->edac, VAR_1, &VAR_5);
 if (!((VAR_2 << VAR_4->pmd) & VAR_5))
  return;


 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  FUNC_1(VAR_3, VAR_6);


 FUNC_2(VAR_3);
}
