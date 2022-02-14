
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct pci_device_id {size_t driver_data; } ;
struct pci_dev {int devfn; } ;
struct ide_port_info {int host_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*,struct ide_port_info*,int *) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 struct ide_port_info* VAR_3 ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_4, const struct pci_device_id *VAR_5)
{
 struct ide_port_info VAR_6;
 u8 VAR_7 = VAR_5->driver_data;

 VAR_6 = VAR_3[VAR_7];

 if (VAR_7 == 1)
  VAR_6.host_flags |= VAR_0;
 else if (VAR_7 == 2 || VAR_7 == 3) {
  if ((FUNC_0(VAR_4->devfn) & 1) == 0) {
   if (FUNC_2(VAR_4, 0) != 0x01f1)
    VAR_6.host_flags |= VAR_1;
   VAR_6.host_flags |= VAR_2;
  } else
   VAR_6.host_flags &= ~VAR_2;
 }

 return FUNC_1(VAR_4, &VAR_6, ((void*)0));
}
