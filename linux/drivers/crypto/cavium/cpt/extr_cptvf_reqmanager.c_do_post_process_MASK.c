
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct cpt_vf {struct pci_dev* pdev; } ;
struct cpt_info_buffer {int dummy; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct cpt_vf*,struct cpt_info_buffer*) ;

__attribute__((used)) static void FUNC_2(struct cpt_vf *VAR_0, struct cpt_info_buffer *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_0->pdev;

 if (!VAR_1) {
  FUNC_0(&VAR_2->dev, "incorrect cpt_info_buffer for post processing\n");
  return;
 }

 FUNC_1(VAR_0, VAR_1);
}
