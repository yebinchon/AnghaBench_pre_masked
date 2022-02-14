
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct spi_device {int dummy; } ;
struct ad5686_state {TYPE_2__* data; TYPE_1__* chip_info; int dev; } ;
struct TYPE_4__ {int* d8; void* d32; int d16; } ;
struct TYPE_3__ {int regmap_type; } ;


 int FUNC_0 (int) ;

 int FUNC_1 (int) ;

 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

 int VAR_0 ;
 int FUNC_4 (int) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (struct spi_device*,int*,int) ;
 struct spi_device* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct ad5686_state *VAR_1,
       u8 VAR_2, u8 VAR_3, u16 VAR_4)
{
 struct spi_device *VAR_5 = FUNC_7(VAR_1->dev);
 u8 VAR_6, *VAR_7;

 switch (VAR_1->chip_info->regmap_type) {
 case 130:
  VAR_1->data[0].d16 = FUNC_4(FUNC_0(VAR_2) |
           VAR_4);
  VAR_7 = &VAR_1->data[0].d8[0];
  VAR_6 = 2;
  break;
 case 129:
  VAR_1->data[0].d32 = FUNC_5(FUNC_3(VAR_2) |
           FUNC_1(VAR_4));
  VAR_7 = &VAR_1->data[0].d8[1];
  VAR_6 = 3;
  break;
 case 128:
  VAR_1->data[0].d32 = FUNC_5(FUNC_3(VAR_2) |
           FUNC_2(VAR_3) |
           VAR_4);
  VAR_7 = &VAR_1->data[0].d8[1];
  VAR_6 = 3;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_6(VAR_5, VAR_7, VAR_6);
}
