
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct eeh_dev {TYPE_1__* pe; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int (* get_state ) (TYPE_1__*,int *) ;} ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 struct eeh_dev* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (char*,char*,int,int) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 struct pci_dev* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
     struct device_attribute *VAR_3, char *VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_3(VAR_2);
 struct eeh_dev *VAR_6 = FUNC_0(VAR_5);
 int VAR_7;

 if (!VAR_6 || !VAR_6->pe)
  return -VAR_0;

 VAR_7 = VAR_1->get_state(VAR_6->pe, ((void*)0));
 return FUNC_1(VAR_4, "0x%08x 0x%08x\n",
         VAR_7, VAR_6->pe->state);
}
