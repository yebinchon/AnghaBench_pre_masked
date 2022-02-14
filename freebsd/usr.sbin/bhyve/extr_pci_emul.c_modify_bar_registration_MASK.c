
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_devinst {TYPE_1__* pi_bar; int pi_name; } ;
struct mem_range {int arg2; struct pci_devinst* arg1; int handler; int flags; int size; int base; int name; struct pci_devinst* arg; int port; } ;
struct inout_port {int arg2; struct pci_devinst* arg1; int handler; int flags; int size; int base; int name; struct pci_devinst* arg; int port; } ;
struct TYPE_2__ {int type; int size; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int) ;
 int FUNC_1 (struct mem_range*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct mem_range*) ;
 int FUNC_3 (struct mem_range*) ;
 int FUNC_4 (struct mem_range*) ;
 int FUNC_5 (struct mem_range*) ;

__attribute__((used)) static void
FUNC_6(struct pci_devinst *VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8;
 struct inout_port VAR_9;
 struct mem_range VAR_10;

 switch (VAR_5->pi_bar[VAR_6].type) {
 case 130:
  FUNC_1(&VAR_9, sizeof(struct inout_port));
  VAR_9.name = VAR_5->pi_name;
  VAR_9.port = VAR_5->pi_bar[VAR_6].addr;
  VAR_9.size = VAR_5->pi_bar[VAR_6].size;
  if (VAR_7) {
   VAR_9.flags = VAR_1;
   VAR_9.handler = VAR_3;
   VAR_9.arg = VAR_5;
   VAR_8 = FUNC_2(&VAR_9);
  } else
   VAR_8 = FUNC_4(&VAR_9);
  break;
 case 129:
 case 128:
  FUNC_1(&VAR_10, sizeof(struct mem_range));
  VAR_10.name = VAR_5->pi_name;
  VAR_10.base = VAR_5->pi_bar[VAR_6].addr;
  VAR_10.size = VAR_5->pi_bar[VAR_6].size;
  if (VAR_7) {
   VAR_10.flags = VAR_2;
   VAR_10.handler = VAR_4;
   VAR_10.arg1 = VAR_5;
   VAR_10.arg2 = VAR_6;
   VAR_8 = FUNC_3(&VAR_10);
  } else
   VAR_8 = FUNC_5(&VAR_10);
  break;
 default:
  VAR_8 = VAR_0;
  break;
 }
 FUNC_0(VAR_8 == 0);
}
