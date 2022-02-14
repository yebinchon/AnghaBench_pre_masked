
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_adpll_data {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct ti_adpll_data*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct ti_adpll_data *VAR_2)
{
 int VAR_3 = VAR_0;

 do {
  if (FUNC_1(VAR_2))
   return 0;
  FUNC_2(200, 300);
 } while (VAR_3--);

 FUNC_0(VAR_2->dev, "pll failed to lock\n");
 return -VAR_1;
}
