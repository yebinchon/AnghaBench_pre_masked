
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct adc_jack_pdata {int name; int irq_flags; scalar_t__ wakeup_source; int handling_delay_ms; int consumer_channel; TYPE_1__* adc_conditions; int cable_names; } ;
struct TYPE_4__ {int work; } ;
struct adc_jack_data {int num_conditions; scalar_t__ irq; TYPE_2__ handler; scalar_t__ wakeup_source; int edev; int handling_delay; int chan; TYPE_1__* adc_conditions; int * dev; } ;
struct TYPE_3__ {scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int (*) (int *)) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int FUNC_4 (int *,char*,...) ;
 struct adc_jack_pdata* FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 struct adc_jack_data* FUNC_9 (int *,int,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (struct platform_device*,int ) ;
 int FUNC_13 (struct platform_device*,struct adc_jack_data*) ;
 int FUNC_14 (scalar_t__,int ,int ,int ,struct adc_jack_data*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_6)
{
 struct adc_jack_data *VAR_7;
 struct adc_jack_pdata *VAR_8 = FUNC_5(&VAR_6->dev);
 int VAR_9, VAR_10 = 0;

 VAR_7 = FUNC_9(&VAR_6->dev, sizeof(*VAR_7), VAR_4);
 if (!VAR_7)
  return -VAR_2;

 if (!VAR_8->cable_names) {
  FUNC_4(&VAR_6->dev, "error: cable_names not defined.\n");
  return -VAR_0;
 }

 VAR_7->dev = &VAR_6->dev;
 VAR_7->edev = FUNC_7(&VAR_6->dev, VAR_8->cable_names);
 if (FUNC_1(VAR_7->edev)) {
  FUNC_4(&VAR_6->dev, "failed to allocate extcon device\n");
  return -VAR_2;
 }

 if (!VAR_8->adc_conditions) {
  FUNC_4(&VAR_6->dev, "error: adc_conditions not defined.\n");
  return -VAR_0;
 }
 VAR_7->adc_conditions = VAR_8->adc_conditions;


 for (VAR_9 = 0; VAR_7->adc_conditions[VAR_9].id != VAR_3; VAR_9++);
 VAR_7->num_conditions = VAR_9;

 VAR_7->chan = FUNC_10(&VAR_6->dev, VAR_8->consumer_channel);
 if (FUNC_1(VAR_7->chan))
  return FUNC_2(VAR_7->chan);

 VAR_7->handling_delay = FUNC_11(VAR_8->handling_delay_ms);
 VAR_7->wakeup_source = VAR_8->wakeup_source;

 FUNC_0(&VAR_7->handler, FUNC_3);

 FUNC_13(VAR_6, VAR_7);

 VAR_10 = FUNC_8(&VAR_6->dev, VAR_7->edev);
 if (VAR_10)
  return VAR_10;

 VAR_7->irq = FUNC_12(VAR_6, 0);
 if (VAR_7->irq < 0)
  return -VAR_1;

 VAR_10 = FUNC_14(VAR_7->irq, VAR_5,
   VAR_8->irq_flags, VAR_8->name, VAR_7);

 if (VAR_10 < 0) {
  FUNC_4(&VAR_6->dev, "error: irq %d\n", VAR_7->irq);
  return VAR_10;
 }

 if (VAR_7->wakeup_source)
  FUNC_6(&VAR_6->dev, 1);

 FUNC_3(&VAR_7->handler.work);
 return 0;
}
