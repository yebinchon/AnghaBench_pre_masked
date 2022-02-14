
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_multiplier {int flags; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long,unsigned long,unsigned long,unsigned long) ;
 int FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (struct clk_hw*) ;
 unsigned long FUNC_3 (int ,unsigned long) ;
 struct clk_multiplier* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_5(struct clk_hw *VAR_2, unsigned long VAR_3,
    unsigned long *VAR_4,
    u8 VAR_5, unsigned long VAR_6)
{
 struct clk_multiplier *VAR_7 = FUNC_4(VAR_2);
 unsigned long VAR_8 = *VAR_4;
 unsigned long VAR_9, VAR_10, VAR_11 = ~0;
 unsigned int VAR_12, VAR_13 = 0;
 unsigned int VAR_14 = (1 << VAR_5) - 1;

 if (!(FUNC_1(VAR_2) & VAR_1)) {
  VAR_13 = VAR_3 / VAR_8;


  if ((VAR_13 == 0) &&
      !(VAR_7->flags & VAR_0))
   VAR_13 = 1;


  if (VAR_13 > VAR_14)
   VAR_13 = VAR_14;

  return VAR_13;
 }

 for (VAR_12 = 1; VAR_12 < VAR_14; VAR_12++) {
  if (VAR_3 == VAR_8 * VAR_12) {





   *VAR_4 = VAR_8;
   return VAR_12;
  }

  VAR_9 = FUNC_3(FUNC_2(VAR_2),
      VAR_3 / VAR_12);
  VAR_10 = VAR_9 * VAR_12;

  if (FUNC_0(VAR_3, VAR_10, VAR_11, VAR_6)) {
   VAR_13 = VAR_12;
   VAR_11 = VAR_10;
   *VAR_4 = VAR_9;
  }
 }

 return VAR_13;
}
