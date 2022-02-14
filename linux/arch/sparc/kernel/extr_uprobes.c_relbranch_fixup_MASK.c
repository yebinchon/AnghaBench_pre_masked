
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned long saved_tnpc; } ;
struct uprobe_task {unsigned long xol_vaddr; scalar_t__ vaddr; TYPE_1__ autask; } ;
struct pt_regs {scalar_t__ tnpc; scalar_t__ tpc; } ;



__attribute__((used)) static unsigned long FUNC_0(u32 VAR_0, struct uprobe_task *VAR_1,
         struct pt_regs *VAR_2)
{

 if (VAR_2->tnpc == VAR_2->tpc + 0x4UL)
  return VAR_1->autask.saved_tnpc + 0x4UL;




 if ((VAR_0 & 0xc0000000) == 0x40000000 ||
     (VAR_0 & 0xc1c00000) == 0x00400000 ||
     (VAR_0 & 0xc1c00000) == 0x00800000) {
  unsigned long VAR_3 = (unsigned long) VAR_1->vaddr;
  unsigned long VAR_4 = VAR_1->xol_vaddr;





  return (VAR_3 + (VAR_2->tnpc - VAR_4));
 }




 return VAR_2->tnpc;
}
