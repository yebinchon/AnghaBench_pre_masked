
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct hns_roce_dev {struct pci_dev* pci_dev; struct device* dev; } ;
struct hnae3_ae_ops {int (* reset_event ) (struct pci_dev*,int *) ;int (* set_default_reset_request ) (struct hnae3_ae_dev*,int ) ;} ;
struct hnae3_ae_dev {struct hnae3_ae_ops* ops; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct device*,char*) ;
 struct hnae3_ae_dev* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct hns_roce_dev*,int ) ;
 int FUNC_5 (struct hns_roce_dev*,int ,int) ;
 int FUNC_6 (struct hnae3_ae_dev*,int ) ;
 int FUNC_7 (struct pci_dev*,int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_7, void *VAR_8)
{
 struct hns_roce_dev *VAR_9 = VAR_8;
 struct device *VAR_10 = VAR_9->dev;
 int VAR_11 = 0;
 u32 VAR_12;
 u32 VAR_13;


 VAR_12 = FUNC_4(VAR_9, VAR_6);
 VAR_13 = FUNC_4(VAR_9, VAR_5);

 if (VAR_12 & FUNC_0(VAR_2)) {
  struct pci_dev *VAR_14 = VAR_9->pci_dev;
  struct hnae3_ae_dev *VAR_15 = FUNC_3(VAR_14);
  const struct hnae3_ae_ops *VAR_16 = VAR_15->ops;

  FUNC_2(VAR_10, "AEQ overflow!\n");

  VAR_12 |= 1 << VAR_2;
  FUNC_5(VAR_9, VAR_6, VAR_12);


  if (VAR_16->set_default_reset_request)
   VAR_16->set_default_reset_request(VAR_15,
             VAR_0);
  if (VAR_16->reset_event)
   VAR_16->reset_event(VAR_14, ((void*)0));

  VAR_13 |= 1 << VAR_1;
  FUNC_5(VAR_9, VAR_5, VAR_13);

  VAR_11 = 1;
 } else if (VAR_12 & FUNC_0(VAR_3)) {
  FUNC_2(VAR_10, "BUS ERR!\n");

  VAR_12 |= 1 << VAR_3;
  FUNC_5(VAR_9, VAR_6, VAR_12);

  VAR_13 |= 1 << VAR_1;
  FUNC_5(VAR_9, VAR_5, VAR_13);

  VAR_11 = 1;
 } else if (VAR_12 & FUNC_0(VAR_4)) {
  FUNC_2(VAR_10, "OTHER ERR!\n");

  VAR_12 |= 1 << VAR_4;
  FUNC_5(VAR_9, VAR_6, VAR_12);

  VAR_13 |= 1 << VAR_1;
  FUNC_5(VAR_9, VAR_5, VAR_13);

  VAR_11 = 1;
 } else
  FUNC_2(VAR_10, "There is no abnormal irq found!\n");

 return FUNC_1(VAR_11);
}
