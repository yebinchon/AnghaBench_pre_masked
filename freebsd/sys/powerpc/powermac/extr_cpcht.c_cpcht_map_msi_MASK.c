
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct pcicfg_ht {int ht_msiaddr; } ;
struct TYPE_2__ {struct pcicfg_ht ht; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 struct pci_devinfo* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, device_t VAR_2, int VAR_3, uint64_t *VAR_4,
    uint32_t *VAR_5)
{
 device_t VAR_6;
 struct pci_devinfo *VAR_7;
 struct pcicfg_ht *VAR_8 = ((void*)0);

 for (VAR_6 = VAR_2; VAR_6 != VAR_1; VAR_6 =
     FUNC_1(FUNC_1(VAR_6))) {
  VAR_7 = FUNC_0(VAR_6);
  VAR_8 = &VAR_7->cfg.ht;

  if (VAR_8 == ((void*)0))
   continue;
 }

 if (VAR_8 == ((void*)0))
  return (VAR_0);

 *VAR_4 = VAR_8->ht_msiaddr;
 *VAR_5 = VAR_3 & 0xff;

 return (0);
}
