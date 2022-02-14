
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct omap_i2c_dev {int bb_valid; int dev; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (int ,char*) ;
 unsigned long VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct omap_i2c_dev*,int ) ;
 int FUNC_3 (struct omap_i2c_dev*) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct omap_i2c_dev *VAR_9)
{
 unsigned long VAR_10 = 0;
 unsigned long VAR_11;
 int VAR_12 = 0;
 u16 VAR_13, VAR_14;

 if (VAR_9->bb_valid)
  return 0;

 VAR_11 = VAR_8 + VAR_7;
 while (1) {
  VAR_13 = FUNC_2(VAR_9, VAR_3);





  if (VAR_13 & (VAR_1 | VAR_2))
   break;





  VAR_14 = FUNC_2(VAR_9, VAR_4);
  if ((VAR_14 & VAR_5) &&
      (VAR_14 & VAR_6)) {
   if (!VAR_12) {
    VAR_10 = VAR_8 +
     VAR_0;
    VAR_12 = 1;
   }






   if (FUNC_4(VAR_8, VAR_10))
    break;
  } else {
   VAR_12 = 0;
  }

  if (FUNC_4(VAR_8, VAR_11)) {





   FUNC_0(VAR_9->dev, "timeout waiting for bus ready\n");
   return FUNC_3(VAR_9);
  }

  FUNC_1(1);
 }

 VAR_9->bb_valid = 1;
 return 0;
}
