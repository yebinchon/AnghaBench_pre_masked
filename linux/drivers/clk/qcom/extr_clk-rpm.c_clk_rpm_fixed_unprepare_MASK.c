
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_rpm {int enabled; int rpm_clk_id; int rpm; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *,int) ;
 struct clk_rpm* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_2(struct clk_hw *VAR_1)
{
 struct clk_rpm *VAR_2 = FUNC_1(VAR_1);
 u32 VAR_3 = 0;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->rpm, VAR_0,
        VAR_2->rpm_clk_id, &VAR_3, 1);
 if (!VAR_4)
  VAR_2->enabled = 0;
}
