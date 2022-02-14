
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int extal; int * dotclkin; } ;
struct rcar_lvds {TYPE_1__ clocks; } ;
struct pll_info {unsigned long diff; int clksel; scalar_t__ pll_e; int div; scalar_t__ pll_m; scalar_t__ pll_n; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct rcar_lvds*,int ,unsigned int,struct pll_info*,int ,int) ;
 int FUNC_6 (struct rcar_lvds*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct rcar_lvds *VAR_10,
     unsigned int VAR_11, bool VAR_12)
{
 struct pll_info VAR_13 = { .diff = (unsigned long)-1 };
 u32 VAR_14;

 FUNC_5(VAR_10, VAR_10->clocks.dotclkin[0], VAR_11, &VAR_13,
     FUNC_1(0), VAR_12);
 FUNC_5(VAR_10, VAR_10->clocks.dotclkin[1], VAR_11, &VAR_13,
     FUNC_1(1), VAR_12);
 FUNC_5(VAR_10, VAR_10->clocks.extal, VAR_11, &VAR_13,
     VAR_4, VAR_12);

 VAR_14 = VAR_8 | VAR_13.clksel | VAR_5
   | FUNC_4(VAR_13.pll_n - 1) | FUNC_3(VAR_13.pll_m - 1);

 if (VAR_13.pll_e > 0)
  VAR_14 |= VAR_9 | VAR_7
    | FUNC_2(VAR_13.pll_e - 1);

 if (VAR_12)
  VAR_14 |= VAR_6;

 FUNC_6(VAR_10, VAR_3, VAR_14);

 if (VAR_13.div > 1)




  FUNC_6(VAR_10, VAR_0, VAR_2 |
    VAR_1 | FUNC_0(VAR_13.div - 1));
 else
  FUNC_6(VAR_10, VAR_0, 0);
}
