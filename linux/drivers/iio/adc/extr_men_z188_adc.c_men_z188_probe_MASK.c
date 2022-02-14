
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct z188_adc {struct resource* mem; int * base; } ;
struct resource {int start; } ;
struct mcb_device_id {int dummy; } ;
struct mcb_device {int dev; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {char* name; int num_channels; int channels; int modes; int * info; TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct resource*) ;
 int FUNC_2 (struct resource*) ;
 struct iio_dev* FUNC_3 (int *,int) ;
 int FUNC_4 (struct iio_dev*) ;
 struct z188_adc* FUNC_5 (struct iio_dev*) ;
 int * FUNC_6 (int ,int ) ;
 int FUNC_7 (struct resource*) ;
 struct resource* FUNC_8 (struct mcb_device*,char*) ;
 int FUNC_9 (struct mcb_device*,struct iio_dev*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct resource*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_12(struct mcb_device *VAR_5,
   const struct mcb_device_id *VAR_6)
{
 struct z188_adc *VAR_7;
 struct iio_dev *VAR_8;
 struct resource *VAR_9;

 VAR_8 = FUNC_3(&VAR_5->dev, sizeof(struct z188_adc));
 if (!VAR_8)
  return -VAR_0;

 VAR_7 = FUNC_5(VAR_8);
 VAR_8->name = "z188-adc";
 VAR_8->dev.parent = &VAR_5->dev;
 VAR_8->info = &VAR_4;
 VAR_8->modes = VAR_2;
 VAR_8->channels = VAR_3;
 VAR_8->num_channels = FUNC_0(VAR_3);

 VAR_9 = FUNC_8(VAR_5, "z188-adc");
 if (FUNC_1(VAR_9))
  return FUNC_2(VAR_9);

 VAR_7->base = FUNC_6(VAR_9->start, FUNC_11(VAR_9));
 if (VAR_7->base == ((void*)0))
  goto err;

 FUNC_10(VAR_7->base);

 VAR_7->mem = VAR_9;
 FUNC_9(VAR_5, VAR_8);

 return FUNC_4(VAR_8);

err:
 FUNC_7(VAR_9);
 return -VAR_1;
}
