
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_bus {int number; } ;
struct TYPE_6__ {int * c; } ;
struct bridge_regs {TYPE_3__ b_type1_cfg; TYPE_2__* b_type0_cfg_dev; } ;
struct bridge_controller {struct bridge_regs* base; } ;
struct TYPE_5__ {TYPE_1__* f; } ;
struct TYPE_4__ {int * l; } ;


 struct bridge_controller* FUNC_0 (struct pci_bus*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct bridge_controller*,int ,int) ;
 scalar_t__ FUNC_4 (int,int*) ;
 int FUNC_5 (void*,int,int,int) ;
 int FUNC_6 (int,int*) ;

__attribute__((used)) static int FUNC_7(struct pci_bus *VAR_6, unsigned int VAR_7,
      int VAR_8, int VAR_9, u32 VAR_10)
{
 struct bridge_controller *VAR_11 = FUNC_0(VAR_6);
 struct bridge_regs *VAR_12 = VAR_11->base;
 int VAR_13 = FUNC_2(VAR_7);
 int VAR_14 = FUNC_1(VAR_7);
 int VAR_15 = VAR_6->number;
 void *VAR_16;
 u32 VAR_17;
 int VAR_18;

 FUNC_3(VAR_11, VAR_5, (VAR_15 << 16) | (VAR_13 << 11));
 VAR_16 = &VAR_12->b_type1_cfg.c[(VAR_14 << 8) | VAR_3];
 if (FUNC_4(VAR_17, (u32 *)VAR_16))
  return VAR_0;





 if (VAR_17 == (VAR_4 | (VAR_2 << 16))) {
  VAR_16 = &VAR_12->b_type0_cfg_dev[VAR_13].f[VAR_14].l[VAR_8 >> 2];
  return FUNC_5(VAR_16, VAR_8, VAR_9, VAR_10);
 }

 VAR_16 = &VAR_12->b_type1_cfg.c[(VAR_14 << 8) | (VAR_8 ^ (4 - VAR_9))];

 if (VAR_9 == 1)
  VAR_18 = FUNC_6(VAR_10, (u8 *)VAR_16);
 else if (VAR_9 == 2)
  VAR_18 = FUNC_6(VAR_10, (u16 *)VAR_16);
 else
  VAR_18 = FUNC_6(VAR_10, (u32 *)VAR_16);

 if (VAR_18)
  return VAR_0;

 return VAR_1;
}
