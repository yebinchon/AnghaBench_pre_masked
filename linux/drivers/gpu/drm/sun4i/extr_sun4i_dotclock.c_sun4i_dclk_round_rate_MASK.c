
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
typedef int u64 ;
struct sun4i_tcon {int dclk_min_div; int dclk_max_div; } ;
struct sun4i_dclk {struct sun4i_tcon* tcon; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (struct clk_hw*) ;
 unsigned long FUNC_2 (int ,int) ;
 struct sun4i_dclk* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_4(struct clk_hw *VAR_1, unsigned long VAR_2,
      unsigned long *VAR_3)
{
 struct sun4i_dclk *VAR_4 = FUNC_3(VAR_1);
 struct sun4i_tcon *VAR_5 = VAR_4->tcon;
 unsigned long VAR_6 = 0;
 u8 VAR_7 = 1;
 int VAR_8;

 for (VAR_8 = VAR_5->dclk_min_div; VAR_8 <= VAR_5->dclk_max_div; VAR_8++) {
  u64 VAR_9 = (u64)VAR_2 * VAR_8;
  unsigned long VAR_10;
  if (VAR_9 > VAR_0)
   goto out;

  VAR_10 = FUNC_2(FUNC_1(VAR_1),
         VAR_9);

  if (VAR_10 == VAR_9) {
   VAR_6 = VAR_10;
   VAR_7 = VAR_8;
   goto out;
  }

  if (FUNC_0(VAR_2 - VAR_10 / VAR_8) <
      FUNC_0(VAR_2 - VAR_6 / VAR_7)) {
   VAR_6 = VAR_10;
   VAR_7 = VAR_8;
  }
 }

out:
 *VAR_3 = VAR_6;

 return VAR_6 / VAR_7;
}
