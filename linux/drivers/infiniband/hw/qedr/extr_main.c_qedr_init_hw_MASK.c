
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct qedr_dev {int num_cnq; int dpi; int db_size; int db_phys_addr; int db_addr; int rdma_ctx; TYPE_3__* ops; int cdev; TYPE_2__* ndev; int iwarp_max_mtu; TYPE_1__* cnq_array; } ;
struct qed_rdma_start_in_params {int desired_cnq; int * mac_addr; int max_mtu; int cq_mode; struct qed_rdma_events* events; struct qed_rdma_cnq_params* cnq_pbl_list; } ;
struct qed_rdma_events {struct qedr_dev* context; int unaffiliated_event; int affiliated_event; } ;
struct qed_rdma_cnq_params {scalar_t__ pbl_ptr; int num_pbl_pages; } ;
struct qed_rdma_add_user_out_params {int dpi; int dpi_size; int dpi_phys_addr; int dpi_addr; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_6__ {int (* rdma_init ) (int ,struct qed_rdma_start_in_params*) ;int (* rdma_add_user ) (int ,struct qed_rdma_add_user_out_params*) ;} ;
struct TYPE_5__ {int dev_addr; int mtu; } ;
struct TYPE_4__ {int pbl; } ;


 int FUNC_0 (struct qedr_dev*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct qed_rdma_start_in_params*) ;
 struct qed_rdma_start_in_params* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_3 ;
 int FUNC_6 (struct qedr_dev*) ;
 int VAR_4 ;
 int FUNC_7 (int ,struct qed_rdma_start_in_params*) ;
 int FUNC_8 (int ,struct qed_rdma_add_user_out_params*) ;

__attribute__((used)) static int FUNC_9(struct qedr_dev *VAR_5)
{
 struct qed_rdma_add_user_out_params VAR_6;
 struct qed_rdma_start_in_params *VAR_7;
 struct qed_rdma_cnq_params *VAR_8;
 struct qed_rdma_events VAR_9;
 dma_addr_t VAR_10;
 u32 VAR_11;
 int VAR_12 = 0;
 int VAR_13;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1);
 if (!VAR_7) {
  VAR_12 = -VAR_0;
  goto out;
 }

 VAR_7->desired_cnq = VAR_5->num_cnq;
 for (VAR_13 = 0; VAR_13 < VAR_5->num_cnq; VAR_13++) {
  VAR_8 = &VAR_7->cnq_pbl_list[VAR_13];

  VAR_11 = FUNC_4(&VAR_5->cnq_array[VAR_13].pbl);
  VAR_8->num_pbl_pages = VAR_11;

  VAR_10 = FUNC_5(&VAR_5->cnq_array[VAR_13].pbl);
  VAR_8->pbl_ptr = (u64)VAR_10;
 }

 VAR_9.affiliated_event = VAR_3;
 VAR_9.unaffiliated_event = VAR_4;
 VAR_9.context = VAR_5;

 VAR_7->events = &VAR_9;
 VAR_7->cq_mode = VAR_2;
 VAR_7->max_mtu = VAR_5->ndev->mtu;
 VAR_5->iwarp_max_mtu = VAR_5->ndev->mtu;
 FUNC_1(&VAR_7->mac_addr[0], VAR_5->ndev->dev_addr);

 VAR_12 = VAR_5->ops->rdma_init(VAR_5->cdev, VAR_7);
 if (VAR_12)
  goto out;

 VAR_12 = VAR_5->ops->rdma_add_user(VAR_5->rdma_ctx, &VAR_6);
 if (VAR_12)
  goto out;

 VAR_5->db_addr = VAR_6.dpi_addr;
 VAR_5->db_phys_addr = VAR_6.dpi_phys_addr;
 VAR_5->db_size = VAR_6.dpi_size;
 VAR_5->dpi = VAR_6.dpi;

 VAR_12 = FUNC_6(VAR_5);
out:
 FUNC_2(VAR_7);
 if (VAR_12)
  FUNC_0(VAR_5, "Init HW Failed rc = %d\n", VAR_12);

 return VAR_12;
}
