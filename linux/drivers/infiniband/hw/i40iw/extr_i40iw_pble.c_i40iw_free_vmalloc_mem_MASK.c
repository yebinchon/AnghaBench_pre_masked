
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct i40iw_hw {scalar_t__ dev_context; } ;
struct i40iw_chunk {int pg_cnt; scalar_t__ type; int * vaddr; int * dmaaddrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct i40iw_hw *VAR_2, struct i40iw_chunk *VAR_3)
{
 struct pci_dev *VAR_4 = (struct pci_dev *)VAR_2->dev_context;
 int VAR_5;

 if (!VAR_3->pg_cnt)
  goto done;
 for (VAR_5 = 0; VAR_5 < VAR_3->pg_cnt; VAR_5++)
  FUNC_0(&VAR_4->dev, VAR_3->dmaaddrs[VAR_5], VAR_1, VAR_0);

 done:
 FUNC_1(VAR_3->dmaaddrs);
 VAR_3->dmaaddrs = ((void*)0);
 FUNC_2(VAR_3->vaddr);
 VAR_3->vaddr = ((void*)0);
 VAR_3->type = 0;
}
