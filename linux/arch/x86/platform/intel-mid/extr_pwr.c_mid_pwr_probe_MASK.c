
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {scalar_t__ driver_data; } ;
struct device {int dummy; } ;
struct pci_dev {int irq; struct device dev; } ;
struct mid_pwr_device_info {int (* set_initial_state ) (struct mid_pwr*) ;} ;
struct mid_pwr {int available; int lock; int irq; int regs; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct mid_pwr* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct device*,int ,int ,int ,int ,struct mid_pwr*) ;
 int FUNC_4 (struct mid_pwr*) ;
 int VAR_3 ;
 struct mid_pwr* VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,struct mid_pwr*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,int,int ) ;
 int * FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct mid_pwr*) ;

__attribute__((used)) static int FUNC_12(struct pci_dev *VAR_5, const struct pci_device_id *VAR_6)
{
 struct mid_pwr_device_info *VAR_7 = (void *)VAR_6->driver_data;
 struct device *VAR_8 = &VAR_5->dev;
 struct mid_pwr *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_8(VAR_5);
 if (VAR_10 < 0) {
  FUNC_0(&VAR_5->dev, "error: could not enable device\n");
  return VAR_10;
 }

 VAR_10 = FUNC_9(VAR_5, 1 << 0, FUNC_6(VAR_5));
 if (VAR_10) {
  FUNC_0(&VAR_5->dev, "I/O memory remapping failed\n");
  return VAR_10;
 }

 VAR_9 = FUNC_2(VAR_8, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->dev = VAR_8;
 VAR_9->regs = FUNC_10(VAR_5)[0];
 VAR_9->irq = VAR_5->irq;

 FUNC_5(&VAR_9->lock);


 FUNC_4(VAR_9);

 if (VAR_7 && VAR_7->set_initial_state) {
  VAR_10 = VAR_7->set_initial_state(VAR_9);
  if (VAR_10)
   FUNC_1(VAR_8, "Can't set initial state: %d\n", VAR_10);
 }

 VAR_10 = FUNC_3(VAR_8, VAR_5->irq, VAR_3,
          VAR_2, FUNC_6(VAR_5), VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_9->available = 1;
 VAR_4 = VAR_9;

 FUNC_7(VAR_5, VAR_9);
 return 0;
}
