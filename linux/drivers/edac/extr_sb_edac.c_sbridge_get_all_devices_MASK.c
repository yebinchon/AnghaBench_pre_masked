
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_id_table {scalar_t__ type; int n_devs_per_sock; TYPE_1__* descr; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ dev_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pci_dev**,int *,struct pci_id_table const*,int,int) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(u8 *VAR_2,
     const struct pci_id_table *VAR_3)
{
 int VAR_4, VAR_5;
 struct pci_dev *VAR_6 = ((void*)0);
 int VAR_7 = 0;
 int VAR_8 = 0;

 if (VAR_3->type == VAR_1)
  VAR_7 = VAR_8 = 1;
 while (VAR_3 && VAR_3->descr) {
  for (VAR_4 = 0; VAR_4 < VAR_3->n_devs_per_sock; VAR_4++) {
   if (!VAR_7 || VAR_4 == 0 ||
     VAR_3->descr[VAR_4].dev_id !=
      VAR_3->descr[VAR_4-1].dev_id) {
    VAR_6 = ((void*)0);
   }
   do {
    VAR_5 = FUNC_0(&VAR_6, VAR_2,
          VAR_3, VAR_4, VAR_8);
    if (VAR_5 < 0) {
     if (VAR_4 == 0) {
      VAR_4 = VAR_3->n_devs_per_sock;
      break;
     }
     FUNC_1();
     return -VAR_0;
    }
   } while (VAR_6 && !VAR_7);
  }
  VAR_3++;
 }

 return 0;
}
