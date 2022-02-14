
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_controller {int dummy; } ;
struct eeh_pe_get_flag {int member_0; int member_1; } ;
struct eeh_pe {int dummy; } ;


 int VAR_0 ;
 struct eeh_pe* FUNC_0 (struct eeh_pe*,int ,struct eeh_pe_get_flag*) ;
 struct eeh_pe* FUNC_1 (struct pci_controller*) ;

struct eeh_pe *FUNC_2(struct pci_controller *VAR_1,
  int VAR_2, int VAR_3)
{
 struct eeh_pe *VAR_4 = FUNC_1(VAR_1);
 struct eeh_pe_get_flag VAR_5 = { VAR_2, VAR_3 };
 struct eeh_pe *VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_0, &VAR_5);

 return VAR_6;
}
