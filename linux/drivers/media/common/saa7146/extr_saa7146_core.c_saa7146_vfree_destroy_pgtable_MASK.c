
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_pgtable {int * slist; int nents; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pci_dev*,int *,int ,int ) ;
 int FUNC_2 (struct pci_dev*,struct saa7146_pgtable*) ;
 int FUNC_3 (void*) ;

void FUNC_4(struct pci_dev *VAR_1, void *VAR_2, struct saa7146_pgtable *VAR_3)
{
 FUNC_1(VAR_1, VAR_3->slist, VAR_3->nents, VAR_0);
 FUNC_2(VAR_1, VAR_3);
 FUNC_0(VAR_3->slist);
 VAR_3->slist = ((void*)0);
 FUNC_3(VAR_2);
}
