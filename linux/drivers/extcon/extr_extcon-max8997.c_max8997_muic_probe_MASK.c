
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct max8997_platform_data {struct max8997_muic_platform_data* muic_pdata; } ;
struct max8997_muic_platform_data {int num_init_data; scalar_t__ detcable_delay_ms; void* path_usb; void* path_uart; TYPE_1__* init_data; } ;
struct max8997_muic_irq {unsigned int virq; int irq; int name; } ;
struct max8997_muic_info {int wq_detcable; void* path_uart; TYPE_2__* dev; int status; int muic; void* path_usb; int edev; int irq_work; int mutex; } ;
struct max8997_dev {int irq_domain; int muic; int dev; } ;
struct TYPE_6__ {int data; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct max8997_muic_irq*) ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (TYPE_2__*,char*,...) ;
 struct max8997_dev* FUNC_5 (int ) ;
 struct max8997_platform_data* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 struct max8997_muic_info* FUNC_9 (TYPE_2__*,int,int ) ;
 int FUNC_10 (unsigned int,struct max8997_muic_info*) ;
 unsigned int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ,int,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_13 (struct max8997_muic_info*,int ,int*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_14 (struct max8997_muic_info*,int ) ;
 int FUNC_15 (struct max8997_muic_info*,void*,int) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (scalar_t__) ;
 struct max8997_muic_irq* VAR_15 ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct platform_device*,struct max8997_muic_info*) ;
 int FUNC_20 (int ,int *,int) ;
 int FUNC_21 (unsigned int,int *,int ,int ,int ,struct max8997_muic_info*) ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_17)
{
 struct max8997_dev *VAR_18 = FUNC_5(VAR_17->dev.parent);
 struct max8997_platform_data *VAR_19 = FUNC_6(VAR_18->dev);
 struct max8997_muic_info *VAR_20;
 int VAR_21;
 int VAR_22;
 bool VAR_23;
 int VAR_24, VAR_25;

 VAR_20 = FUNC_9(&VAR_17->dev, sizeof(struct max8997_muic_info),
       VAR_6);
 if (!VAR_20)
  return -VAR_5;

 VAR_20->dev = &VAR_17->dev;
 VAR_20->muic = VAR_18->muic;

 FUNC_19(VAR_17, VAR_20);
 FUNC_18(&VAR_20->mutex);

 FUNC_2(&VAR_20->irq_work, VAR_14);

 for (VAR_25 = 0; VAR_25 < FUNC_0(VAR_15); VAR_25++) {
  struct max8997_muic_irq *VAR_26 = &VAR_15[VAR_25];
  unsigned int VAR_27 = 0;

  VAR_27 = FUNC_11(VAR_18->irq_domain, VAR_26->irq);
  if (!VAR_27) {
   VAR_24 = -VAR_4;
   goto err_irq;
  }
  VAR_26->virq = VAR_27;

  VAR_24 = FUNC_21(VAR_27, ((void*)0),
    VAR_13,
    VAR_7,
    VAR_26->name, VAR_20);
  if (VAR_24) {
   FUNC_4(&VAR_17->dev,
    "failed: irq request (IRQ: %d, error :%d)\n",
    VAR_26->irq, VAR_24);
   goto err_irq;
  }
 }


 VAR_20->edev = FUNC_7(&VAR_17->dev, VAR_11);
 if (FUNC_3(VAR_20->edev)) {
  FUNC_4(&VAR_17->dev, "failed to allocate memory for extcon\n");
  VAR_24 = -VAR_5;
  goto err_irq;
 }

 VAR_24 = FUNC_8(&VAR_17->dev, VAR_20->edev);
 if (VAR_24) {
  FUNC_4(&VAR_17->dev, "failed to register extcon device\n");
  goto err_irq;
 }

 if (VAR_19 && VAR_19->muic_pdata) {
  struct max8997_muic_platform_data *VAR_28
   = VAR_19->muic_pdata;


  for (VAR_25 = 0; VAR_25 < VAR_28->num_init_data; VAR_25++) {
   FUNC_16(VAR_20->muic,
     VAR_28->init_data[VAR_25].addr,
     VAR_28->init_data[VAR_25].data);
  }





  if (VAR_28->path_uart)
   VAR_20->path_uart = VAR_28->path_uart;
  else
   VAR_20->path_uart = VAR_1;

  if (VAR_28->path_usb)
   VAR_20->path_usb = VAR_28->path_usb;
  else
   VAR_20->path_usb = VAR_2;





  if (VAR_28->detcable_delay_ms)
   VAR_21 =
    FUNC_17(VAR_28->detcable_delay_ms);
  else
   VAR_21 = FUNC_17(VAR_3);
 } else {
  VAR_20->path_uart = VAR_1;
  VAR_20->path_usb = VAR_2;
  VAR_21 = FUNC_17(VAR_3);
 }


 VAR_24 = FUNC_12(VAR_20->muic, VAR_10,
    2, VAR_20->status);
 if (VAR_24) {
  FUNC_4(VAR_20->dev, "failed to read MUIC register\n");
  return VAR_24;
 }
 VAR_22 = FUNC_13(VAR_20,
        VAR_8, &VAR_23);
 if (VAR_23 && VAR_22 == VAR_9)
  FUNC_15(VAR_20, VAR_20->path_uart, 1);


 FUNC_14(VAR_20, VAR_0);
 FUNC_1(&VAR_20->wq_detcable, VAR_12);
 FUNC_20(VAR_16, &VAR_20->wq_detcable,
   VAR_21);

 return 0;

err_irq:
 while (--VAR_25 >= 0)
  FUNC_10(VAR_15[VAR_25].virq, VAR_20);
 return VAR_24;
}
