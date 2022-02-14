
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct sam9x60_pll {int id; int div; scalar_t__ mul; int lock; TYPE_1__* characteristics; struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__ upll; } ;


 void* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 () ;
 int FUNC_3 (struct regmap*,int ,int*) ;
 int FUNC_4 (struct regmap*,int ,int ,int ) ;
 int FUNC_5 (struct regmap*,int ,int) ;
 scalar_t__ FUNC_6 (struct regmap*,int) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (int ,unsigned long) ;
 struct sam9x60_pll* FUNC_9 (struct clk_hw*) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct clk_hw *VAR_13)
{
 struct sam9x60_pll *VAR_14 = FUNC_9(VAR_13);
 struct regmap *VAR_15 = VAR_14->regmap;
 unsigned long VAR_16;
 u8 VAR_17;
 u16 VAR_18;
 u32 VAR_19;

 FUNC_7(VAR_14->lock, VAR_16);
 FUNC_5(VAR_15, VAR_11, VAR_14->id);

 FUNC_3(VAR_15, VAR_4, &VAR_19);
 VAR_17 = FUNC_0(VAR_5, VAR_19);

 FUNC_3(VAR_15, VAR_9, &VAR_19);
 VAR_18 = FUNC_0(VAR_10, VAR_19);

 if (FUNC_6(VAR_15, VAR_14->id) &&
     (VAR_17 == VAR_14->div && VAR_18 == VAR_14->mul)) {
  FUNC_8(VAR_14->lock, VAR_16);
  return 0;
 }


 VAR_19 = VAR_1;
 FUNC_5(VAR_15, VAR_0, VAR_19);

 FUNC_5(VAR_15, VAR_9,
       FUNC_1(VAR_10, VAR_14->mul));

 if (VAR_14->characteristics->upll) {

  VAR_19 |= VAR_2;
  FUNC_5(VAR_15, VAR_0, VAR_19);

  FUNC_10(10);


  VAR_19 |= VAR_3;
  FUNC_5(VAR_15, VAR_0, VAR_19);

  FUNC_10(10);
 }

 FUNC_4(VAR_15, VAR_11,
      VAR_12, VAR_12);

 FUNC_5(VAR_15, VAR_4,
       VAR_6 | VAR_7 |
       VAR_8 | VAR_14->div);

 FUNC_4(VAR_15, VAR_11,
      VAR_12, VAR_12);

 while (!FUNC_6(VAR_15, VAR_14->id))
  FUNC_2();

 FUNC_8(VAR_14->lock, VAR_16);

 return 0;
}
