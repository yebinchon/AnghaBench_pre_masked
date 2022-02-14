
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_pgtable {int nents; int * slist; } ;
struct pci_dev {int dummy; } ;


 long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pci_dev*,int *,int,int ) ;
 int FUNC_2 (struct pci_dev*,int *,int,int ) ;
 scalar_t__ FUNC_3 (struct pci_dev*,struct saa7146_pgtable*) ;
 scalar_t__ FUNC_4 (struct pci_dev*,struct saa7146_pgtable*,int *,int) ;
 int FUNC_5 (struct pci_dev*,struct saa7146_pgtable*) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (long) ;
 int * FUNC_8 (void*,int) ;

void *FUNC_9(struct pci_dev *VAR_2, long VAR_3, struct saa7146_pgtable *VAR_4)
{
 int VAR_5 = (VAR_3+VAR_0-1)/VAR_0;
 void *VAR_6 = FUNC_7(VAR_3);
 int VAR_7 = 0;

 if (((void*)0) == VAR_6)
  goto err_null;

 if (!(VAR_4->slist = FUNC_8(VAR_6, VAR_5)))
  goto err_free_mem;

 if (FUNC_3(VAR_2, VAR_4))
  goto err_free_slist;

 VAR_4->nents = VAR_5;
 VAR_7 = FUNC_1(VAR_2,VAR_4->slist,VAR_4->nents,VAR_1);
 if (0 == VAR_7)
  goto err_free_pgtable;

 if (0 != FUNC_4(VAR_2, VAR_4, VAR_4->slist, VAR_7))
  goto err_unmap_sg;

 return VAR_6;

err_unmap_sg:
 FUNC_2(VAR_2, VAR_4->slist, VAR_4->nents, VAR_1);
err_free_pgtable:
 FUNC_5(VAR_2, VAR_4);
err_free_slist:
 FUNC_0(VAR_4->slist);
 VAR_4->slist = ((void*)0);
err_free_mem:
 FUNC_6(VAR_6);
err_null:
 return ((void*)0);
}
