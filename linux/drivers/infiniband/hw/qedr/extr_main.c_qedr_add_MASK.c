
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qedr_dev {int ibdev; int enet_state; int wq_multiplier; int num_cnq; TYPE_3__* ops; int rdma_ctx; int affin_hwfn_idx; int num_hwfns; int rdma_type; int user_dpm_enabled; struct qed_dev* cdev; struct net_device* ndev; struct pci_dev* pdev; } ;
struct TYPE_5__ {int num_hwfns; } ;
struct qed_dev_rdma_info {TYPE_1__ common; int rdma_type; int user_dpm_enabled; } ;
struct qed_dev {int dummy; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_7__ {int (* fill_dev_info ) (struct qed_dev*,struct qed_dev_rdma_info*) ;int (* iwarp_set_engine_affin ) (struct qed_dev*,int) ;int (* rdma_get_min_cnq_msix ) (struct qed_dev*) ;int (* rdma_get_rdma_ctx ) (struct qed_dev*) ;TYPE_2__* common; } ;
struct TYPE_6__ {int (* get_affin_hwfn_idx ) (struct qed_dev*) ;} ;


 int FUNC_0 (struct qedr_dev*,int ,char*) ;
 int FUNC_1 (struct qedr_dev*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct qedr_dev*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct qedr_dev*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct qedr_dev* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int FUNC_6 (char*) ;
 TYPE_3__* FUNC_7 () ;
 TYPE_3__* VAR_7 ;
 int FUNC_8 (struct qedr_dev*) ;
 int VAR_8 ;
 int FUNC_9 (struct qedr_dev*) ;
 int FUNC_10 (struct qedr_dev*,int ,int ) ;
 int FUNC_11 (struct qedr_dev*) ;
 int FUNC_12 (struct qedr_dev*,struct pci_dev*) ;
 int FUNC_13 (struct qedr_dev*) ;
 int FUNC_14 (struct qedr_dev*) ;
 int FUNC_15 (struct qedr_dev*) ;
 int FUNC_16 (struct qedr_dev*) ;
 int FUNC_17 (struct qed_dev*,struct qed_dev_rdma_info*) ;
 int FUNC_18 (struct qed_dev*,int) ;
 int FUNC_19 (struct qed_dev*) ;
 int FUNC_20 (struct qed_dev*) ;
 int FUNC_21 (struct qed_dev*) ;
 int FUNC_22 (int ,int *) ;

__attribute__((used)) static struct qedr_dev *FUNC_23(struct qed_dev *VAR_9, struct pci_dev *VAR_10,
     struct net_device *VAR_11)
{
 struct qed_dev_rdma_info VAR_12;
 struct qedr_dev *VAR_13;
 int VAR_14 = 0;

 VAR_13 = FUNC_4(VAR_8, VAR_6);
 if (!VAR_13) {
  FUNC_6("Unable to allocate ib device\n");
  return ((void*)0);
 }

 FUNC_0(VAR_13, VAR_3, "qedr add device called\n");

 VAR_13->pdev = VAR_10;
 VAR_13->ndev = VAR_11;
 VAR_13->cdev = VAR_9;

 VAR_7 = FUNC_7();
 if (!VAR_7) {
  FUNC_1(VAR_13, "Failed to get qed roce operations\n");
  goto init_err;
 }

 VAR_13->ops = VAR_7;
 VAR_14 = VAR_7->fill_dev_info(VAR_9, &VAR_12);
 if (VAR_14)
  goto init_err;

 VAR_13->user_dpm_enabled = VAR_12.user_dpm_enabled;
 VAR_13->rdma_type = VAR_12.rdma_type;
 VAR_13->num_hwfns = VAR_12.common.num_hwfns;

 if (FUNC_2(VAR_13) && FUNC_3(VAR_13)) {
  VAR_14 = VAR_13->ops->iwarp_set_engine_affin(VAR_9, 0);
  if (VAR_14) {
   FUNC_1(VAR_13, "iWARP is disabled over a 100g device Enabling it may impact L2 performance. To enable it run devlink dev param set <dev> name iwarp_cmt value true cmode runtime\n");
   goto init_err;
  }
 }
 VAR_13->affin_hwfn_idx = VAR_13->ops->common->get_affin_hwfn_idx(VAR_9);

 VAR_13->rdma_ctx = VAR_13->ops->rdma_get_rdma_ctx(VAR_9);

 VAR_13->num_cnq = VAR_13->ops->rdma_get_min_cnq_msix(VAR_9);
 if (!VAR_13->num_cnq) {
  FUNC_1(VAR_13, "Failed. At least one CNQ is required.\n");
  VAR_14 = -VAR_0;
  goto init_err;
 }

 VAR_13->wq_multiplier = VAR_5;

 FUNC_12(VAR_13, VAR_10);

 VAR_14 = FUNC_8(VAR_13);
 if (VAR_14)
  goto init_err;

 VAR_14 = FUNC_11(VAR_13);
 if (VAR_14)
  goto alloc_err;

 VAR_14 = FUNC_14(VAR_13);
 if (VAR_14)
  goto irq_err;

 VAR_14 = FUNC_13(VAR_13);
 if (VAR_14) {
  FUNC_1(VAR_13, "Unable to allocate register device\n");
  goto reg_err;
 }

 if (!FUNC_22(VAR_2, &VAR_13->enet_state))
  FUNC_10(VAR_13, VAR_4, VAR_1);

 FUNC_0(VAR_13, VAR_3, "qedr driver loaded successfully\n");
 return VAR_13;

reg_err:
 FUNC_16(VAR_13);
irq_err:
 FUNC_15(VAR_13);
alloc_err:
 FUNC_9(VAR_13);
init_err:
 FUNC_5(&VAR_13->ibdev);
 FUNC_1(VAR_13, "qedr driver load failed rc=%d\n", VAR_14);

 return ((void*)0);
}
