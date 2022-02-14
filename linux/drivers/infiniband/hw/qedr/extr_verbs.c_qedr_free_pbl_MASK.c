
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedr_pbl_info {int num_pbls; int pbl_size; } ;
struct qedr_pbl {int pa; int va; } ;
struct qedr_dev {struct pci_dev* pdev; } ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct qedr_pbl*) ;

__attribute__((used)) static void FUNC_2(struct qedr_dev *VAR_0,
     struct qedr_pbl_info *VAR_1, struct qedr_pbl *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_0->pdev;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_pbls; VAR_4++) {
  if (!VAR_2[VAR_4].va)
   continue;
  FUNC_0(&VAR_3->dev, VAR_1->pbl_size,
      VAR_2[VAR_4].va, VAR_2[VAR_4].pa);
 }

 FUNC_1(VAR_2);
}
