
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct clk_pllv3_vf610_mf {int mfi; int mfd; int mfn; } ;


 int FUNC_0 (unsigned long,unsigned long) ;

__attribute__((used)) static struct clk_pllv3_vf610_mf FUNC_1(
  unsigned long VAR_0, unsigned long VAR_1)
{
 struct clk_pllv3_vf610_mf VAR_2;
 u64 VAR_3;

 VAR_2.mfi = (VAR_1 >= 22 * VAR_0) ? 22 : 20;
 VAR_2.mfd = 0x3fffffff;

 if (VAR_1 <= VAR_0 * VAR_2.mfi)
  VAR_2.mfn = 0;
 else if (VAR_1 >= VAR_0 * (VAR_2.mfi + 1))
  VAR_2.mfn = VAR_2.mfd - 1;
 else {

  VAR_3 = VAR_1 - VAR_0 * VAR_2.mfi;
  VAR_3 *= VAR_2.mfd;
  FUNC_0(VAR_3, VAR_0);
  VAR_2.mfn = VAR_3;
 }

 return VAR_2;
}
