
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_9, int VAR_10)
{
 int VAR_11, VAR_12 = 0, VAR_13 = 0;


 do {
  FUNC_2(1);
  VAR_11 = FUNC_3(VAR_8);

  if (VAR_10 == VAR_5 && (VAR_11 & VAR_0))
   break;
 } while (!(VAR_11 & 0x0e) && (VAR_13++ < VAR_4));


 if (VAR_13 > VAR_4) {
  FUNC_0(&VAR_9->dev, "SMBus Timeout!\n");
  VAR_12 = -VAR_3;
 }

 if (VAR_11 & VAR_7) {
  FUNC_0(&VAR_9->dev, "Error: Failed bus transaction\n");
  VAR_12 = -VAR_2;
 }

 if (VAR_11 & VAR_6) {
  FUNC_1(&VAR_9->dev, "Bus collision!\n");
  VAR_12 = -VAR_1;
 }

 return VAR_12;
}
