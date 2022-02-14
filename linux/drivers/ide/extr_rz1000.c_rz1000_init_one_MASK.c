
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dummy; } ;
struct ide_port_info {int host_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,struct ide_port_info*,int *) ;
 int FUNC_1 (struct pci_dev*) ;
 struct ide_port_info VAR_2 ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_3, const struct pci_device_id *VAR_4)
{
 struct ide_port_info VAR_5 = VAR_2;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6)
  return VAR_6;

 if (FUNC_2(VAR_3)) {
  VAR_5.host_flags |= VAR_1;
  VAR_5.host_flags |= VAR_0;
 }

 return FUNC_0(VAR_3, &VAR_5, ((void*)0));
}
