
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sp_device {int dummy; } ;
struct device {int dummy; } ;
struct pci_dev {struct device dev; } ;


 struct sp_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct sp_device*) ;
 int FUNC_2 (struct sp_device*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct sp_device *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_2)
  return;

 FUNC_1(VAR_2);

 FUNC_2(VAR_2);
}
