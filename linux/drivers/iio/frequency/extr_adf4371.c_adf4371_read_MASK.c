
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;
struct adf4371_state {int regmap; TYPE_1__* spi; } ;
typedef int ssize_t ;
struct TYPE_4__ {unsigned int reg; unsigned int bit; } ;
struct TYPE_3__ {int dev; } ;





 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 char** VAR_2 ;
 unsigned long long FUNC_2 (struct adf4371_state*,size_t) ;
 TYPE_2__* VAR_3 ;
 int FUNC_3 (int *,char*) ;
 struct adf4371_state* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int ,unsigned int,unsigned int*) ;
 int FUNC_6 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_7(struct iio_dev *VAR_4,
       uintptr_t VAR_5,
       const struct iio_chan_spec *VAR_6,
       char *VAR_7)
{
 struct adf4371_state *VAR_8 = FUNC_4(VAR_4);
 unsigned long long VAR_9 = 0;
 unsigned int VAR_10, VAR_11, VAR_12;
 int VAR_13;

 switch ((u32)VAR_5) {
 case 129:
  VAR_9 = FUNC_2(VAR_8, VAR_6->channel);
  VAR_13 = FUNC_5(VAR_8->regmap, FUNC_0(0x7C), &VAR_10);
  if (VAR_13 < 0)
   break;

  if (VAR_10 == 0x00) {
   FUNC_3(&VAR_8->spi->dev, "PLL un-locked\n");
   VAR_13 = -VAR_0;
  }
  break;
 case 128:
  VAR_11 = VAR_3[VAR_6->channel].reg;
  VAR_12 = VAR_3[VAR_6->channel].bit;

  VAR_13 = FUNC_5(VAR_8->regmap, VAR_11, &VAR_10);
  if (VAR_13 < 0)
   break;

  VAR_9 = !(VAR_10 & FUNC_1(VAR_12));
  break;
 case 130:
  return FUNC_6(VAR_7, "%s\n", VAR_2[VAR_6->channel]);
 default:
  VAR_13 = -VAR_1;
  VAR_9 = 0;
  break;
 }

 return VAR_13 < 0 ? VAR_13 : FUNC_6(VAR_7, "%llu\n", VAR_9);
}
