
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int uint16_t ;
struct device_node {int dummy; } ;
struct TYPE_7__ {TYPE_1__* spi; } ;
struct adis16480 {int ext_clk; TYPE_3__ adis; int clk_mode; TYPE_2__* chip_info; } ;
typedef enum adis16480_int_pin { ____Placeholder_adis16480_int_pin } adis16480_int_pin ;
struct TYPE_6__ {scalar_t__ has_pps_clk_mode; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int) ;
 unsigned int VAR_1 ;
 unsigned int FUNC_2 (int ) ;
 unsigned int VAR_2 ;
 unsigned int FUNC_3 (int) ;
 unsigned int VAR_3 ;
 int FUNC_4 (struct adis16480*,struct device_node*) ;
 int FUNC_5 (TYPE_3__*,int ,unsigned int*) ;
 int FUNC_6 (TYPE_3__*,int ,unsigned int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,char*,int) ;

__attribute__((used)) static int FUNC_9(struct adis16480 *VAR_4,
        struct device_node *VAR_5,
        bool VAR_6)
{
 unsigned int VAR_7, VAR_8;
 enum adis16480_int_pin VAR_9;
 uint16_t VAR_10;
 int VAR_11;

 VAR_11 = FUNC_5(&VAR_4->adis, VAR_0, &VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_9 = FUNC_4(VAR_4, VAR_5);





 if (VAR_9 == FUNC_0(VAR_10))
  FUNC_8(&VAR_4->adis.spi->dev,
   "DIO%x pin supports only one function at a time\n",
   VAR_9 + 1);

 VAR_7 = FUNC_1(VAR_6) | FUNC_3(VAR_9);
 VAR_8 = VAR_1 | VAR_3;

 if (VAR_4->chip_info->has_pps_clk_mode) {
  VAR_7 |= FUNC_2(VAR_4->clk_mode);
  VAR_8 |= VAR_2;
 }

 VAR_10 &= ~VAR_8;
 VAR_10 |= VAR_7;

 VAR_11 = FUNC_6(&VAR_4->adis, VAR_0, VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 return FUNC_7(VAR_4->ext_clk);
}
