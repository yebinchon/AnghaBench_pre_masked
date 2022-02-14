
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsi_data {int scp_clk_refcount; } ;


 int VAR_0 ;
 int FUNC_0 (struct dsi_data*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct dsi_data *VAR_1)
{
 if (VAR_1->scp_clk_refcount++ == 0)
  FUNC_0(VAR_1, VAR_0, 1, 14, 14);
}
