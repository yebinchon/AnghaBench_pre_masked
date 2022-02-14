
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct talitos_private {int features; TYPE_1__* chan; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_0 () ;
 int FUNC_1 (struct device*,char*,int) ;
 struct talitos_private* FUNC_2 (struct device*) ;
 int FUNC_3 (struct talitos_private*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_12, int VAR_13)
{
 struct talitos_private *VAR_14 = FUNC_2(VAR_12);
 unsigned int VAR_15 = VAR_11;
 bool VAR_16 = FUNC_3(VAR_14);

 if (VAR_16) {
  FUNC_5(VAR_14->chan[VAR_13].reg + VAR_4,
     VAR_1);

  while ((FUNC_4(VAR_14->chan[VAR_13].reg + VAR_4) &
   VAR_1) && --VAR_15)
   FUNC_0();
 } else {
  FUNC_5(VAR_14->chan[VAR_13].reg + VAR_3,
     VAR_2);

  while ((FUNC_4(VAR_14->chan[VAR_13].reg + VAR_3) &
   VAR_2) && --VAR_15)
   FUNC_0();
 }

 if (VAR_15 == 0) {
  FUNC_1(VAR_12, "failed to reset channel %d\n", VAR_13);
  return -VAR_0;
 }


 FUNC_5(VAR_14->chan[VAR_13].reg + VAR_4, VAR_7 |
    VAR_6 | VAR_5);

 if (VAR_16)
  FUNC_5(VAR_14->chan[VAR_13].reg + VAR_4,
     VAR_9);


 if (VAR_14->features & VAR_10)
  FUNC_5(VAR_14->chan[VAR_13].reg + VAR_4,
            VAR_8);

 return 0;
}
