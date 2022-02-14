
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dsi_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int,int) ;
 int FUNC_2 (struct dsi_data*,int ) ;
 int FUNC_3 (struct dsi_data*,int ,int ) ;
 int FUNC_4 (struct dsi_data*,int ,int,int ) ;

__attribute__((used)) static int FUNC_5(struct dsi_data *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_2(VAR_2, VAR_0);
 VAR_3 = FUNC_1(VAR_3, 1, 15, 15);
 FUNC_3(VAR_2, VAR_0, VAR_3);

 if (!FUNC_4(VAR_2, VAR_0, 15, 0)) {
  FUNC_0("TX_STOP bit not going down\n");
  return -VAR_1;
 }

 return 0;
}
