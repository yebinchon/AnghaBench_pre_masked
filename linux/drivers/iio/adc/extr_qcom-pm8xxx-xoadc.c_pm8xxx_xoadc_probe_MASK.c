
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xoadc_variant {int name; } ;
struct regmap {int dummy; } ;
struct pm8xxx_xoadc {int vref; int nchans; int iio_chans; struct regmap* map; int lock; int complete; struct xoadc_variant const* variant; struct device* dev; } ;
struct device {int parent; struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {struct device_node* of_node; struct device* parent; } ;
struct iio_dev {int num_channels; int channels; int * info; int modes; int name; TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 struct regmap* FUNC_3 (int ,int *) ;
 int FUNC_4 (struct device*,char*,int ) ;
 struct iio_dev* FUNC_5 (struct device*,int) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct device*,int ,int ,int *,int ,int ,struct iio_dev*) ;
 int FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (struct iio_dev*) ;
 struct pm8xxx_xoadc* FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct xoadc_variant* FUNC_13 (struct device*) ;
 int FUNC_14 (struct platform_device*,int ) ;
 int FUNC_15 (struct platform_device*,struct iio_dev*) ;
 int FUNC_16 (struct pm8xxx_xoadc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_17 (struct pm8xxx_xoadc*,struct device_node*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_6)
{
 const struct xoadc_variant *VAR_7;
 struct pm8xxx_xoadc *VAR_8;
 struct iio_dev *VAR_9;
 struct device_node *VAR_10 = VAR_6->dev.of_node;
 struct regmap *VAR_11;
 struct device *VAR_12 = &VAR_6->dev;
 int VAR_13;

 VAR_7 = FUNC_13(VAR_12);
 if (!VAR_7)
  return -VAR_0;

 VAR_9 = FUNC_5(VAR_12, sizeof(*VAR_8));
 if (!VAR_9)
  return -VAR_1;
 FUNC_15(VAR_6, VAR_9);

 VAR_8 = FUNC_10(VAR_9);
 VAR_8->dev = VAR_12;
 VAR_8->variant = VAR_7;
 FUNC_11(&VAR_8->complete);
 FUNC_12(&VAR_8->lock);

 VAR_13 = FUNC_17(VAR_8, VAR_10);
 if (VAR_13)
  return VAR_13;

 VAR_11 = FUNC_3(VAR_12->parent, ((void*)0));
 if (!VAR_11) {
  FUNC_2(VAR_12, "parent regmap unavailable.\n");
  return -VAR_2;
 }
 VAR_8->map = VAR_11;


 VAR_8->vref = FUNC_6(VAR_12, "xoadc-ref");
 if (FUNC_0(VAR_8->vref)) {
  FUNC_2(VAR_12, "failed to get XOADC VREF regulator\n");
  return FUNC_1(VAR_8->vref);
 }
 VAR_13 = FUNC_19(VAR_8->vref);
 if (VAR_13) {
  FUNC_2(VAR_12, "failed to enable XOADC VREF regulator\n");
  return VAR_13;
 }

 VAR_13 = FUNC_7(VAR_12, FUNC_14(VAR_6, 0),
   VAR_4, ((void*)0), 0, VAR_7->name, VAR_9);
 if (VAR_13) {
  FUNC_2(VAR_12, "unable to request IRQ\n");
  goto out_disable_vref;
 }

 VAR_9->dev.parent = VAR_12;
 VAR_9->dev.of_node = VAR_10;
 VAR_9->name = VAR_7->name;
 VAR_9->modes = VAR_3;
 VAR_9->info = &VAR_5;
 VAR_9->channels = VAR_8->iio_chans;
 VAR_9->num_channels = VAR_8->nchans;

 VAR_13 = FUNC_8(VAR_9);
 if (VAR_13)
  goto out_disable_vref;

 VAR_13 = FUNC_16(VAR_8);
 if (VAR_13)
  goto out_unreg_device;

 FUNC_4(VAR_12, "%s XOADC driver enabled\n", VAR_7->name);

 return 0;

out_unreg_device:
 FUNC_9(VAR_9);
out_disable_vref:
 FUNC_18(VAR_8->vref);

 return VAR_13;
}
