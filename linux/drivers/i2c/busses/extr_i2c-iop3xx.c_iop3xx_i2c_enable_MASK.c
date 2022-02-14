
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_algo_iop3xx_data {int SR_enabled; scalar_t__ ioaddr; scalar_t__ gpio_sda; scalar_t__ gpio_scl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_2(struct i2c_algo_iop3xx_data *VAR_12)
{
 u32 VAR_13 = VAR_3 | VAR_5 | VAR_7;
 if (VAR_12->gpio_scl)
  FUNC_1(VAR_12->gpio_scl, 0);
 if (VAR_12->gpio_sda)
  FUNC_1(VAR_12->gpio_sda, 0);


 VAR_12->SR_enabled =
  VAR_8 | VAR_9 |
  VAR_10 | VAR_11;

 VAR_13 |= VAR_1 | VAR_2 |
  VAR_4 | VAR_6;

 FUNC_0(VAR_13, VAR_12->ioaddr + VAR_0);
}
