
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int irq_managed; int irq; int dev; int device; } ;
struct irq_alloc_info {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct irq_alloc_info*,int ,int,int) ;
 int FUNC_4 (int ,int ,struct irq_alloc_info*) ;
 int FUNC_5 (struct pci_dev*,int ,int *) ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_7)
{
 struct irq_alloc_info VAR_8;
 int VAR_9;
 int VAR_10;
 u8 VAR_11;

 if (VAR_7->irq_managed && VAR_7->irq > 0)
  return 0;

 VAR_10 = FUNC_5(VAR_7, VAR_6, &VAR_11);
 if (VAR_10 < 0) {
  FUNC_1(&VAR_7->dev, "Failed to read interrupt line: %d\n", VAR_10);
  return VAR_10;
 }

 switch (FUNC_2()) {
 case 128:
  VAR_9 = VAR_2;


  if (VAR_11 == 0) {




   if (VAR_7->device == VAR_4)
    return -VAR_0;







   if (VAR_7->device != VAR_5)
    return 0;
  }
  break;
 default:
  VAR_9 = VAR_3;
  break;
 }

 FUNC_3(&VAR_8, FUNC_0(&VAR_7->dev), 1, VAR_9);





 VAR_10 = FUNC_4(VAR_11, VAR_1, &VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_7->irq = VAR_10;
 VAR_7->irq_managed = 1;

 return 0;
}
