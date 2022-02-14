
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsi_data {scalar_t__ module_id; int vdds_dsi_enabled; int pll; int dss; int vdds_dsi_reg; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dsi_data*) ;
 int FUNC_2 (struct dsi_data*) ;
 int FUNC_3 (struct dsi_data*) ;
 int FUNC_4 (struct dsi_data*) ;
 int FUNC_5 (struct dsi_data*) ;
 int FUNC_6 (struct dsi_data*,int) ;
 int FUNC_7 (struct dsi_data*) ;
 int FUNC_8 (struct dsi_data*) ;
 int FUNC_9 (struct dsi_data*) ;
 int FUNC_10 (struct dsi_data*,int,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,scalar_t__,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct dsi_data *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_12(&VAR_3->pll);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4)
  goto err0;

 FUNC_13(VAR_3->dss, VAR_3->module_id,
      VAR_3->module_id == 0 ?
      VAR_1 : VAR_2);

 FUNC_0("PLL OK\n");

 if (!VAR_3->vdds_dsi_enabled) {
  VAR_4 = FUNC_15(VAR_3->vdds_dsi_reg);
  if (VAR_4)
   goto err1;

  VAR_3->vdds_dsi_enabled = 1;
 }

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  goto err2;

 FUNC_1(VAR_3);

 FUNC_8(VAR_3);
 FUNC_9(VAR_3);

 if (1)
  FUNC_1(VAR_3);

 VAR_4 = FUNC_7(VAR_3);
 if (VAR_4)
  goto err3;


 FUNC_10(VAR_3, 0, 1);
 FUNC_10(VAR_3, 1, 1);
 FUNC_10(VAR_3, 2, 1);
 FUNC_10(VAR_3, 3, 1);
 FUNC_6(VAR_3, 1);
 FUNC_5(VAR_3);

 return 0;
err3:
 FUNC_3(VAR_3);
err2:
 FUNC_14(VAR_3->vdds_dsi_reg);
 VAR_3->vdds_dsi_enabled = 0;
err1:
 FUNC_13(VAR_3->dss, VAR_3->module_id, VAR_0);
err0:
 FUNC_11(&VAR_3->pll);

 return VAR_4;
}
