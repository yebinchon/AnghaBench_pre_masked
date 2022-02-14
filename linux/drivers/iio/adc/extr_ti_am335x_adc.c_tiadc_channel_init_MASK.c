
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tiadc_device {size_t* channel_line; } ;
struct iio_dev {int num_channels; struct iio_chan_spec* channels; } ;
struct TYPE_2__ {unsigned char sign; int realbits; int storagebits; } ;
struct iio_chan_spec {int indexed; size_t channel; int scan_index; TYPE_1__ scan_type; int datasheet_name; int info_mask_separate; int type; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 struct tiadc_device* FUNC_1 (struct iio_dev*) ;
 struct iio_chan_spec* FUNC_2 (int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_5, int VAR_6)
{
 struct tiadc_device *VAR_7 = FUNC_1(VAR_5);
 struct iio_chan_spec *VAR_8;
 struct iio_chan_spec *VAR_9;
 int VAR_10;

 VAR_5->num_channels = VAR_6;
 VAR_8 = FUNC_2(VAR_6, sizeof(*VAR_8), VAR_1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_9 = VAR_8;
 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++, VAR_9++) {

  VAR_9->type = VAR_3;
  VAR_9->indexed = 1;
  VAR_9->channel = VAR_7->channel_line[VAR_10];
  VAR_9->info_mask_separate = FUNC_0(VAR_2);
  VAR_9->datasheet_name = VAR_4[VAR_9->channel];
  VAR_9->scan_index = VAR_10;
  VAR_9->scan_type.sign = 'u';
  VAR_9->scan_type.realbits = 12;
  VAR_9->scan_type.storagebits = 16;
 }

 VAR_5->channels = VAR_8;

 return 0;
}
