
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct clk {unsigned long rate; } ;
struct TYPE_6__ {int rate; } ;
struct TYPE_5__ {unsigned long rate; unsigned long cfg; unsigned long div; unsigned long mrate; int prate; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned long) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_3__ VAR_16 ;
 struct clk VAR_17 ;
 struct clk VAR_18 ;
 TYPE_1__* VAR_19 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 TYPE_1__* VAR_20 ;
 int FUNC_4 (int,int ) ;

int FUNC_5(struct clk *VAR_21, unsigned long VAR_22)
{
 if (VAR_21 == &VAR_18) {
  unsigned long VAR_23, VAR_24;
  int VAR_25, VAR_26;


  VAR_25 = -VAR_0;
  for (VAR_26 = 0; VAR_26 < FUNC_0(VAR_20); VAR_26++) {
   if (VAR_22 == VAR_20[VAR_26].rate) {
    VAR_23 = VAR_20[VAR_26].cfg;
    VAR_24 = VAR_20[VAR_26].div;
    VAR_25 = 0;
    break;
   }
  }

  if (VAR_25)
   return VAR_25;

  if (FUNC_2(VAR_10) == VAR_23)
   return 0;


  FUNC_4(VAR_23, VAR_10);

  FUNC_4(VAR_13, VAR_11);
  while ((FUNC_2(VAR_6) & VAR_8)
    != VAR_8)
   FUNC_3(100);


  FUNC_4(FUNC_2(VAR_4) | VAR_5, VAR_4);

  FUNC_4((FUNC_2(VAR_1) & ~VAR_2)
    | FUNC_1(VAR_24), VAR_1);

  FUNC_4(FUNC_2(VAR_14) | VAR_15, VAR_14);
  while ((FUNC_2(VAR_14) & VAR_15)
    == VAR_15)
   FUNC_3(100);

  FUNC_4(FUNC_2(VAR_4) & ~VAR_5, VAR_4);
 }
 return 0;
}
