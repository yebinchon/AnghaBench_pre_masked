
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct i2c_algo_iop3xx_data {scalar_t__ ioaddr; scalar_t__ algo_data; } ;
struct i2c_adapter {scalar_t__ ioaddr; scalar_t__ algo_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct i2c_algo_iop3xx_data*) ;
 struct i2c_algo_iop3xx_data* FUNC_4 (struct platform_device*) ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct platform_device *VAR_7)
{
 struct i2c_adapter *VAR_8 = FUNC_4(VAR_7);
 struct i2c_algo_iop3xx_data *VAR_9 =
  (struct i2c_algo_iop3xx_data *)VAR_8->algo_data;
 struct resource *VAR_10 = FUNC_5(VAR_7, VAR_6, 0);
 unsigned long VAR_11 = FUNC_0(VAR_9->ioaddr + VAR_0);




 VAR_11 &= ~(VAR_2 | VAR_3 |
  VAR_4 | VAR_5);
 FUNC_1(VAR_11, VAR_9->ioaddr + VAR_0);

 FUNC_2(VAR_9->ioaddr);
 FUNC_6(VAR_10->start, VAR_1);
 FUNC_3(VAR_9);
 FUNC_3(VAR_8);

 return 0;
}
