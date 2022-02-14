
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mcp3911 {int dev_addr; TYPE_1__* spi; scalar_t__ clki; scalar_t__ vref; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct mcp3911*,int ,int *,int) ;
 int FUNC_3 (struct mcp3911*,int ,int ,int) ;
 int FUNC_4 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_5(struct mcp3911 *VAR_4, struct device_node *VAR_5)
{
 u32 VAR_6;
 int VAR_7;

 FUNC_4(VAR_5, "device-addr", &VAR_4->dev_addr);
 if (VAR_4->dev_addr > 3) {
  FUNC_1(&VAR_4->spi->dev,
   "invalid device address (%i). Must be in range 0-3.\n",
   VAR_4->dev_addr);
  return -VAR_0;
 }
 FUNC_0(&VAR_4->spi->dev, "use device address %i\n", VAR_4->dev_addr);

 VAR_7 = FUNC_2(VAR_4, VAR_3, &VAR_6, 2);
 if (VAR_7)
  return VAR_7;

 if (VAR_4->vref) {
  FUNC_0(&VAR_4->spi->dev, "use external voltage reference\n");
  VAR_6 |= VAR_2;
 } else {
  FUNC_0(&VAR_4->spi->dev,
   "use internal voltage reference (1.2V)\n");
  VAR_6 &= ~VAR_2;
 }

 if (VAR_4->clki) {
  FUNC_0(&VAR_4->spi->dev, "use external clock as clocksource\n");
  VAR_6 |= VAR_1;
 } else {
  FUNC_0(&VAR_4->spi->dev,
   "use crystal oscillator as clocksource\n");
  VAR_6 &= ~VAR_1;
 }

 return FUNC_3(VAR_4, VAR_3, VAR_6, 2);
}
