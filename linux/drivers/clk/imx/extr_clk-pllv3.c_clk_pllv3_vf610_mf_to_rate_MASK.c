
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct clk_pllv3_vf610_mf {unsigned long mfn; unsigned long mfi; int mfd; } ;


 int FUNC_0 (unsigned long,int ) ;

__attribute__((used)) static unsigned long FUNC_1(unsigned long VAR_0,
  struct clk_pllv3_vf610_mf VAR_1)
{
 u64 VAR_2;

 VAR_2 = VAR_0;
 VAR_2 *= VAR_1.mfn;
 FUNC_0(VAR_2, VAR_1.mfd);

 return (VAR_0 * VAR_1.mfi) + VAR_2;
}
