
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct clk_hw {struct clk* clk; } ;
struct clk {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned long) ;
 unsigned long FUNC_1 (long) ;
 struct clk* FUNC_2 (struct clk*) ;
 unsigned long FUNC_3 (struct clk*) ;
 long FUNC_4 (struct clk*,unsigned long) ;
 scalar_t__ FUNC_5 (unsigned long,int ) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_7(
 struct clk_hw *VAR_2, unsigned long VAR_3)
{
 struct clk *VAR_4 = FUNC_2(VAR_2->clk);
 struct clk *VAR_5 = FUNC_2(VAR_4);
 unsigned long VAR_6 = FUNC_3(VAR_5);
 unsigned long VAR_7 = VAR_3;
 u16 VAR_8;
 u16 VAR_9;
 u16 VAR_10;
 u16 VAR_11;

 if (VAR_6 % VAR_3 == 0)
  return VAR_6;

 VAR_8 = (u16)FUNC_5(1ul, FUNC_0(VAR_1, VAR_3));
 VAR_9 = (u16)FUNC_6(127ul, VAR_0 / VAR_3);

 if (VAR_8 > VAR_9)
  return 0;

 VAR_10 = VAR_8;
 for (VAR_11 = VAR_8; VAR_11 < VAR_9; ++VAR_11) {
  unsigned long VAR_12 = VAR_3 * VAR_11;
  long VAR_13 = FUNC_4(VAR_4, VAR_12);
  unsigned long VAR_14;
  unsigned long VAR_15;

  if (VAR_13 <= 0)
   continue;
  VAR_14 = VAR_13 / VAR_11;
  VAR_15 = FUNC_1((long)VAR_14 - (long)VAR_3);
  if (VAR_15 < VAR_7) {
   VAR_10 = VAR_11;
   VAR_7 = VAR_15;
  }


 }

 return VAR_3 * VAR_10;
}
