
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_3__ {struct pnv_ioda_pe* pe_array; } ;
struct pnv_phb {int (* freeze_pe ) (struct pnv_phb*,size_t) ;TYPE_1__ ioda; } ;
struct pnv_ioda_pe {int flags; size_t pe_number; struct pnv_ioda_pe* master; } ;
struct pci_controller {struct pnv_phb* private_data; } ;
struct eeh_pe {int state; int type; size_t addr; struct eeh_pe* parent; } ;
struct TYPE_4__ {int (* get_state ) (struct eeh_pe*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 TYPE_2__* VAR_5 ;
 struct eeh_pe* FUNC_1 (struct pci_controller*,size_t,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct pnv_phb*,size_t) ;
 int FUNC_4 (struct eeh_pe*,int *) ;
 int FUNC_5 (struct pnv_phb*,size_t) ;

__attribute__((used)) static int FUNC_6(struct pci_controller *VAR_6,
     u16 VAR_7, struct eeh_pe **VAR_8)
{
 struct pnv_phb *VAR_9 = VAR_6->private_data;
 struct pnv_ioda_pe *VAR_10;
 struct eeh_pe *VAR_11;






 VAR_10 = &VAR_9->ioda.pe_array[VAR_7];
 if (VAR_10->flags & VAR_4) {
  VAR_10 = VAR_10->master;
  FUNC_0(!VAR_10 ||
   !(VAR_10->flags & VAR_3));
  VAR_7 = VAR_10->pe_number;
 }


 VAR_11 = FUNC_1(VAR_6, VAR_7, 0);
 if (!VAR_11)
  return -VAR_2;


 *VAR_8 = VAR_11;
 if (!(VAR_11->state & VAR_0))
  VAR_9->freeze_pe(VAR_9, VAR_7);






 VAR_11 = VAR_11->parent;
 while (VAR_11 && !(VAR_11->type & VAR_1)) {
  int VAR_12;
  VAR_12 = VAR_5->get_state(VAR_11, ((void*)0));
  if (VAR_12 <= 0 || FUNC_2(VAR_12)) {
   VAR_11 = VAR_11->parent;
   continue;
  }


  *VAR_8 = VAR_11;
  if (!(VAR_11->state & VAR_0))
   VAR_9->freeze_pe(VAR_9, VAR_11->addr);


  VAR_11 = VAR_11->parent;
 }

 return 0;
}
