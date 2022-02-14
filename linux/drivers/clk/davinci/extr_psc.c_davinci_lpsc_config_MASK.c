
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct davinci_lpsc_clk {int flags; int md; int regmap; int pd; } ;
typedef enum davinci_lpsc_state { ____Placeholder_davinci_lpsc_state } davinci_lpsc_state ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int ,int ,int,int,int ,int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_9(struct davinci_lpsc_clk *VAR_9,
    enum davinci_lpsc_state VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13, VAR_14;

 FUNC_8(VAR_9->regmap, FUNC_1(VAR_9->md), VAR_3,
     VAR_10);

 if (VAR_9->flags & VAR_1)
  FUNC_8(VAR_9->regmap, FUNC_1(VAR_9->md), VAR_2,
      VAR_2);

 FUNC_5(VAR_9->regmap, FUNC_4(VAR_9->pd), &VAR_12);
 if ((VAR_12 & VAR_6) == 0) {
  FUNC_8(VAR_9->regmap, FUNC_3(VAR_9->pd), VAR_5,
      VAR_5);

  FUNC_7(VAR_9->regmap, VAR_7, FUNC_0(VAR_9->pd));

  FUNC_6(VAR_9->regmap, VAR_0, VAR_11,
      VAR_11 & FUNC_0(VAR_9->pd), 0, 0);

  FUNC_8(VAR_9->regmap, FUNC_3(VAR_9->pd), VAR_4,
      VAR_4);
 } else {
  FUNC_7(VAR_9->regmap, VAR_7, FUNC_0(VAR_9->pd));
 }

 FUNC_6(VAR_9->regmap, VAR_8, VAR_14,
     !(VAR_14 & FUNC_0(VAR_9->pd)), 0, 0);

 FUNC_6(VAR_9->regmap, FUNC_2(VAR_9->md), VAR_13,
     (VAR_13 & VAR_3) == VAR_10,
     0, 0);
}
