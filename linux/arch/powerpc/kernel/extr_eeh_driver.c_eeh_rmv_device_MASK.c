
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_driver {TYPE_1__* err_handler; } ;
struct pci_dn {int pe_number; int vf_index; } ;
struct pci_dev {scalar_t__ hdr_type; } ;
struct eeh_rmv_data {int removed_vf_list; int removed_dev_count; } ;
struct eeh_dev {int rmv_entry; int * pdev; scalar_t__ physfn; int mode; } ;
struct TYPE_2__ {scalar_t__ slot_reset; scalar_t__ error_detected; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct pci_dev* FUNC_0 (struct eeh_dev*) ;
 struct pci_dn* FUNC_1 (struct eeh_dev*) ;
 int FUNC_2 (struct eeh_dev*) ;
 struct pci_driver* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 () ;
 int FUNC_11 (char*,int ) ;

__attribute__((used)) static void FUNC_12(struct eeh_dev *VAR_3, void *VAR_4)
{
 struct pci_driver *VAR_5;
 struct pci_dev *VAR_6 = FUNC_0(VAR_3);
 struct eeh_rmv_data *VAR_7 = (struct eeh_rmv_data *)VAR_4;
 if (!FUNC_2(VAR_3) ||
     (VAR_6->hdr_type == VAR_2))
  return;

 if (VAR_7) {
  VAR_5 = FUNC_3(VAR_6);
  if (VAR_5) {
   if (VAR_5->err_handler &&
       VAR_5->err_handler->error_detected &&
       VAR_5->err_handler->slot_reset) {
    FUNC_4(VAR_6);
    return;
   }
   FUNC_4(VAR_6);
  }
 }


 FUNC_11("EEH: Removing %s without EEH sensitive driver\n",
  FUNC_8(VAR_6));
 VAR_3->mode |= VAR_0;
 if (VAR_7)
  VAR_7->removed_dev_count++;

 if (VAR_3->physfn) {
  if (VAR_7)
   FUNC_5(&VAR_3->rmv_entry, &VAR_7->removed_vf_list);
 } else {
  FUNC_7();
  FUNC_9(VAR_6);
  FUNC_10();
 }
}
