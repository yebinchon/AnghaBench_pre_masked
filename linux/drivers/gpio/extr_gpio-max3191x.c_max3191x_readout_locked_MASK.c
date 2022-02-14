
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct spi_device {int dummy; } ;
struct TYPE_5__ {scalar_t__ rx_buf; } ;
struct TYPE_4__ {struct device* parent; } ;
struct max3191x_chip {int nchips; scalar_t__ mode; int fault; TYPE_3__* fault_pins; int ignore_uv; int undervolt2; int undervolt1; int overtemp; int crc_error; TYPE_2__ xfer; int mesg; TYPE_1__ gpio; } ;
struct gpio_desc {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int ndescs; struct gpio_desc** desc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int ,int*,int,int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct gpio_desc*) ;
 int VAR_1 ;
 int FUNC_5 (struct spi_device*,int *) ;
 struct spi_device* FUNC_6 (struct device*) ;

__attribute__((used)) static int FUNC_7(struct max3191x_chip *VAR_2)
{
 struct device *VAR_3 = VAR_2->gpio.parent;
 struct spi_device *VAR_4 = FUNC_6(VAR_3);
 int VAR_5, VAR_6, VAR_7 = 0, VAR_8 = 0;

 VAR_5 = FUNC_5(VAR_4, &VAR_2->mesg);
 if (VAR_5) {
  FUNC_2(VAR_3, "SPI receive error %d\n", VAR_5);
  return VAR_5;
 }

 for (VAR_6 = 0; VAR_6 < VAR_2->nchips; VAR_6++) {
  if (VAR_2->mode == VAR_0) {
   u8 VAR_9 = ((u8 *)VAR_2->xfer.rx_buf)[VAR_6 * 2];
   u8 VAR_10 = ((u8 *)VAR_2->xfer.rx_buf)[VAR_6 * 2 + 1];

   VAR_5 = (VAR_10 & 0xf8) != FUNC_1(VAR_1, &VAR_9, 1, 0);
   FUNC_0(VAR_6, VAR_2->crc_error, VAR_5);
   if (VAR_5)
    FUNC_2(VAR_3,
     "chip %d: CRC error\n", VAR_6);

   VAR_7 = (VAR_10 >> 1) & 1;
   FUNC_0(VAR_6, VAR_2->overtemp, VAR_7);
   if (VAR_7)
    FUNC_2(VAR_3,
     "chip %d: overtemperature\n", VAR_6);

   if (!VAR_2->ignore_uv) {
    VAR_8 = !((VAR_10 >> 2) & 1);
    FUNC_0(VAR_6, VAR_2->undervolt1, VAR_8);
    if (VAR_8)
     FUNC_2(VAR_3,
      "chip %d: undervoltage\n", VAR_6);

    VAR_5 = !(VAR_10 & 1);
    FUNC_0(VAR_6, VAR_2->undervolt2, VAR_5);
    if (VAR_5 && !VAR_8)
     FUNC_3(VAR_3,
      "chip %d: voltage warn\n", VAR_6);
   }
  }

  if (VAR_2->fault_pins && !VAR_2->ignore_uv) {

   struct gpio_desc *VAR_11 =
    (VAR_2->fault_pins->ndescs == 1)
     ? VAR_2->fault_pins->desc[0]
     : VAR_2->fault_pins->desc[VAR_6];

   VAR_5 = FUNC_4(VAR_11);
   if (VAR_5 < 0) {
    FUNC_2(VAR_3,
     "GPIO read error %d\n", VAR_5);
    return VAR_5;
   }
   FUNC_0(VAR_6, VAR_2->fault, VAR_5);
   if (VAR_5 && !VAR_8 && !VAR_7)
    FUNC_2(VAR_3,
     "chip %d: fault\n", VAR_6);
  }
 }

 return 0;
}
