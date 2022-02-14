
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct device_node {char* name; } ;
struct device {int dummy; } ;
struct adc5_data {int hw_settle_1; int hw_settle_2; int decimation; TYPE_1__* adc_chans; } ;
struct adc5_chip {TYPE_3__* data; struct device* dev; } ;
struct adc5_channel_prop {size_t channel; char const* datasheet_name; int decimation; int prescale; int hw_settle_time; int avg_samples; int cal_val; int cal_method; } ;
typedef int dig_version ;
struct TYPE_6__ {TYPE_2__* adc_chans; } ;
struct TYPE_5__ {int prescale_index; } ;
struct TYPE_4__ {int datasheet_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t,int ) ;
 int FUNC_2 (size_t,int ) ;
 int FUNC_3 (size_t,size_t) ;
 int FUNC_4 (struct adc5_chip*,int ,scalar_t__*,int) ;
 int FUNC_5 (struct device*,char*,size_t,char const*) ;
 int FUNC_6 (struct device*,char*,...) ;
 scalar_t__ FUNC_7 (struct device_node*,char*,int *) ;
 scalar_t__ FUNC_8 (struct device_node*,char*) ;
 int FUNC_9 (struct device_node*,char*,size_t*) ;
 int FUNC_10 (struct device_node*,char*,size_t*,int) ;
 int FUNC_11 (char*,scalar_t__,scalar_t__) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static int FUNC_13(struct adc5_chip *VAR_11,
        struct adc5_channel_prop *VAR_12,
        struct device_node *VAR_13,
        const struct adc5_data *VAR_14)
{
 const char *VAR_15 = VAR_13->name, *VAR_16;
 u32 VAR_17, VAR_18, VAR_19[2];
 int VAR_20;
 struct device *VAR_21 = VAR_11->dev;

 VAR_20 = FUNC_9(VAR_13, "reg", &VAR_17);
 if (VAR_20) {
  FUNC_6(VAR_21, "invalid channel number %s\n", VAR_15);
  return VAR_20;
 }

 if (VAR_17 > VAR_4 ||
     !VAR_14->adc_chans[VAR_17].datasheet_name) {
  FUNC_6(VAR_21, "%s invalid channel number %d\n", VAR_15, VAR_17);
  return -VAR_8;
 }


 VAR_12->channel = VAR_17;

 VAR_16 = FUNC_7(VAR_13,
    "label", ((void*)0)) ? : VAR_13->name;
 if (!VAR_16) {
  FUNC_12("Invalid channel name\n");
  return -VAR_8;
 }
 VAR_12->datasheet_name = VAR_16;

 VAR_20 = FUNC_9(VAR_13, "qcom,decimation", &VAR_18);
 if (!VAR_20) {
  VAR_20 = FUNC_1(VAR_18, VAR_14->decimation);
  if (VAR_20 < 0) {
   FUNC_6(VAR_21, "%02x invalid decimation %d\n",
    VAR_17, VAR_18);
   return VAR_20;
  }
  VAR_12->decimation = VAR_20;
 } else {
  VAR_12->decimation = VAR_1;
 }

 VAR_20 = FUNC_10(VAR_13, "qcom,pre-scaling", VAR_19, 2);
 if (!VAR_20) {
  VAR_20 = FUNC_3(VAR_19[0], VAR_19[1]);
  if (VAR_20 < 0) {
   FUNC_6(VAR_21, "%02x invalid pre-scaling <%d %d>\n",
    VAR_17, VAR_19[0], VAR_19[1]);
   return VAR_20;
  }
  VAR_12->prescale = VAR_20;
 } else {
  VAR_12->prescale =
   VAR_11->data->adc_chans[VAR_12->channel].prescale_index;
 }

 VAR_20 = FUNC_9(VAR_13, "qcom,hw-settle-time", &VAR_18);
 if (!VAR_20) {
  u8 VAR_22[2];

  VAR_20 = FUNC_4(VAR_11, VAR_7, VAR_22,
       sizeof(VAR_22));
  if (VAR_20 < 0) {
   FUNC_6(VAR_21, "Invalid dig version read %d\n", VAR_20);
   return VAR_20;
  }

  FUNC_11("dig_ver:minor:%d, major:%d\n", VAR_22[0],
      VAR_22[1]);

  if (VAR_22[0] >= VAR_3 &&
   VAR_22[1] >= VAR_2)
   VAR_20 = FUNC_2(VAR_18,
       VAR_14->hw_settle_2);
  else
   VAR_20 = FUNC_2(VAR_18,
       VAR_14->hw_settle_1);

  if (VAR_20 < 0) {
   FUNC_6(VAR_21, "%02x invalid hw-settle-time %d us\n",
    VAR_17, VAR_18);
   return VAR_20;
  }
  VAR_12->hw_settle_time = VAR_20;
 } else {
  VAR_12->hw_settle_time = VAR_10;
 }

 VAR_20 = FUNC_9(VAR_13, "qcom,avg-samples", &VAR_18);
 if (!VAR_20) {
  VAR_20 = FUNC_0(VAR_18);
  if (VAR_20 < 0) {
   FUNC_6(VAR_21, "%02x invalid avg-samples %d\n",
    VAR_17, VAR_18);
   return VAR_20;
  }
  VAR_12->avg_samples = VAR_20;
 } else {
  VAR_12->avg_samples = VAR_9;
 }

 if (FUNC_8(VAR_13, "qcom,ratiometric"))
  VAR_12->cal_method = VAR_5;
 else
  VAR_12->cal_method = VAR_0;





 VAR_12->cal_val = VAR_6;

 FUNC_5(VAR_21, "%02x name %s\n", VAR_17, VAR_15);

 return 0;
}
