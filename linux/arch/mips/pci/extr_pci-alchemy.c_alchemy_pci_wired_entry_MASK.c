
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct alchemy_pci_context {int last_elo1; int last_elo0; TYPE_1__* pci_cfg_vm; int wired_entry; } ;
struct TYPE_2__ {scalar_t__ addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned long,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct alchemy_pci_context *VAR_1)
{
 VAR_1->wired_entry = FUNC_1();
 FUNC_0(0, 0, (unsigned long)VAR_1->pci_cfg_vm->addr, VAR_0);
 VAR_1->last_elo0 = VAR_1->last_elo1 = ~0;
}
