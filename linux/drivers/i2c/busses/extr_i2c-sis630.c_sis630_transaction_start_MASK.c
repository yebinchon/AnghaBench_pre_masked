
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_adapter {int dev; } ;


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
 int FUNC_0 (int *,char*,...) ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_adapter *VAR_11, int VAR_12,
        u8 *VAR_13)
{
 int VAR_14;


 VAR_14 = FUNC_1(VAR_4);
 if ((VAR_14 & (VAR_7 | VAR_5)) != 0x00) {
  FUNC_0(&VAR_11->dev, "SMBus busy (%02x). Resetting...\n", VAR_14);

  FUNC_2(VAR_3, VAR_6);

  VAR_14 = FUNC_1(VAR_4);
  if (VAR_14 & (VAR_7 | VAR_5)) {
   FUNC_0(&VAR_11->dev, "Failed! (%02x)\n", VAR_14);
   return -VAR_0;
  } else {
   FUNC_0(&VAR_11->dev, "Successful!\n");
  }
 }


 *VAR_13 = FUNC_1(VAR_4);

 FUNC_0(&VAR_11->dev, "saved clock 0x%02x\n", *VAR_13);



 if (VAR_10)
  FUNC_2(VAR_4, VAR_2);
 else
  FUNC_2(VAR_4, (*VAR_13 & ~VAR_1));


 VAR_14 = FUNC_1(VAR_9);
 FUNC_2(VAR_9, VAR_14 & 0x1e);


 FUNC_2(VAR_3, VAR_8 | (VAR_12 & 0x07));

 return 0;
}
