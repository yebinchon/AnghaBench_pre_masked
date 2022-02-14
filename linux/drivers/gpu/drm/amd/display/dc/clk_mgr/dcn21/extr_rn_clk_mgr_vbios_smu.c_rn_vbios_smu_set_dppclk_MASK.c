
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct clk_mgr_internal {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_mgr_internal*,int ,int) ;

int FUNC_1(struct clk_mgr_internal *VAR_1, int VAR_2)
{
 int VAR_3 = -1;

 uint32_t VAR_4 = VAR_2 / 1000;

 if (VAR_4 <= 100)
  VAR_4 = 101;

 VAR_3 = FUNC_0(
   VAR_1,
   VAR_0,
   VAR_4);

 return VAR_3 * 1000;
}
