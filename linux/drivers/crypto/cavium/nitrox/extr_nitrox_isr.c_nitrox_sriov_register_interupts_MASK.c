
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct nitrox_q_vector {int valid; int resp_tasklet; int name; struct nitrox_device* ndev; } ;
struct TYPE_4__ {int entry; int vector; } ;
struct TYPE_3__ {TYPE_2__ msix; } ;
struct nitrox_device {TYPE_1__ iov; int num_vecs; struct nitrox_q_vector* qvec; struct pci_dev* pdev; } ;


 int FUNC_0 (struct nitrox_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 struct nitrox_q_vector* FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct nitrox_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 () ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,TYPE_2__*,int ) ;
 int FUNC_9 (int,int ,int ,int ,struct nitrox_q_vector*) ;
 int FUNC_10 (int ,int ,char*,int) ;
 int FUNC_11 (int *,int ,unsigned long) ;

int FUNC_12(struct nitrox_device *VAR_7)
{
 struct pci_dev *VAR_8 = VAR_7->pdev;
 struct nitrox_q_vector *VAR_9;
 int VAR_10, VAR_11;
 int VAR_12;





 VAR_7->iov.msix.entry = VAR_3;
 VAR_12 = FUNC_8(VAR_8, &VAR_7->iov.msix, VAR_4);
 if (VAR_12) {
  FUNC_1(FUNC_0(VAR_7), "failed to allocate nps-core-int%d\n",
   VAR_3);
  return VAR_12;
 }

 VAR_9 = FUNC_4(VAR_4, sizeof(*VAR_9), VAR_1);
 if (!VAR_9) {
  FUNC_7(VAR_8);
  return -VAR_0;
 }
 VAR_9->ndev = VAR_7;

 VAR_7->qvec = VAR_9;
 VAR_7->num_vecs = VAR_4;
 FUNC_10(VAR_9->name, VAR_2, "nitrox-core-int%d",
   VAR_3);

 VAR_10 = VAR_7->iov.msix.vector;
 VAR_12 = FUNC_9(VAR_10, VAR_5, 0, VAR_9->name, VAR_9);
 if (VAR_12) {
  FUNC_1(FUNC_0(VAR_7), "irq failed for nitrox-core-int%d\n",
   VAR_3);
  goto iov_irq_fail;
 }
 VAR_11 = FUNC_6();
 FUNC_3(VAR_10, FUNC_2(VAR_11));

 FUNC_11(&VAR_9->resp_tasklet, VAR_6,
       (unsigned long)VAR_9);
 VAR_9->valid = 1;

 return 0;

iov_irq_fail:
 FUNC_5(VAR_7);
 return VAR_12;
}
