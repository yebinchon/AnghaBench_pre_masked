
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;
struct ad714x_chip {int * xfer_buf; int dev; } ;


 unsigned short FUNC_0 (int ) ;
 int FUNC_1 (unsigned short) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct i2c_client*,int *,size_t) ;
 int FUNC_4 (struct i2c_client*,int *,int) ;
 struct i2c_client* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct ad714x_chip *VAR_0,
      unsigned short VAR_1, unsigned short *VAR_2, size_t VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_5(VAR_0->dev);
 int VAR_5;
 int VAR_6;

 VAR_0->xfer_buf[0] = FUNC_1(VAR_1);

 VAR_6 = FUNC_4(VAR_4, (u8 *)VAR_0->xfer_buf,
    sizeof(*VAR_0->xfer_buf));
 if (VAR_6 >= 0)
  VAR_6 = FUNC_3(VAR_4, (u8 *)VAR_0->xfer_buf,
     VAR_3 * sizeof(*VAR_0->xfer_buf));

 if (FUNC_6(VAR_6 < 0)) {
  FUNC_2(&VAR_4->dev, "I2C read error: %d\n", VAR_6);
  return VAR_6;
 }

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  VAR_2[VAR_5] = FUNC_0(VAR_0->xfer_buf[VAR_5]);

 return 0;
}
