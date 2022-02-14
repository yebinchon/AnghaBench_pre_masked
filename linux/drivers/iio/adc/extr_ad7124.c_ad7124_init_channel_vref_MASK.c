
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* spi; } ;
struct ad7124_state {TYPE_3__ sd; TYPE_1__* channel_config; int * vref; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {unsigned int refsel; int vref_mv; } ;






 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int* VAR_1 ;
 int FUNC_2 (int *,char*,unsigned int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ad7124_state *VAR_2,
        unsigned int VAR_3)
{
 unsigned int VAR_4 = VAR_2->channel_config[VAR_3].refsel;

 switch (VAR_4) {
 case 129:
 case 128:
 case 131:
  if (FUNC_0(VAR_2->vref[VAR_4])) {
   FUNC_2(&VAR_2->sd.spi->dev,
    "Error, trying to use external voltage reference without a %s regulator.\n",
    VAR_1[VAR_4]);
   return FUNC_1(VAR_2->vref[VAR_4]);
  }
  VAR_2->channel_config[VAR_3].vref_mv =
   FUNC_3(VAR_2->vref[VAR_4]);

  VAR_2->channel_config[VAR_3].vref_mv /= 1000;
  break;
 case 130:
  VAR_2->channel_config[VAR_3].vref_mv = 2500;
  break;
 default:
  FUNC_2(&VAR_2->sd.spi->dev, "Invalid reference %d\n", VAR_4);
  return -VAR_0;
 }

 return 0;
}
