
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsi_data {int vdds_dsi_enabled; int vdds_dsi_reg; int pll; int module_id; int dss; int ulps_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (struct dsi_data*) ;
 int FUNC_1 (struct dsi_data*) ;
 int FUNC_2 (struct dsi_data*,int ) ;
 int FUNC_3 (struct dsi_data*,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct dsi_data *VAR_1, bool VAR_2,
       bool VAR_3)
{
 if (VAR_3 && !VAR_1->ulps_enabled)
  FUNC_1(VAR_1);


 FUNC_2(VAR_1, 0);
 FUNC_3(VAR_1, 0, 0);
 FUNC_3(VAR_1, 1, 0);
 FUNC_3(VAR_1, 2, 0);
 FUNC_3(VAR_1, 3, 0);

 FUNC_5(VAR_1->dss, VAR_1->module_id, VAR_0);
 FUNC_0(VAR_1);
 FUNC_4(&VAR_1->pll);

 if (VAR_2) {
  FUNC_6(VAR_1->vdds_dsi_reg);
  VAR_1->vdds_dsi_enabled = 0;
 }
}
