
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hb_clk {int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned long,unsigned long,int*,int*) ;
 int FUNC_1 (int ) ;
 struct hb_clk* FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_9, unsigned long VAR_10,
       unsigned long VAR_11)
{
 struct hb_clk *VAR_12 = FUNC_2(VAR_9);
 u32 VAR_13, VAR_14;
 u32 VAR_15;

 FUNC_0(VAR_10, VAR_11, &VAR_13, &VAR_14);

 VAR_15 = FUNC_1(VAR_12->reg);
 if (VAR_14 != ((VAR_15 & VAR_0) >> VAR_1)) {

  VAR_15 |= VAR_4;
  FUNC_3(VAR_15 | VAR_4, VAR_12->reg);

  FUNC_3(VAR_15 | VAR_8, VAR_12->reg);
  VAR_15 &= ~(VAR_0 | VAR_2);
  VAR_15 |= (VAR_14 << VAR_1) | (VAR_13 << VAR_3);
  FUNC_3(VAR_15 | VAR_8, VAR_12->reg);
  FUNC_3(VAR_15, VAR_12->reg);

  while ((FUNC_1(VAR_12->reg) & VAR_6) == 0)
   ;
  while ((FUNC_1(VAR_12->reg) & VAR_7) == 0)
   ;
  VAR_15 |= VAR_5;
  VAR_15 &= ~VAR_4;
 } else {
  FUNC_3(VAR_15 | VAR_4, VAR_12->reg);
  VAR_15 &= ~VAR_2;
  VAR_15 |= VAR_13 << VAR_3;
  FUNC_3(VAR_15 | VAR_4, VAR_12->reg);
 }
 FUNC_3(VAR_15, VAR_12->reg);

 return 0;
}
