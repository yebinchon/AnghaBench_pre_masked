
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usnic_vnic {TYPE_1__* bar; int vdev; int * chunks; } ;
struct pci_dev {int dummy; } ;
typedef enum usnic_vnic_res_type { ____Placeholder_usnic_vnic_res_type } usnic_vnic_res_type ;
struct TYPE_2__ {int vaddr; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*,int) ;
 int FUNC_3 (int *) ;
 struct pci_dev* FUNC_4 (struct usnic_vnic*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct usnic_vnic *VAR_3)
{
 int VAR_4;
 struct pci_dev *VAR_5;
 enum usnic_vnic_res_type VAR_6;

 VAR_5 = FUNC_4(VAR_3);

 for (VAR_6 = VAR_1 + 1;
   VAR_6 < VAR_2; VAR_6++)
  FUNC_3(&VAR_3->chunks[VAR_6]);

 FUNC_5(VAR_3->vdev);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3->bar); VAR_4++) {
  if (!(FUNC_2(VAR_5, VAR_4) & VAR_0))
   continue;
  FUNC_1(VAR_3->bar[VAR_4].vaddr);
 }
}
