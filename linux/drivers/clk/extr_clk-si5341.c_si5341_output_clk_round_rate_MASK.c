
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_1(struct clk_hw *VAR_1, unsigned long VAR_2,
  unsigned long *VAR_3)
{
 unsigned long VAR_4;

 VAR_4 = *VAR_3 >> 1;


 if (VAR_4 && !(VAR_4 % VAR_2))
  return (long)VAR_2;

 if (FUNC_0(VAR_1) & VAR_0) {
  if (VAR_2 > 200000000) {

   VAR_4 = 2;
  } else {

   VAR_4 = (400000000u / VAR_2) & ~1;
  }
  *VAR_3 = VAR_4 * VAR_2;
 } else {

  VAR_4 /= VAR_2;
  VAR_2 = *VAR_3 / (VAR_4 << 1);
 }

 return VAR_2;
}
