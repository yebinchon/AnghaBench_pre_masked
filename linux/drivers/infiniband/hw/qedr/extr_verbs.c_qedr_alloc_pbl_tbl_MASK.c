
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedr_pbl_info {int num_pbls; int pbl_size; } ;
struct qedr_pbl {int pa; void* va; } ;
struct qedr_dev {struct pci_dev* pdev; } ;
struct pci_dev {int dev; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 struct qedr_pbl* FUNC_0 (int ) ;
 void* FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (int *,int ,void*,int ) ;
 struct qedr_pbl* FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct qedr_dev*,struct qedr_pbl_info*,struct qedr_pbl*) ;

__attribute__((used)) static struct qedr_pbl *FUNC_5(struct qedr_dev *VAR_1,
        struct qedr_pbl_info *VAR_2,
        gfp_t VAR_3)
{
 struct pci_dev *VAR_4 = VAR_1->pdev;
 struct qedr_pbl *VAR_5;
 dma_addr_t *VAR_6;
 dma_addr_t VAR_7;
 void *VAR_8;
 int VAR_9;

 VAR_5 = FUNC_3(VAR_2->num_pbls, sizeof(*VAR_5), VAR_3);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 for (VAR_9 = 0; VAR_9 < VAR_2->num_pbls; VAR_9++) {
  VAR_8 = FUNC_1(&VAR_4->dev, VAR_2->pbl_size, &VAR_7,
     VAR_3);
  if (!VAR_8)
   goto err;

  VAR_5[VAR_9].va = VAR_8;
  VAR_5[VAR_9].pa = VAR_7;
 }




 VAR_6 = (dma_addr_t *)VAR_5[0].va;
 for (VAR_9 = 0; VAR_9 < VAR_2->num_pbls - 1; VAR_9++)
  VAR_6[VAR_9] = VAR_5[VAR_9 + 1].pa;

 return VAR_5;

err:
 for (VAR_9--; VAR_9 >= 0; VAR_9--)
  FUNC_2(&VAR_4->dev, VAR_2->pbl_size,
      VAR_5[VAR_9].va, VAR_5[VAR_9].pa);

 FUNC_4(VAR_1, VAR_2, VAR_5);

 return FUNC_0(-VAR_0);
}
