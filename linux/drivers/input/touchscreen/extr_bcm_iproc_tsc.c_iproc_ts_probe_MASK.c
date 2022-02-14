
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct TYPE_12__ {int fuzz_y; int max_y; int fuzz_x; int max_x; } ;
struct iproc_ts_priv {struct input_dev* idev; TYPE_3__ cfg_params; int pen_status; struct platform_device* pdev; int tsc_clk; int regmap; } ;
struct TYPE_11__ {scalar_t__ version; scalar_t__ product; int vendor; int bustype; } ;
struct TYPE_10__ {TYPE_4__* parent; } ;
struct input_dev {int* evbit; int close; int open; int keybit; TYPE_2__ id; TYPE_1__ dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_4__*,char*,...) ;
 int FUNC_5 (TYPE_4__*,char*) ;
 struct input_dev* FUNC_6 (TYPE_4__*) ;
 struct iproc_ts_priv* FUNC_7 (TYPE_4__*,int,int ) ;
 int FUNC_8 (TYPE_4__*,int,int ,int ,int ,struct platform_device*) ;
 int FUNC_9 (struct input_dev*) ;
 int FUNC_10 (struct input_dev*,int ,int ,int ,int ,int ) ;
 int FUNC_11 (struct input_dev*,struct iproc_ts_priv*) ;
 int FUNC_12 (TYPE_4__*,struct iproc_ts_priv*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_13 (struct platform_device*,int ) ;
 int FUNC_14 (struct platform_device*,struct iproc_ts_priv*) ;
 int FUNC_15 (int ,char*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_17)
{
 struct iproc_ts_priv *VAR_18;
 struct input_dev *VAR_19;
 int VAR_20;
 int VAR_21;

 VAR_18 = FUNC_7(&VAR_17->dev, sizeof(*VAR_18), VAR_7);
 if (!VAR_18)
  return -VAR_4;


 VAR_18->regmap = FUNC_15(VAR_17->dev.of_node,
       "ts_syscon");
 if (FUNC_1(VAR_18->regmap)) {
  VAR_21 = FUNC_2(VAR_18->regmap);
  FUNC_4(&VAR_17->dev, "unable to map I/O memory:%d\n", VAR_21);
  return VAR_21;
 }

 VAR_18->tsc_clk = FUNC_5(&VAR_17->dev, "tsc_clk");
 if (FUNC_1(VAR_18->tsc_clk)) {
  VAR_21 = FUNC_2(VAR_18->tsc_clk);
  FUNC_4(&VAR_17->dev,
   "failed getting clock tsc_clk: %d\n", VAR_21);
  return VAR_21;
 }

 VAR_18->pdev = VAR_17;
 VAR_21 = FUNC_12(&VAR_17->dev, VAR_18);
 if (VAR_21) {
  FUNC_4(&VAR_17->dev, "get_tsc_config failed: %d\n", VAR_21);
  return VAR_21;
 }

 VAR_19 = FUNC_6(&VAR_17->dev);
 if (!VAR_19) {
  FUNC_4(&VAR_17->dev, "failed to allocate input device\n");
  return -VAR_4;
 }

 VAR_18->idev = VAR_19;
 VAR_18->pen_status = VAR_10;


 VAR_19->name = VAR_8;
 VAR_19->dev.parent = &VAR_17->dev;

 VAR_19->id.bustype = VAR_3;
 VAR_19->id.vendor = VAR_11;
 VAR_19->id.product = 0;
 VAR_19->id.version = 0;

 VAR_19->evbit[0] = FUNC_0(VAR_6) | FUNC_0(VAR_5);
 FUNC_3(VAR_2, VAR_19->keybit);

 FUNC_10(VAR_19, VAR_0, VAR_12, VAR_18->cfg_params.max_x,
        VAR_18->cfg_params.fuzz_x, 0);
 FUNC_10(VAR_19, VAR_1, VAR_13, VAR_18->cfg_params.max_y,
        VAR_18->cfg_params.fuzz_y, 0);

 VAR_19->open = VAR_15;
 VAR_19->close = VAR_16;

 FUNC_11(VAR_19, VAR_18);
 FUNC_14(VAR_17, VAR_18);


 VAR_20 = FUNC_13(VAR_17, 0);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_21 = FUNC_8(&VAR_17->dev, VAR_20,
     VAR_14,
     VAR_9, VAR_8, VAR_17);
 if (VAR_21)
  return VAR_21;

 VAR_21 = FUNC_9(VAR_18->idev);
 if (VAR_21) {
  FUNC_4(&VAR_17->dev,
   "failed to register input device: %d\n", VAR_21);
  return VAR_21;
 }

 return 0;
}
