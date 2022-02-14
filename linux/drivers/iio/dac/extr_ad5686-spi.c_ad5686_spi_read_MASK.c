
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct spi_transfer {int len; int cs_change; int * rx_buf; int * tx_buf; } ;
struct spi_device {int dummy; } ;
struct ad5686_state {TYPE_2__* data; TYPE_1__* chip_info; int dev; } ;
struct TYPE_4__ {void* d32; int * d8; } ;
struct TYPE_3__ {int regmap_type; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_2 (struct spi_transfer*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct spi_device*,struct spi_transfer*,int ) ;
 struct spi_device* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct ad5686_state *VAR_5, u8 VAR_6)
{
 struct spi_transfer VAR_7[] = {
  {
   .tx_buf = &VAR_5->data[0].d8[1],
   .len = 3,
   .cs_change = 1,
  }, {
   .tx_buf = &VAR_5->data[1].d8[1],
   .rx_buf = &VAR_5->data[2].d8[1],
   .len = 3,
  },
 };
 struct spi_device *VAR_8 = FUNC_6(VAR_5->dev);
 u8 VAR_9 = 0;
 int VAR_10;

 switch (VAR_5->chip_info->regmap_type) {
 case 130:
  return -VAR_4;
 case 129:
  VAR_9 = VAR_2;
  break;
 case 128:
  VAR_9 = VAR_1;
  break;
 default:
  return -VAR_3;
 }

 VAR_5->data[0].d32 = FUNC_4(FUNC_1(VAR_9) |
          FUNC_0(VAR_6));
 VAR_5->data[1].d32 = FUNC_4(FUNC_1(VAR_0));

 VAR_10 = FUNC_5(VAR_8, VAR_7, FUNC_2(VAR_7));
 if (VAR_10 < 0)
  return VAR_10;

 return FUNC_3(VAR_5->data[2].d32);
}
