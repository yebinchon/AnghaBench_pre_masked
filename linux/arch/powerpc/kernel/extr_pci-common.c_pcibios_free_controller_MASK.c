
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_controller {scalar_t__ global_number; scalar_t__ is_dynamic; int list_node; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct pci_controller*) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct pci_controller *VAR_3)
{
 FUNC_3(&VAR_1);


 if (VAR_3->global_number < VAR_0)
  FUNC_0(VAR_3->global_number, VAR_2);

 FUNC_2(&VAR_3->list_node);
 FUNC_4(&VAR_1);

 if (VAR_3->is_dynamic)
  FUNC_1(VAR_3);
}
