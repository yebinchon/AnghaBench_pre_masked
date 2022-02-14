
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int devfn; } ;
struct ide_port_info {int * tp_ops; int init_iops; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*,struct ide_port_info*,int *) ;
 struct ide_port_info VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_3, const struct pci_device_id *VAR_4)
{
 struct ide_port_info VAR_5 = VAR_0;
 return FUNC_1(VAR_3, &VAR_5, ((void*)0));
}
