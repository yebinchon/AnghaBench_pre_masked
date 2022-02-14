
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_controller {int dummy; } ;
struct eeh_pe {int type; void* data; int edevs; int child_list; struct pci_controller* phb; } ;


 size_t FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;
 struct eeh_pe* FUNC_3 (size_t,int ) ;

__attribute__((used)) static struct eeh_pe *FUNC_4(struct pci_controller *VAR_2, int VAR_3)
{
 struct eeh_pe *VAR_4;
 size_t VAR_5;

 VAR_5 = sizeof(struct eeh_pe);
 if (VAR_1) {
  VAR_5 = FUNC_0(VAR_5, FUNC_2());
  VAR_5 += VAR_1;
 }


 VAR_4 = FUNC_3(VAR_5, VAR_0);
 if (!VAR_4) return ((void*)0);


 VAR_4->type = VAR_3;
 VAR_4->phb = VAR_2;
 FUNC_1(&VAR_4->child_list);
 FUNC_1(&VAR_4->edevs);

 VAR_4->data = (void *)VAR_4 + FUNC_0(sizeof(struct eeh_pe),
          FUNC_2());
 return VAR_4;
}
