
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct rt8973a_muic_info {int num_muic_irqs; int wq_detcable; TYPE_1__* dev; int edev; int irq_data; struct muic_irq* muic_irqs; int irq; int regmap; int irq_work; int mutex; void* num_reg_data; void* reg_data; struct i2c_client* i2c; } ;
struct muic_irq {int virq; int irq; int name; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_6__ {struct device_node* of_node; } ;
struct i2c_client {int irq; TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,char*,...) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 struct rt8973a_muic_info* FUNC_8 (TYPE_1__*,int,int ) ;
 int FUNC_9 (struct i2c_client*,int *) ;
 int FUNC_10 (TYPE_1__*,int,int *,int ,int,int ,struct rt8973a_muic_info*) ;
 int FUNC_11 (struct i2c_client*,struct rt8973a_muic_info*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int *,int ) ;
 int FUNC_15 (int ,int ,int,int ,int *,int *) ;
 int FUNC_16 (int ,int ) ;
 int VAR_8 ;
 int FUNC_17 (struct rt8973a_muic_info*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_18(struct i2c_client *VAR_17,
     const struct i2c_device_id *VAR_18)
{
 struct device_node *VAR_19 = VAR_17->dev.of_node;
 struct rt8973a_muic_info *VAR_20;
 int VAR_21, VAR_22, VAR_23;

 if (!VAR_19)
  return -VAR_1;

 VAR_20 = FUNC_8(&VAR_17->dev, sizeof(*VAR_20), VAR_3);
 if (!VAR_20)
  return -VAR_2;
 FUNC_11(VAR_17, VAR_20);

 VAR_20->dev = &VAR_17->dev;
 VAR_20->i2c = VAR_17;
 VAR_20->irq = VAR_17->irq;
 VAR_20->muic_irqs = VAR_13;
 VAR_20->num_muic_irqs = FUNC_0(VAR_13);
 VAR_20->reg_data = VAR_15;
 VAR_20->num_reg_data = FUNC_0(VAR_15);

 FUNC_13(&VAR_20->mutex);

 FUNC_2(&VAR_20->irq_work, VAR_12);

 VAR_20->regmap = FUNC_9(VAR_17, &VAR_14);
 if (FUNC_3(VAR_20->regmap)) {
  VAR_22 = FUNC_4(VAR_20->regmap);
  FUNC_5(VAR_20->dev, "failed to allocate register map: %d\n",
       VAR_22);
  return VAR_22;
 }


 VAR_23 = VAR_7 | VAR_5 | VAR_6;
 VAR_22 = FUNC_15(VAR_20->regmap, VAR_20->irq, VAR_23, 0,
      &VAR_10, &VAR_20->irq_data);
 if (VAR_22 != 0) {
  FUNC_5(VAR_20->dev, "failed to add irq_chip (irq:%d, err:%d)\n",
        VAR_20->irq, VAR_22);
  return VAR_22;
 }

 for (VAR_21 = 0; VAR_21 < VAR_20->num_muic_irqs; VAR_21++) {
  struct muic_irq *VAR_24 = &VAR_20->muic_irqs[VAR_21];
  int VAR_25 = 0;

  VAR_25 = FUNC_16(VAR_20->irq_data, VAR_24->irq);
  if (VAR_25 <= 0)
   return -VAR_1;
  VAR_24->virq = VAR_25;

  VAR_22 = FUNC_10(VAR_20->dev, VAR_25, ((void*)0),
      VAR_11,
      VAR_4 | VAR_5,
      VAR_24->name, VAR_20);
  if (VAR_22) {
   FUNC_5(VAR_20->dev,
    "failed: irq request (IRQ: %d, error :%d)\n",
    VAR_24->irq, VAR_22);
   return VAR_22;
  }
 }


 VAR_20->edev = FUNC_6(VAR_20->dev, VAR_8);
 if (FUNC_3(VAR_20->edev)) {
  FUNC_5(VAR_20->dev, "failed to allocate memory for extcon\n");
  return -VAR_2;
 }


 VAR_22 = FUNC_7(VAR_20->dev, VAR_20->edev);
 if (VAR_22) {
  FUNC_5(VAR_20->dev, "failed to register extcon device\n");
  return VAR_22;
 }
 FUNC_1(&VAR_20->wq_detcable, VAR_9);
 FUNC_14(VAR_16, &VAR_20->wq_detcable,
   FUNC_12(VAR_0));


 FUNC_17(VAR_20);

 return 0;
}
