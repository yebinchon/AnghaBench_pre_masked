
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_bus {int dummy; } ;
struct bridge_regs {TYPE_2__* b_type0_cfg_dev; } ;
struct bridge_controller {struct bridge_regs* base; } ;
struct TYPE_4__ {TYPE_1__* f; } ;
struct TYPE_3__ {int * c; int * l; } ;


 struct bridge_controller* FUNC_0 (struct pci_bus*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int,int*) ;
 int FUNC_4 (void*,int,int,int*) ;

__attribute__((used)) static int FUNC_5(struct pci_bus *VAR_5, unsigned int VAR_6,
     int VAR_7, int VAR_8, u32 *VAR_9)
{
 struct bridge_controller *VAR_10 = FUNC_0(VAR_5);
 struct bridge_regs *VAR_11 = VAR_10->base;
 int VAR_12 = FUNC_2(VAR_6);
 int VAR_13 = FUNC_1(VAR_6);
 void *VAR_14;
 u32 VAR_15;
 int VAR_16;

 VAR_14 = &VAR_11->b_type0_cfg_dev[VAR_12].f[VAR_13].c[VAR_3];
 if (FUNC_3(VAR_15, (u32 *)VAR_14))
  return VAR_0;





 if (VAR_15 == (VAR_4 | (VAR_2 << 16))) {
  VAR_14 = &VAR_11->b_type0_cfg_dev[VAR_12].f[VAR_13].l[VAR_7 >> 2];
  return FUNC_4(VAR_14, VAR_7, VAR_8, VAR_9);
 }

 VAR_14 = &VAR_11->b_type0_cfg_dev[VAR_12].f[VAR_13].c[VAR_7 ^ (4 - VAR_8)];

 if (VAR_8 == 1)
  VAR_16 = FUNC_3(*VAR_9, (u8 *)VAR_14);
 else if (VAR_8 == 2)
  VAR_16 = FUNC_3(*VAR_9, (u16 *)VAR_14);
 else
  VAR_16 = FUNC_3(*VAR_9, (u32 *)VAR_14);

 return VAR_16 ? VAR_0 : VAR_1;
}
