
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct iio_dev {TYPE_1__ dev; int name; int num_channels; int channels; int modes; int * info; } ;
struct device {int dummy; } ;
struct cio_dac_iio {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct device*) ;
 struct iio_dev* FUNC_2 (struct device*,int) ;
 int FUNC_3 (struct device*,struct iio_dev*) ;
 int FUNC_4 (struct device*,scalar_t__,scalar_t__,int ) ;
 struct cio_dac_iio* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_8, unsigned int VAR_9)
{
 struct iio_dev *VAR_10;
 struct cio_dac_iio *VAR_11;
 unsigned int VAR_12;

 VAR_10 = FUNC_2(VAR_8, sizeof(*VAR_11));
 if (!VAR_10)
  return -VAR_3;

 if (!FUNC_4(VAR_8, VAR_5[VAR_9], VAR_0,
  FUNC_1(VAR_8))) {
  FUNC_0(VAR_8, "Unable to request port addresses (0x%X-0x%X)\n",
   VAR_5[VAR_9], VAR_5[VAR_9] + VAR_0);
  return -VAR_2;
 }

 VAR_10->info = &VAR_7;
 VAR_10->modes = VAR_4;
 VAR_10->channels = VAR_6;
 VAR_10->num_channels = VAR_1;
 VAR_10->name = FUNC_1(VAR_8);
 VAR_10->dev.parent = VAR_8;

 VAR_11 = FUNC_5(VAR_10);
 VAR_11->base = VAR_5[VAR_9];


 for (VAR_12 = 0; VAR_12 < 32; VAR_12 += 2)
  FUNC_6(0, VAR_5[VAR_9] + VAR_12);

 return FUNC_3(VAR_8, VAR_10);
}
