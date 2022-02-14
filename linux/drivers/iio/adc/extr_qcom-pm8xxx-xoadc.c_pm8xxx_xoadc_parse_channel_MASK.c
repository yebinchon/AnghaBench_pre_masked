
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int den; int num; } ;
struct xoadc_channel {scalar_t__ pre_scale_mux; scalar_t__ amux_channel; int scale_fn_type; TYPE_1__ prescale; int type; scalar_t__ datasheet_name; } ;
struct pm8xxx_chan_info {char const* name; int decimation; int amux_ip_rsv; int calibration; struct xoadc_channel const* hwchan; } ;
struct iio_chan_spec {int channel; scalar_t__ address; int info_mask_separate; int indexed; int type; scalar_t__ datasheet_name; } ;
struct device_node {char* name; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct device*,char*,scalar_t__,scalar_t__,char const*,int ,int,int ,int ,int ) ;
 int FUNC_2 (struct device*,char*,char const*,...) ;
 int FUNC_3 (struct device_node*,char*,scalar_t__*) ;
 int FUNC_4 (struct device_node*,char*,int,scalar_t__*) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_8,
          struct device_node *VAR_9,
          const struct xoadc_channel *VAR_10,
          struct iio_chan_spec *VAR_11,
          struct pm8xxx_chan_info *VAR_12)
{
 const char *VAR_13 = VAR_9->name;
 const struct xoadc_channel *VAR_14;
 u32 VAR_15, VAR_16;
 u32 VAR_17, VAR_18;
 int VAR_19;
 int VAR_20;

 VAR_19 = FUNC_4(VAR_9, "reg", 0, &VAR_15);
 if (VAR_19) {
  FUNC_2(VAR_8, "invalid pre scale/mux number %s\n", VAR_13);
  return VAR_19;
 }
 VAR_19 = FUNC_4(VAR_9, "reg", 1, &VAR_16);
 if (VAR_19) {
  FUNC_2(VAR_8, "invalid amux channel number %s\n", VAR_13);
  return VAR_19;
 }


 VAR_20 = 0;
 VAR_14 = &VAR_10[0];
 while (VAR_14 && VAR_14->datasheet_name) {
  if (VAR_14->pre_scale_mux == VAR_15 &&
      VAR_14->amux_channel == VAR_16)
   break;
  VAR_14++;
  VAR_20++;
 }

 if (!VAR_14->datasheet_name) {
  FUNC_2(VAR_8, "could not locate channel %02x/%02x\n",
   VAR_15, VAR_16);
  return -VAR_1;
 }
 VAR_12->name = VAR_13;
 VAR_12->hwchan = VAR_14;

 VAR_12->calibration = VAR_4;

 VAR_12->decimation = VAR_6;

 if (!FUNC_3(VAR_9, "qcom,ratiometric", &VAR_17)) {
  VAR_12->calibration = VAR_5;
  if (VAR_17 > VAR_7) {
   FUNC_2(VAR_8, "%s too large RSV value %d\n", VAR_13, VAR_17);
   return -VAR_1;
  }
  if (VAR_17 == VAR_0) {
   FUNC_2(VAR_8, "%s invalid RSV value %d\n", VAR_13, VAR_17);
   return -VAR_1;
  }
 }


 VAR_19 = FUNC_3(VAR_9, "qcom,decimation", &VAR_18);
 if (!VAR_19) {
  VAR_19 = FUNC_5(VAR_18);
  if (VAR_19 < 0) {
   FUNC_2(VAR_8, "%s invalid decimation %d\n",
    VAR_13, VAR_18);
   return VAR_19;
  }
  VAR_12->decimation = VAR_19;
 }

 VAR_11->channel = VAR_20;
 VAR_11->address = VAR_14->amux_channel;
 VAR_11->datasheet_name = VAR_14->datasheet_name;
 VAR_11->type = VAR_14->type;

 VAR_11->info_mask_separate = FUNC_0(VAR_3) |
  FUNC_0(VAR_2);
 VAR_11->indexed = 1;

 FUNC_1(VAR_8, "channel [PRESCALE/MUX: %02x AMUX: %02x] \"%s\" "
  "ref voltage: %d, decimation %d "
  "prescale %d/%d, scale function %d\n",
  VAR_14->pre_scale_mux, VAR_14->amux_channel, VAR_12->name,
  VAR_12->amux_ip_rsv, VAR_12->decimation, VAR_14->prescale.num,
  VAR_14->prescale.den, VAR_14->scale_fn_type);

 return 0;
}
