
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_dev {int bus; } ;
struct pci_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (struct device*,struct device_attribute*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 () ;
 struct pci_dev* FUNC_5 (struct device*) ;
 struct zpci_dev* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct zpci_dev*) ;
 int FUNC_8 (struct zpci_dev*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_0, struct device_attribute *VAR_1,
        const char *VAR_2, size_t VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_5(VAR_0);
 struct zpci_dev *VAR_5 = FUNC_6(VAR_4);
 int VAR_6;

 if (!FUNC_0(VAR_0, VAR_1))
  return VAR_3;

 FUNC_1();
 FUNC_3(VAR_4);
 VAR_6 = FUNC_7(VAR_5);
 if (VAR_6)
  goto error;

 VAR_6 = FUNC_8(VAR_5);
 if (VAR_6)
  goto error;

 FUNC_2(VAR_5->bus);
 FUNC_4();

 return VAR_3;

error:
 FUNC_4();
 return VAR_6;
}
