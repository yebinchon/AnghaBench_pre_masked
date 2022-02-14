
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_devinfo {int dummy; } ;
struct ofw_pcibus_devinfo {struct pci_devinfo opd_dinfo; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ofw_pcibus_devinfo* FUNC_0 (int,int ,int) ;

struct pci_devinfo *
FUNC_1(device_t VAR_3)
{
 struct ofw_pcibus_devinfo *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0, VAR_1 | VAR_2);
 return (&VAR_4->opd_dinfo);
}
