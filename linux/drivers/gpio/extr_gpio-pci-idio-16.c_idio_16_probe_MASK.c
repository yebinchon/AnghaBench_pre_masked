
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct device {int dummy; } ;
struct pci_dev {int irq; struct device dev; } ;
struct TYPE_5__ {char* label; int base; int set_multiple; int set; int get_multiple; int get; int direction_output; int direction_input; int get_direction; int names; int ngpio; int owner; struct device* parent; } ;
struct idio_16_gpio {TYPE_2__ chip; TYPE_1__* reg; int lock; } ;
struct TYPE_4__ {int in0_7; int irq_ctl; int filter_ctl; } ;


 int FUNC_0 (size_t const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct device* const,char*,int) ;
 int FUNC_2 (struct device* const,TYPE_2__*,struct idio_16_gpio*) ;
 struct idio_16_gpio* FUNC_3 (struct device* const,int,int ) ;
 int FUNC_4 (struct device* const,int ,int ,int ,char const* const,struct idio_16_gpio*) ;
 int FUNC_5 (TYPE_2__*,int *,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (int ,int *) ;
 char* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,int ,char const* const) ;
 TYPE_1__** FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct pci_dev *VAR_17, const struct pci_device_id *VAR_18)
{
 struct device *const VAR_19 = &VAR_17->dev;
 struct idio_16_gpio *VAR_20;
 int VAR_21;
 const size_t VAR_22 = 2;
 const char *const VAR_23 = FUNC_7(VAR_17);

 VAR_20 = FUNC_3(VAR_19, sizeof(*VAR_20), VAR_1);
 if (!VAR_20)
  return -VAR_0;

 VAR_21 = FUNC_8(VAR_17);
 if (VAR_21) {
  FUNC_1(VAR_19, "Failed to enable PCI device (%d)\n", VAR_21);
  return VAR_21;
 }

 VAR_21 = FUNC_9(VAR_17, FUNC_0(VAR_22), VAR_23);
 if (VAR_21) {
  FUNC_1(VAR_19, "Unable to map PCI I/O addresses (%d)\n", VAR_21);
  return VAR_21;
 }

 VAR_20->reg = FUNC_10(VAR_17)[VAR_22];


 FUNC_6(0, &VAR_20->reg->filter_ctl);

 VAR_20->chip.label = VAR_23;
 VAR_20->chip.parent = VAR_19;
 VAR_20->chip.owner = VAR_5;
 VAR_20->chip.base = -1;
 VAR_20->chip.ngpio = VAR_2;
 VAR_20->chip.names = VAR_16;
 VAR_20->chip.get_direction = VAR_10;
 VAR_20->chip.direction_input = VAR_7;
 VAR_20->chip.direction_output = VAR_8;
 VAR_20->chip.get = VAR_9;
 VAR_20->chip.get_multiple = VAR_11;
 VAR_20->chip.set = VAR_12;
 VAR_20->chip.set_multiple = VAR_13;

 FUNC_11(&VAR_20->lock);

 VAR_21 = FUNC_2(VAR_19, &VAR_20->chip, VAR_20);
 if (VAR_21) {
  FUNC_1(VAR_19, "GPIO registering failed (%d)\n", VAR_21);
  return VAR_21;
 }


 FUNC_6(0, &VAR_20->reg->irq_ctl);
 FUNC_6(0, &VAR_20->reg->in0_7);

 VAR_21 = FUNC_5(&VAR_20->chip, &VAR_15, 0,
  VAR_6, VAR_4);
 if (VAR_21) {
  FUNC_1(VAR_19, "Could not add irqchip (%d)\n", VAR_21);
  return VAR_21;
 }

 VAR_21 = FUNC_4(VAR_19, VAR_17->irq, VAR_14, VAR_3,
  VAR_23, VAR_20);
 if (VAR_21) {
  FUNC_1(VAR_19, "IRQ handler registering failed (%d)\n", VAR_21);
  return VAR_21;
 }

 return 0;
}
