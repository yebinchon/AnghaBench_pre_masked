
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct ccu_data {int dummy; } ;
struct bcm_clk_div {int dummy; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct bcm_clk_div*) ;
 unsigned long FUNC_2 (struct ccu_data*,struct bcm_clk_div*) ;
 unsigned long FUNC_3 (struct bcm_clk_div*,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_4(struct ccu_data *VAR_1,
   struct bcm_clk_div *VAR_2, struct bcm_clk_div *VAR_3,
   unsigned long VAR_4)
{
 u64 VAR_5;
 u64 VAR_6;
 u64 VAR_7;

 if (!FUNC_1(VAR_2))
  return VAR_4;

 if (VAR_4 > (unsigned long)VAR_0)
  return 0;
 if (VAR_3 && FUNC_1(VAR_3)) {
  u64 VAR_8;

  VAR_8 = FUNC_3(VAR_3, VAR_4);
  VAR_8 = FUNC_3(VAR_2, VAR_8);
  VAR_6 = FUNC_2(VAR_1, VAR_3);
  VAR_5 = FUNC_0(VAR_8,
       VAR_6);
 } else {
  VAR_5 = FUNC_3(VAR_2, VAR_4);
 }






 VAR_6 = FUNC_2(VAR_1, VAR_2);
 VAR_7 = FUNC_0(VAR_5, VAR_6);

 return (unsigned long)VAR_7;
}
