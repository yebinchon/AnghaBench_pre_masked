
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_si544_muldiv {int delta_m; } ;
struct clk_si544 {int regmap; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long FUNC_0 (long) ;
 int FUNC_1 (struct clk_si544*,unsigned long) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (int ,int ,int ) ;
 unsigned long FUNC_4 (struct clk_si544_muldiv*) ;
 int FUNC_5 (long,long) ;
 int FUNC_6 (struct clk_si544_muldiv*,unsigned long) ;
 int FUNC_7 (struct clk_si544*,int) ;
 int FUNC_8 (struct clk_si544*,struct clk_si544_muldiv*) ;
 long FUNC_9 (unsigned long) ;
 int FUNC_10 (struct clk_si544*,int ) ;
 int FUNC_11 (struct clk_si544*,struct clk_si544_muldiv*) ;
 struct clk_si544* FUNC_12 (struct clk_hw*) ;
 int FUNC_13 (int,int) ;

__attribute__((used)) static int FUNC_14(struct clk_hw *VAR_6, unsigned long VAR_7,
  unsigned long VAR_8)
{
 struct clk_si544 *VAR_9 = FUNC_12(VAR_6);
 struct clk_si544_muldiv VAR_10;
 unsigned long VAR_11;
 long VAR_12;
 long VAR_13;
 unsigned int VAR_14;
 int VAR_15;

 if (!FUNC_1(VAR_9, VAR_7))
  return -VAR_0;


 VAR_15 = FUNC_8(VAR_9, &VAR_10);
 if (VAR_15)
  return VAR_15;

 VAR_11 = FUNC_4(&VAR_10);
 VAR_12 = FUNC_9(VAR_11);
 VAR_13 = VAR_7 - VAR_11;

 if (FUNC_0(VAR_13) <= VAR_12)
  return FUNC_10(VAR_9,
      FUNC_5(VAR_13, VAR_12));


 VAR_15 = FUNC_6(&VAR_10, VAR_7);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_2(VAR_9->regmap, VAR_5, &VAR_14);
 if (VAR_15)
  return VAR_15;

 FUNC_7(VAR_9, 0);


 VAR_15 = FUNC_3(VAR_9->regmap, VAR_4, 0);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_10(VAR_9, VAR_10.delta_m);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_11(VAR_9, &VAR_10);
 if (VAR_15 < 0)
  return VAR_15;


 VAR_15 = FUNC_3(VAR_9->regmap, VAR_3,
      VAR_1);
 if (VAR_15 < 0)
  return VAR_15;


 FUNC_13(10000, 12000);

 if (VAR_14 & VAR_2)
  FUNC_7(VAR_9, 1);

 return VAR_15;
}
