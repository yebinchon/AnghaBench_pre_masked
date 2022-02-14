
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct agp_bridge_data {TYPE_1__* dev; scalar_t__ capndx; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct agp_bridge_data*,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int*) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,int) ;
 int VAR_7 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct agp_bridge_data *VAR_8, u32 VAR_9)
{
 u32 VAR_10, VAR_11, VAR_12;
 int VAR_13;

 FUNC_3(VAR_8->dev,
         VAR_8->capndx + VAR_6,
         &VAR_12);

 VAR_10 = FUNC_0(VAR_8, VAR_9, VAR_12);
 VAR_10 |= VAR_5;

 if (VAR_7 == 0x21) {




  VAR_10 &= ~VAR_0;
 }

 if ((VAR_7 >= 0x30) && (VAR_7 <= 0x33)) {




  if ((VAR_10 >> VAR_3) > 7)
   VAR_10 = (VAR_10 & ~VAR_2)
    | (7 << VAR_3);
 }

 FUNC_5(((void*)0));

 VAR_13 = 0;
 do {
  FUNC_4(VAR_8->dev,
           VAR_8->capndx + VAR_4,
           VAR_10);
  FUNC_3(VAR_8->dev,
          VAR_8->capndx + VAR_4,
           &VAR_11);
 } while ((VAR_11 & VAR_5) == 0 && ++VAR_13 < 1000);
 if ((VAR_11 & VAR_5) == 0)
  FUNC_2(&VAR_8->dev->dev, "can't write UniNorth AGP "
   "command register\n");

 if (VAR_7 >= 0x30) {

  FUNC_1(VAR_10, (VAR_12 & VAR_1) != 0);
 } else {

  FUNC_1(VAR_10, 0);
 }

 FUNC_5(((void*)0));
}
