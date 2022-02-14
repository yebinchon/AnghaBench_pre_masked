
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct nitrox_q_vector {int valid; int resp_tasklet; } ;
struct TYPE_3__ {int vector; } ;
struct TYPE_4__ {TYPE_1__ msix; } ;
struct nitrox_device {int num_vecs; struct nitrox_q_vector* qvec; TYPE_2__ iov; struct pci_dev* pdev; } ;


 int FUNC_0 (int,struct nitrox_q_vector*) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct nitrox_q_vector*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct nitrox_device *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pdev;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_vecs; VAR_2++) {
  struct nitrox_q_vector *VAR_3;
  int VAR_4;

  VAR_3 = VAR_0->qvec + VAR_2;
  if (!VAR_3->valid)
   continue;

  VAR_4 = VAR_0->iov.msix.vector;
  FUNC_1(VAR_4, ((void*)0));
  FUNC_0(VAR_4, VAR_3);

  FUNC_4(&VAR_3->resp_tasklet);
  FUNC_5(&VAR_3->resp_tasklet);
  VAR_3->valid = 0;
 }
 FUNC_2(VAR_0->qvec);
 VAR_0->qvec = ((void*)0);
 FUNC_3(VAR_1);
}
