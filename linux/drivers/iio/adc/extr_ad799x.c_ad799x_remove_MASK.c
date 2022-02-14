
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct ad799x_state {int rx_buf; int reg; int vref; } ;


 struct iio_dev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct ad799x_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_0(VAR_0);
 struct ad799x_state *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_1);

 FUNC_3(VAR_1);
 FUNC_5(VAR_2->vref);
 FUNC_5(VAR_2->reg);
 FUNC_4(VAR_2->rx_buf);

 return 0;
}
