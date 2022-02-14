
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {struct device* parent; } ;
struct iio_dev {char* name; int modes; int num_channels; int channels; int * info; TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct cm3605 {int als_max; int vdd; int aset; int led; int aout; int dir; struct device* dev; } ;
typedef enum iio_chan_type { ____Placeholder_iio_chan_type } iio_chan_type ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*,char*,int ) ;
 int FUNC_6 (struct device*,char*) ;
 struct iio_dev* FUNC_7 (struct device*,int) ;
 int FUNC_8 (struct device*,char*) ;
 int FUNC_9 (struct device*,int ,int ,int *,int ,char*,struct iio_dev*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct iio_dev*) ;
 int FUNC_12 (int ,int*) ;
 struct cm3605* FUNC_13 (struct iio_dev*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (char*,int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct device_node*,char*,int*) ;
 int FUNC_18 (struct platform_device*,int ) ;
 int FUNC_19 (struct platform_device*,struct iio_dev*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_13)
{
 struct cm3605 *VAR_14;
 struct iio_dev *VAR_15;
 struct device *VAR_16 = &VAR_13->dev;
 struct device_node *VAR_17 = VAR_16->of_node;
 enum iio_chan_type VAR_18;
 u32 VAR_19;
 int VAR_20;

 VAR_15 = FUNC_7(VAR_16, sizeof(*VAR_14));
 if (!VAR_15)
  return -VAR_2;
 FUNC_19(VAR_13, VAR_15);

 VAR_14 = FUNC_13(VAR_15);
 VAR_14->dev = VAR_16;
 VAR_14->dir = VAR_5;

 VAR_20 = FUNC_17(VAR_17, "capella,aset-resistance-ohms", &VAR_19);
 if (VAR_20) {
  FUNC_4(VAR_16, "no RSET specified, assuming 100K\n");
  VAR_19 = 100000;
 }
 switch (VAR_19) {
 case 50000:
  VAR_14->als_max = 650;
  break;
 case 100000:
  VAR_14->als_max = 300;
  break;
 case 300000:
  VAR_14->als_max = 100;
  break;
 case 600000:
  VAR_14->als_max = 50;
  break;
 default:
  FUNC_4(VAR_16, "non-standard resistance\n");
  return -VAR_0;
 }

 VAR_14->aout = FUNC_6(VAR_16, "aout");
 if (FUNC_1(VAR_14->aout)) {
  if (FUNC_2(VAR_14->aout) == -VAR_1) {
   FUNC_3(VAR_16, "no ADC, deferring...\n");
   return -VAR_3;
  }
  FUNC_3(VAR_16, "failed to get AOUT ADC channel\n");
  return FUNC_2(VAR_14->aout);
 }
 VAR_20 = FUNC_12(VAR_14->aout, &VAR_18);
 if (VAR_20 < 0)
  return VAR_20;
 if (VAR_18 != VAR_6) {
  FUNC_3(VAR_16, "wrong type of IIO channel specified for AOUT\n");
  return -VAR_0;
 }

 VAR_14->vdd = FUNC_8(VAR_16, "vdd");
 if (FUNC_1(VAR_14->vdd)) {
  FUNC_3(VAR_16, "failed to get VDD regulator\n");
  return FUNC_2(VAR_14->vdd);
 }
 VAR_20 = FUNC_21(VAR_14->vdd);
 if (VAR_20) {
  FUNC_3(VAR_16, "failed to enable VDD regulator\n");
  return VAR_20;
 }

 VAR_14->aset = FUNC_5(VAR_16, "aset", VAR_4);
 if (FUNC_1(VAR_14->aset)) {
  FUNC_3(VAR_16, "no ASET GPIO\n");
  VAR_20 = FUNC_2(VAR_14->aset);
  goto out_disable_vdd;
 }

 VAR_20 = FUNC_9(VAR_16, FUNC_18(VAR_13, 0),
   VAR_12, ((void*)0), 0, "cm3605", VAR_15);
 if (VAR_20) {
  FUNC_3(VAR_16, "unable to request IRQ\n");
  goto out_disable_aset;
 }


 FUNC_15("cm3605", &VAR_14->led);
 FUNC_14(VAR_14->led, VAR_8);

 VAR_15->dev.parent = VAR_16;
 VAR_15->info = &VAR_11;
 VAR_15->name = "cm3605";
 VAR_15->channels = VAR_10;
 VAR_15->num_channels = FUNC_0(VAR_10);
 VAR_15->modes = VAR_7;

 VAR_20 = FUNC_11(VAR_15);
 if (VAR_20)
  goto out_remove_trigger;
 FUNC_4(VAR_16, "Capella Microsystems CM3605 enabled range 0..%d LUX\n",
   VAR_14->als_max);

 return 0;

out_remove_trigger:
 FUNC_14(VAR_14->led, VAR_9);
 FUNC_16(VAR_14->led);
out_disable_aset:
 FUNC_10(VAR_14->aset, 0);
out_disable_vdd:
 FUNC_20(VAR_14->vdd);
 return VAR_20;
}
