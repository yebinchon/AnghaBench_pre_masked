
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;
struct ad714x_chip {void** xfer_buf; int dev; } ;


 void* FUNC_0 (unsigned short) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct i2c_client*,int *,int) ;
 struct i2c_client* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct ad714x_chip *VAR_0,
       unsigned short VAR_1, unsigned short VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_3(VAR_0->dev);
 int VAR_4;

 VAR_0->xfer_buf[0] = FUNC_0(VAR_1);
 VAR_0->xfer_buf[1] = FUNC_0(VAR_2);

 VAR_4 = FUNC_2(VAR_3, (u8 *)VAR_0->xfer_buf,
    2 * sizeof(*VAR_0->xfer_buf));
 if (FUNC_4(VAR_4 < 0)) {
  FUNC_1(&VAR_3->dev, "I2C write error: %d\n", VAR_4);
  return VAR_4;
 }

 return 0;
}
