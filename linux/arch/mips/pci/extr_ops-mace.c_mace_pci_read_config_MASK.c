
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct pci_bus {scalar_t__ number; } ;
struct TYPE_4__ {int* b; int* w; int l; } ;
struct TYPE_5__ {int control; int error; TYPE_1__ config_data; int config_addr; } ;
struct TYPE_6__ {TYPE_2__ pci; } ;


 int FUNC_0 (char*,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_1 (struct pci_bus*,unsigned int,int) ;

__attribute__((used)) static int
FUNC_2(struct pci_bus *VAR_4, unsigned int VAR_5,
       int VAR_6, int VAR_7, u32 *VAR_8)
{
 u32 VAR_9 = VAR_3->pci.control;


 VAR_3->pci.control = VAR_9 & ~VAR_0;
 VAR_3->pci.config_addr = FUNC_1(VAR_4, VAR_5, VAR_6);
 switch (VAR_7) {
 case 1:
  *VAR_8 = VAR_3->pci.config_data.b[(VAR_6 & 3) ^ 3];
  break;
 case 2:
  *VAR_8 = VAR_3->pci.config_data.w[((VAR_6 >> 1) & 1) ^ 1];
  break;
 case 4:
  *VAR_8 = VAR_3->pci.config_data.l;
  break;
 }

 VAR_3->pci.error &= ~VAR_1;
 VAR_3->pci.control = VAR_9;




 if (VAR_4->number == 0 && VAR_6 == 0x40 && VAR_7 == 4 &&
     (VAR_5 == (1 << 3) || VAR_5 == (2 << 3)))
  *VAR_8 |= 0x1000;

 FUNC_0("read%d: reg=%08x,val=%02x\n", VAR_7 * 8, VAR_6, *VAR_8);

 return VAR_2;
}
