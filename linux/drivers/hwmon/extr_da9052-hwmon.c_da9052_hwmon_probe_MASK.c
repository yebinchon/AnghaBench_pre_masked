
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct da9052_hwmon {int tsiref_mv; scalar_t__ tsiref; TYPE_1__* da9052; scalar_t__ tsi_as_adc; int tsidone; int hwmon_lock; } ;
struct TYPE_6__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (TYPE_1__*,int ,struct da9052_hwmon*) ;
 int VAR_7 ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (TYPE_1__*,int ,char*,int ,struct da9052_hwmon*) ;
 int VAR_8 ;
 int FUNC_7 (struct device*,char*,int) ;
 TYPE_1__* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,char*) ;
 struct device* FUNC_10 (struct device*,char*,struct da9052_hwmon*,int ) ;
 struct da9052_hwmon* FUNC_11 (struct device*,int,int ) ;
 scalar_t__ FUNC_12 (int ,char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct platform_device*,struct da9052_hwmon*) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (scalar_t__) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct da9052_hwmon *VAR_11;
 struct device *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_11(VAR_10, sizeof(struct da9052_hwmon), VAR_6);
 if (!VAR_11)
  return -VAR_4;

 FUNC_15(VAR_9, VAR_11);

 FUNC_14(&VAR_11->hwmon_lock);
 VAR_11->da9052 = FUNC_8(VAR_9->dev.parent);

 FUNC_13(&VAR_11->tsidone);

 VAR_11->tsi_as_adc =
  FUNC_9(VAR_9->dev.parent, "dlg,tsi-as-adc");

 if (VAR_11->tsi_as_adc) {
  VAR_11->tsiref = FUNC_12(VAR_9->dev.parent, "tsiref");
  if (FUNC_0(VAR_11->tsiref)) {
   VAR_13 = FUNC_1(VAR_11->tsiref);
   FUNC_7(&VAR_9->dev, "failed to get tsiref: %d", VAR_13);
   return VAR_13;
  }

  VAR_13 = FUNC_17(VAR_11->tsiref);
  if (VAR_13)
   return VAR_13;

  VAR_11->tsiref_mv = FUNC_18(VAR_11->tsiref);
  if (VAR_11->tsiref_mv < 0) {
   VAR_13 = VAR_11->tsiref_mv;
   goto exit_regulator;
  }


  VAR_11->tsiref_mv /= 1000;


  if (VAR_11->tsiref_mv < 1800 || VAR_11->tsiref_mv > 2600) {
   FUNC_7(VAR_11->da9052->dev, "invalid TSIREF voltage: %d",
    VAR_11->tsiref_mv);
   VAR_13 = -VAR_5;
   goto exit_regulator;
  }


  FUNC_5(VAR_11->da9052, VAR_3, 0x00);


  FUNC_4(VAR_11->da9052, VAR_1,
       VAR_0,
       VAR_0);

  VAR_13 = FUNC_6(VAR_11->da9052, VAR_2,
      "tsiready-irq", VAR_8,
      VAR_11);
  if (VAR_13) {
   FUNC_7(&VAR_9->dev, "Failed to register TSIRDY IRQ: %d",
    VAR_13);
   goto exit_regulator;
  }
 }

 VAR_12 = FUNC_10(VAR_10, "da9052",
          VAR_11,
          VAR_7);
 VAR_13 = FUNC_2(VAR_12);
 if (VAR_13)
  goto exit_irq;

 return 0;

exit_irq:
 if (VAR_11->tsi_as_adc)
  FUNC_3(VAR_11->da9052, VAR_2, VAR_11);
exit_regulator:
 if (VAR_11->tsiref)
  FUNC_16(VAR_11->tsiref);

 return VAR_13;
}
