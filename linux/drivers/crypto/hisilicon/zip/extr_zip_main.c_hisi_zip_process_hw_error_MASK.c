
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct pci_dev {struct device dev; } ;
struct hisi_zip {int qm; } ;
typedef scalar_t__ pci_ers_result_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct hisi_zip*) ;
 struct hisi_zip* FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t FUNC_4(struct pci_dev *VAR_3)
{
 struct hisi_zip *VAR_4 = FUNC_3(VAR_3);
 struct device *VAR_5 = &VAR_3->dev;
 pci_ers_result_t VAR_6, VAR_7;

 if (!VAR_4) {
  FUNC_0(VAR_5,
   "Can't recover ZIP-error occurred during device init\n");
  return VAR_1;
 }

 VAR_6 = FUNC_1(&VAR_4->qm);

 VAR_7 = FUNC_2(VAR_4);

 return (VAR_6 == VAR_0 ||
  VAR_7 == VAR_0) ?
        VAR_0 : VAR_2;
}
