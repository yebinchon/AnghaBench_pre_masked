
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcpu {int pc_ipimask; int pc_hwref; } ;


 int FUNC_0 (char*,int ) ;

void
FUNC_1(struct pcpu *VAR_0)
{

 FUNC_0("PPC: hwref   = %#zx\n", VAR_0->pc_hwref);
 FUNC_0("PPC: ipimask = %#x\n", VAR_0->pc_ipimask);
}
