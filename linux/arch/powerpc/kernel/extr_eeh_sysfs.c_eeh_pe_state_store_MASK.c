
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct eeh_dev {TYPE_1__* pe; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 struct eeh_dev* FUNC_2 (struct pci_dev*) ;
 struct pci_dev* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
      struct device_attribute *VAR_4,
      const char *VAR_5, size_t VAR_6)
{
 struct pci_dev *VAR_7 = FUNC_3(VAR_3);
 struct eeh_dev *VAR_8 = FUNC_2(VAR_7);

 if (!VAR_8 || !VAR_8->pe)
  return -VAR_2;


 if (!(VAR_8->pe->state & VAR_0))
  return VAR_6;

 if (FUNC_1(VAR_8->pe))
  return -VAR_1;
 FUNC_0(VAR_8->pe, VAR_0, 1);

 return VAR_6;
}
