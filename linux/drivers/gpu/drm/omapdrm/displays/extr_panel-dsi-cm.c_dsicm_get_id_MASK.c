
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct panel_drv_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct panel_drv_data*,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct panel_drv_data *VAR_3, u8 *VAR_4, u8 *VAR_5, u8 *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3, VAR_0, VAR_4);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_0(VAR_3, VAR_1, VAR_5);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_0(VAR_3, VAR_2, VAR_6);
 if (VAR_7)
  return VAR_7;

 return 0;
}
