
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnv_phb {int opal_id; } ;
struct pci_controller {struct pnv_phb* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct pci_controller *VAR_2)
{
 struct pnv_phb *VAR_3 = VAR_2->private_data;

 FUNC_0(VAR_3->opal_id, VAR_1,
         VAR_0);
}
