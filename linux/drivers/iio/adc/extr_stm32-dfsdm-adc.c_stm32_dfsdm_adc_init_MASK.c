
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stm32_dfsdm_adc {int completion; int hwc; TYPE_1__* dfsdm; int oversamp; } ;
struct TYPE_7__ {int of_node; } ;
struct iio_dev {int num_channels; int modes; TYPE_2__ dev; struct iio_chan_spec* channels; } ;
struct iio_chan_spec {int scan_index; } ;
struct TYPE_6__ {int num_chs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 struct iio_chan_spec* FUNC_4 (TYPE_2__*,int,int,int ) ;
 int VAR_6 ;
 struct stm32_dfsdm_adc* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct iio_dev*,int *,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (struct iio_dev*,struct iio_chan_spec*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (struct iio_dev*,int ) ;
 int FUNC_11 (struct iio_dev*) ;
 scalar_t__ FUNC_12 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_13(struct iio_dev *VAR_9)
{
 struct iio_chan_spec *VAR_10;
 struct stm32_dfsdm_adc *VAR_11 = FUNC_5(VAR_9);
 int VAR_12;
 int VAR_13, VAR_14;

 VAR_11->oversamp = VAR_0;
 VAR_13 = FUNC_10(VAR_9, VAR_11->oversamp);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_12 = FUNC_8(VAR_9->dev.of_node,
          "st,adc-channels");
 if (VAR_12 < 0 || VAR_12 > VAR_11->dfsdm->num_chs) {
  FUNC_2(&VAR_9->dev, "Bad st,adc-channels\n");
  return VAR_12 < 0 ? VAR_12 : -VAR_1;
 }


 VAR_11->hwc = FUNC_3(&VAR_9->dev);
 if (FUNC_0(VAR_11->hwc))
  return -VAR_3;

 VAR_10 = FUNC_4(&VAR_9->dev, VAR_12, sizeof(*VAR_10),
     VAR_4);
 if (!VAR_10)
  return -VAR_2;

 for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {
  VAR_10[VAR_14].scan_index = VAR_14;
  VAR_13 = FUNC_9(VAR_9, &VAR_10[VAR_14]);
  if (VAR_13 < 0) {
   FUNC_2(&VAR_9->dev, "Channels init failed\n");
   return VAR_13;
  }
 }

 VAR_9->num_channels = VAR_12;
 VAR_9->channels = VAR_10;

 FUNC_7(&VAR_11->completion);


 if (FUNC_12(VAR_9)) {
  FUNC_1(&VAR_9->dev, "No DMA support\n");
  return 0;
 }

 VAR_13 = FUNC_6(VAR_9,
      &VAR_6,
      &VAR_7,
      &VAR_8);
 if (VAR_13) {
  FUNC_11(VAR_9);
  FUNC_2(&VAR_9->dev, "buffer setup failed\n");
  return VAR_13;
 }


 VAR_9->modes |= VAR_5;

 return 0;
}
