
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct pci_dev {scalar_t__ pm_cap; int d3_delay; int dev; } ;
struct ishtp_device {int dev_state; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct ishtp_device*) ;
 int FUNC_2 (struct ishtp_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_7(struct ishtp_device *VAR_8)
{
 struct pci_dev *VAR_9 = VAR_8->pdev;
 int VAR_10;
 uint16_t VAR_11;

 if (!VAR_9)
  return -VAR_2;

 VAR_10 = FUNC_5(VAR_9);
 if (!VAR_10)
  VAR_8->dev_state = VAR_3;

 if (!VAR_9->pm_cap) {
  FUNC_0(&VAR_9->dev, "Can't reset - no PM caps\n");
  return -VAR_1;
 }


 if (FUNC_1(VAR_8)) {
  FUNC_0(&VAR_9->dev,
   "Can't reset - stuck with DMA in-progress\n");
  return -VAR_0;
 }

 FUNC_4(VAR_9, VAR_9->pm_cap + VAR_6, &VAR_11);

 VAR_11 &= ~VAR_7;
 VAR_11 |= VAR_5;
 FUNC_6(VAR_9, VAR_9->pm_cap + VAR_6, VAR_11);

 FUNC_3(VAR_9->d3_delay);

 VAR_11 &= ~VAR_7;
 VAR_11 |= VAR_4;
 FUNC_6(VAR_9, VAR_9->pm_cap + VAR_6, VAR_11);


 FUNC_2(VAR_8);

 return 0;
}
