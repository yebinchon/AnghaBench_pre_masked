
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_rpm {int rpm_clk_id; int rpm; } ;


 int FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct clk_rpm *VAR_1, unsigned long VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2, 1000);

 return FUNC_1(VAR_1->rpm, VAR_0,
         VAR_1->rpm_clk_id, &VAR_3, 1);
}
