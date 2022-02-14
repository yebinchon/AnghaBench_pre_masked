
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct device {int dummy; } ;
struct pci_dev {struct device dev; } ;
struct fam15h_power_data {int ** groups; int group; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct device*,char*,struct fam15h_power_data*,int **) ;
 struct fam15h_power_data* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct pci_dev*,struct fam15h_power_data*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_3,
         const struct pci_device_id *VAR_4)
{
 struct fam15h_power_data *VAR_5;
 struct device *VAR_6 = &VAR_3->dev;
 struct device *VAR_7;
 int VAR_8;






 FUNC_5(VAR_3);

 if (!FUNC_4(VAR_3))
  return -VAR_0;

 VAR_5 = FUNC_2(VAR_6, sizeof(struct fam15h_power_data), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_8 = FUNC_3(VAR_3, VAR_5);
 if (VAR_8)
  return VAR_8;

 VAR_5->pdev = VAR_3;

 VAR_5->groups[0] = &VAR_5->group;

 VAR_7 = FUNC_1(VAR_6, "fam15h_power",
          VAR_5,
          &VAR_5->groups[0]);
 return FUNC_0(VAR_7);
}
