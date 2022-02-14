
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct cpt_vf {int qsize; struct pci_dev* pdev; } ;
struct cpt_mbox {int data; int msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cpt_vf*,struct cpt_mbox*) ;
 int FUNC_1 (int *,char*) ;

int FUNC_2(struct cpt_vf *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->pdev;
 struct cpt_mbox VAR_4 = {};

 VAR_4.msg = VAR_0;
 VAR_4.data = VAR_2->qsize;
 if (FUNC_0(VAR_2, &VAR_4)) {
  FUNC_1(&VAR_3->dev, "PF didn't respond to vq_size msg\n");
  return -VAR_1;
 }

 return 0;
}
