
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct nitrox_q_vector {int ring; int valid; int resp_tasklet; int name; struct nitrox_device* ndev; int * cmdq; } ;
struct nitrox_device {int num_vecs; int nr_queues; struct nitrox_q_vector* qvec; int * pkt_inq; struct pci_dev* pdev; } ;


 int FUNC_0 (struct nitrox_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 struct nitrox_q_vector* FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct nitrox_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 () ;
 int FUNC_7 (struct pci_dev*,int,int,int ) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,int) ;
 int FUNC_10 (struct pci_dev*) ;
 int VAR_10 ;
 int FUNC_11 (int,int ,int ,int ,struct nitrox_q_vector*) ;
 int FUNC_12 (int ,int ,char*,int) ;
 int FUNC_13 (int *,int ,unsigned long) ;

int FUNC_14(struct nitrox_device *VAR_11)
{
 struct pci_dev *VAR_12 = VAR_11->pdev;
 struct nitrox_q_vector *VAR_13;
 int VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18;
 VAR_14 = FUNC_10(VAR_12);


 VAR_17 = FUNC_7(VAR_12, VAR_14, VAR_14, VAR_5);
 if (VAR_17 < 0) {
  FUNC_1(FUNC_0(VAR_11), "msix vectors %d alloc failed\n", VAR_14);
  return VAR_17;
 }
 VAR_11->num_vecs = VAR_14;

 VAR_11->qvec = FUNC_4(VAR_14, sizeof(*VAR_13), VAR_1);
 if (!VAR_11->qvec) {
  FUNC_8(VAR_12);
  return -VAR_0;
 }


 for (VAR_18 = VAR_6; VAR_18 < (VAR_14 - 1); VAR_18 += VAR_4) {
  VAR_13 = &VAR_11->qvec[VAR_18];

  VAR_13->ring = VAR_18 / VAR_4;
  if (VAR_13->ring >= VAR_11->nr_queues)
   break;

  VAR_13->cmdq = &VAR_11->pkt_inq[VAR_13->ring];
  FUNC_12(VAR_13->name, VAR_2, "nitrox-pkt%d", VAR_13->ring);

  VAR_15 = FUNC_9(VAR_12, VAR_18);
  VAR_17 = FUNC_11(VAR_15, VAR_9, 0, VAR_13->name, VAR_13);
  if (VAR_17) {
   FUNC_1(FUNC_0(VAR_11), "irq failed for pkt ring/port%d\n",
    VAR_13->ring);
   goto irq_fail;
  }
  VAR_16 = VAR_13->ring % FUNC_6();
  FUNC_3(VAR_15, FUNC_2(VAR_16));

  FUNC_13(&VAR_13->resp_tasklet, VAR_10,
        (unsigned long)VAR_13);
  VAR_13->valid = 1;
 }


 VAR_18 = VAR_3;
 VAR_13 = &VAR_11->qvec[VAR_18];
 VAR_13->ndev = VAR_11;

 FUNC_12(VAR_13->name, VAR_2, "nitrox-core-int%d", VAR_18);

 VAR_15 = FUNC_9(VAR_12, VAR_18);
 VAR_17 = FUNC_11(VAR_15, VAR_7, 0, VAR_13->name, VAR_13);
 if (VAR_17) {
  FUNC_1(FUNC_0(VAR_11), "irq failed for nitrox-core-int%d\n", VAR_18);
  goto irq_fail;
 }
 VAR_16 = FUNC_6();
 FUNC_3(VAR_15, FUNC_2(VAR_16));

 FUNC_13(&VAR_13->resp_tasklet, VAR_8,
       (unsigned long)VAR_13);
 VAR_13->valid = 1;

 return 0;

irq_fail:
 FUNC_5(VAR_11);
 return VAR_17;
}
