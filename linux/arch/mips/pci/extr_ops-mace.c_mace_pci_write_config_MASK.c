
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct pci_bus {int dummy; } ;
struct TYPE_5__ {void* l; void** w; void** b; } ;
struct TYPE_4__ {TYPE_2__ config_data; int config_addr; } ;
struct TYPE_6__ {TYPE_1__ pci; } ;


 int FUNC_0 (char*,int,int,void*) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (struct pci_bus*,unsigned int,int) ;

__attribute__((used)) static int
FUNC_2(struct pci_bus *VAR_2, unsigned int VAR_3,
        int VAR_4, int VAR_5, u32 VAR_6)
{
 VAR_1->pci.config_addr = FUNC_1(VAR_2, VAR_3, VAR_4);
 switch (VAR_5) {
 case 1:
  VAR_1->pci.config_data.b[(VAR_4 & 3) ^ 3] = VAR_6;
  break;
 case 2:
  VAR_1->pci.config_data.w[((VAR_4 >> 1) & 1) ^ 1] = VAR_6;
  break;
 case 4:
  VAR_1->pci.config_data.l = VAR_6;
  break;
 }

 FUNC_0("write%d: reg=%08x,val=%02x\n", VAR_5 * 8, VAR_4, VAR_6);

 return VAR_0;
}
