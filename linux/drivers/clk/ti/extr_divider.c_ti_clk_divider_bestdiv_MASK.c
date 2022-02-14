
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_omap_divider {int table; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long,int) ;
 int FUNC_1 (unsigned long,int) ;
 unsigned long VAR_1 ;
 int FUNC_2 (int ,unsigned long,unsigned long) ;
 void* FUNC_3 (struct clk_omap_divider*) ;
 int FUNC_4 (struct clk_omap_divider*,int) ;
 int FUNC_5 (struct clk_hw*) ;
 int FUNC_6 (struct clk_hw*) ;
 unsigned long FUNC_7 (int ,int) ;
 unsigned long FUNC_8 (unsigned long,unsigned long) ;
 struct clk_omap_divider* FUNC_9 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_10(struct clk_hw *VAR_2, unsigned long VAR_3,
      unsigned long *VAR_4)
{
 struct clk_omap_divider *VAR_5 = FUNC_9(VAR_2);
 int VAR_6, VAR_7 = 0;
 unsigned long VAR_8, VAR_9 = 0, VAR_10, VAR_11;
 unsigned long VAR_12 = *VAR_4;

 if (!VAR_3)
  VAR_3 = 1;

 VAR_11 = FUNC_3(VAR_5);

 if (!(FUNC_5(VAR_2) & VAR_0)) {
  VAR_8 = *VAR_4;
  VAR_7 = FUNC_2(VAR_5->table, VAR_8, VAR_3);
  VAR_7 = VAR_7 == 0 ? 1 : VAR_7;
  VAR_7 = VAR_7 > VAR_11 ? VAR_11 : VAR_7;
  return VAR_7;
 }





 VAR_11 = FUNC_8(VAR_1 / VAR_3, VAR_11);

 for (VAR_6 = 1; VAR_6 <= VAR_11; VAR_6++) {
  if (!FUNC_4(VAR_5, VAR_6))
   continue;
  if (VAR_3 * VAR_6 == VAR_12) {





   *VAR_4 = VAR_12;
   return VAR_6;
  }
  VAR_8 = FUNC_7(FUNC_6(VAR_2),
    FUNC_1(VAR_3, VAR_6));
  VAR_10 = FUNC_0(VAR_8, VAR_6);
  if (VAR_10 <= VAR_3 && VAR_10 > VAR_9) {
   VAR_7 = VAR_6;
   VAR_9 = VAR_10;
   *VAR_4 = VAR_8;
  }
 }

 if (!VAR_7) {
  VAR_7 = FUNC_3(VAR_5);
  *VAR_4 =
   FUNC_7(FUNC_6(VAR_2), 1);
 }

 return VAR_7;
}
