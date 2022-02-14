
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {scalar_t__ device; int irq; } ;
struct fritzcard {int irq; int addr; struct pci_dev* pdev; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct fritzcard*) ;
 struct fritzcard* FUNC_1 (int,int ) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int) ;
 int FUNC_5 (struct pci_dev*,struct fritzcard*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,int ) ;
 int FUNC_8 (struct fritzcard*) ;

__attribute__((used)) static int
FUNC_9(struct pci_dev *VAR_5, const struct pci_device_id *VAR_6)
{
 int VAR_7 = -VAR_2;
 struct fritzcard *VAR_8;

 VAR_8 = FUNC_1(sizeof(struct fritzcard), VAR_3);
 if (!VAR_8) {
  FUNC_6("No kmem for fritzcard\n");
  return VAR_7;
 }
 if (VAR_5->device == VAR_4)
  VAR_8->type = VAR_1;
 else
  VAR_8->type = VAR_0;
 VAR_8->pdev = VAR_5;
 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7) {
  FUNC_0(VAR_8);
  return VAR_7;
 }

 FUNC_7("mISDN: found adapter %s at %s\n",
    (char *) VAR_6->driver_data, FUNC_3(VAR_5));

 VAR_8->addr = FUNC_4(VAR_5, 1);
 VAR_8->irq = VAR_5->irq;
 FUNC_5(VAR_5, VAR_8);
 VAR_7 = FUNC_8(VAR_8);
 if (VAR_7)
  FUNC_5(VAR_5, ((void*)0));
 return VAR_7;
}
