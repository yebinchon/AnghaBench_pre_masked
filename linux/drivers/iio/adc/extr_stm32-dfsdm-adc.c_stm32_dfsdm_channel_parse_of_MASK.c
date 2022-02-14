
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_dfsdm_channel {size_t id; int type; int src; size_t alt_si; } ;
struct stm32_dfsdm {size_t num_chs; struct stm32_dfsdm_channel* ch_list; } ;
struct TYPE_2__ {int of_node; } ;
struct iio_dev {TYPE_1__ dev; } ;
struct iio_chan_spec {int scan_index; size_t channel; char const* datasheet_name; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int,...) ;
 int FUNC_1 (int ,char*,int,char const**) ;
 int FUNC_2 (int ,char*,int,size_t*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char const*,int ) ;

__attribute__((used)) static int FUNC_4(struct stm32_dfsdm *VAR_3,
     struct iio_dev *VAR_4,
     struct iio_chan_spec *VAR_5)
{
 struct stm32_dfsdm_channel *VAR_6;
 const char *VAR_7;
 int VAR_8 = VAR_5->scan_index;
 int VAR_9, VAR_10;

 VAR_9 = FUNC_2(VAR_4->dev.of_node,
      "st,adc-channels", VAR_8,
      &VAR_5->channel);
 if (VAR_9 < 0) {
  FUNC_0(&VAR_4->dev,
   " Error parsing 'st,adc-channels' for idx %d\n",
   VAR_8);
  return VAR_9;
 }
 if (VAR_5->channel >= VAR_3->num_chs) {
  FUNC_0(&VAR_4->dev,
   " Error bad channel number %d (max = %d)\n",
   VAR_5->channel, VAR_3->num_chs);
  return -VAR_0;
 }

 VAR_9 = FUNC_1(VAR_4->dev.of_node,
         "st,adc-channel-names", VAR_8,
         &VAR_5->datasheet_name);
 if (VAR_9 < 0) {
  FUNC_0(&VAR_4->dev,
   " Error parsing 'st,adc-channel-names' for idx %d\n",
   VAR_8);
  return VAR_9;
 }

 VAR_6 = &VAR_3->ch_list[VAR_5->channel];
 VAR_6->id = VAR_5->channel;

 VAR_9 = FUNC_1(VAR_4->dev.of_node,
         "st,adc-channel-types", VAR_8,
         &VAR_7);
 if (!VAR_9) {
  VAR_10 = FUNC_3(VAR_7, VAR_2);
  if (VAR_10 < 0)
   return VAR_10;
 } else {
  VAR_10 = 0;
 }
 VAR_6->type = VAR_10;

 VAR_9 = FUNC_1(VAR_4->dev.of_node,
         "st,adc-channel-clk-src", VAR_8,
         &VAR_7);
 if (!VAR_9) {
  VAR_10 = FUNC_3(VAR_7, VAR_1);
  if (VAR_10 < 0)
   return VAR_10;
 } else {
  VAR_10 = 0;
 }
 VAR_6->src = VAR_10;

 VAR_9 = FUNC_2(VAR_4->dev.of_node,
      "st,adc-alt-channel", VAR_8,
      &VAR_6->alt_si);
 if (VAR_9 < 0)
  VAR_6->alt_si = 0;

 return 0;
}
