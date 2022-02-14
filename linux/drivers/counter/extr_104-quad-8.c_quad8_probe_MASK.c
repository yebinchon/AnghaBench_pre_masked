
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct quad8_iio* priv; void* num_signals; void* signals; void* num_counts; void* counts; int * ops; struct device* parent; void* name; } ;
struct quad8_iio {int base; TYPE_2__ counter; } ;
struct TYPE_3__ {struct device* parent; } ;
struct iio_dev {TYPE_1__ dev; void* name; void* channels; void* num_channels; int modes; int * info; } ;
struct device {int dummy; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int* VAR_15 ;
 int FUNC_1 (struct device*,char*,int,scalar_t__) ;
 void* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,TYPE_2__*) ;
 struct iio_dev* FUNC_4 (struct device*,int) ;
 int FUNC_5 (struct device*,struct iio_dev*) ;
 int FUNC_6 (struct device*,int,scalar_t__,void*) ;
 struct quad8_iio* FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (int,int) ;
 void* VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;

__attribute__((used)) static int FUNC_9(struct device *VAR_21, unsigned int VAR_22)
{
 struct iio_dev *VAR_23;
 struct quad8_iio *VAR_24;
 int VAR_25, VAR_26;
 unsigned int VAR_27;
 int VAR_28;

 if (!FUNC_6(VAR_21, VAR_15[VAR_22], VAR_9, FUNC_2(VAR_21))) {
  FUNC_1(VAR_21, "Unable to lock port addresses (0x%X-0x%X)\n",
   VAR_15[VAR_22], VAR_15[VAR_22] + VAR_9);
  return -VAR_0;
 }


 VAR_23 = FUNC_4(VAR_21, sizeof(*VAR_24));
 if (!VAR_23)
  return -VAR_1;


 VAR_23->info = &VAR_18;
 VAR_23->modes = VAR_2;
 VAR_23->num_channels = FUNC_0(VAR_16);
 VAR_23->channels = VAR_16;
 VAR_23->name = FUNC_2(VAR_21);
 VAR_23->dev.parent = VAR_21;


 VAR_24 = FUNC_7(VAR_23);
 VAR_24->counter.name = FUNC_2(VAR_21);
 VAR_24->counter.parent = VAR_21;
 VAR_24->counter.ops = &VAR_19;
 VAR_24->counter.counts = VAR_17;
 VAR_24->counter.num_counts = FUNC_0(VAR_17);
 VAR_24->counter.signals = VAR_20;
 VAR_24->counter.num_signals = FUNC_0(VAR_20);
 VAR_24->counter.priv = VAR_24;
 VAR_24->base = VAR_15[VAR_22];


 FUNC_8(VAR_4, VAR_15[VAR_22] + VAR_11);

 for (VAR_25 = 0; VAR_25 < VAR_10; VAR_25++) {
  VAR_27 = VAR_15[VAR_22] + 2 * VAR_25;

  FUNC_8(VAR_8 | VAR_12, VAR_27 + 1);

  for (VAR_26 = 0; VAR_26 < 3; VAR_26++)
   FUNC_8(0x00, VAR_27);

  FUNC_8(VAR_8 | VAR_14, VAR_27 + 1);

  FUNC_8(VAR_8 | VAR_13, VAR_27 + 1);

  FUNC_8(VAR_5, VAR_27 + 1);

  FUNC_8(VAR_7, VAR_27 + 1);

  FUNC_8(VAR_6, VAR_27 + 1);
 }

 FUNC_8(VAR_3, VAR_15[VAR_22] + VAR_11);


 VAR_28 = FUNC_5(VAR_21, VAR_23);
 if (VAR_28)
  return VAR_28;


 return FUNC_3(VAR_21, &VAR_24->counter);
}
