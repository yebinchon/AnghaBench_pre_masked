
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct omap_i2c_dev {int cmd_err; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct omap_i2c_dev*,int) ;
 int FUNC_3 (struct omap_i2c_dev*,int ) ;

__attribute__((used)) static int FUNC_4(struct omap_i2c_dev *VAR_7)
{
 unsigned long VAR_8 = 10000;
 u16 VAR_9;

 do {
  VAR_9 = FUNC_3(VAR_7, VAR_3);
  if (VAR_9 & VAR_6)
   break;

  if (VAR_9 & (VAR_2 | VAR_1)) {
   FUNC_2(VAR_7, (VAR_5 |
       VAR_4));
   if (VAR_9 & VAR_2) {
    VAR_7->cmd_err |= VAR_2;
    FUNC_2(VAR_7, VAR_2);
   }

   if (VAR_9 & VAR_1) {
    FUNC_1(VAR_7->dev, "Arbitration lost\n");
    VAR_7->cmd_err |= VAR_1;
    FUNC_2(VAR_7, VAR_1);
   }

   return -VAR_0;
  }

  FUNC_0();
 } while (--VAR_8);

 if (!VAR_8) {
  FUNC_1(VAR_7->dev, "timeout waiting on XUDF bit\n");
  return 0;
 }

 return 0;
}
