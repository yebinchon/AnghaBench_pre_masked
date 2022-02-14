
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tiadc_device {int channels; int* channel_line; scalar_t__* step_avg; scalar_t__* open_delay; int* sample_delay; int* channel_step; TYPE_1__* mfd_tscadc; } ;
struct iio_dev {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_3 (int) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 unsigned int FUNC_5 (int) ;
 int FUNC_6 (struct device*,char*,int,...) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (struct iio_dev*) ;
 struct tiadc_device* FUNC_9 (struct iio_dev*) ;
 int FUNC_10 (struct tiadc_device*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_11(struct iio_dev *VAR_7)
{
 struct tiadc_device *VAR_8 = FUNC_9(VAR_7);
 struct device *VAR_9 = VAR_8->mfd_tscadc->dev;
 unsigned int VAR_10;
 int VAR_11, VAR_12 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_8->channels; VAR_11++) {
  int VAR_13;

  VAR_13 = VAR_8->channel_line[VAR_11];

  if (VAR_8->step_avg[VAR_11] > VAR_0) {
   FUNC_6(VAR_9, "chan %d step_avg truncating to %d\n",
     VAR_13, VAR_0);
   VAR_8->step_avg[VAR_11] = VAR_0;
  }

  if (VAR_8->step_avg[VAR_11])
   VAR_10 =
   FUNC_2(FUNC_7(VAR_8->step_avg[VAR_11]) - 1) |
   VAR_1;
  else
   VAR_10 = VAR_1;

  if (FUNC_8(VAR_7))
   VAR_10 |= VAR_3;

  FUNC_10(VAR_8, FUNC_0(VAR_12),
    VAR_10 | FUNC_3(VAR_13) |
    VAR_2 |
    VAR_5 |
    VAR_4);

  if (VAR_8->open_delay[VAR_11] > VAR_6) {
   FUNC_6(VAR_9, "chan %d open delay truncating to 0x3FFFF\n",
     VAR_13);
   VAR_8->open_delay[VAR_11] = VAR_6;
  }

  if (VAR_8->sample_delay[VAR_11] > 0xFF) {
   FUNC_6(VAR_9, "chan %d sample delay truncating to 0xFF\n",
     VAR_13);
   VAR_8->sample_delay[VAR_11] = 0xFF;
  }

  FUNC_10(VAR_8, FUNC_1(VAR_12),
    FUNC_4(VAR_8->open_delay[VAR_11]) |
    FUNC_5(VAR_8->sample_delay[VAR_11]));

  VAR_8->channel_step[VAR_11] = VAR_12;
  VAR_12++;
 }
}
