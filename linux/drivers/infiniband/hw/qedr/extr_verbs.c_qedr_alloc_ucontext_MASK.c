
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uresp ;
struct qedr_ucontext {int ibucontext; int dpi_size; int dpi_phys_addr; struct qedr_dev* dev; int mm_list_lock; int mm_head; int dpi_addr; int dpi; } ;
struct TYPE_4__ {int max_srq_sge; int max_srq_wr; int max_rqe; int max_sqe; } ;
struct qedr_dev {TYPE_2__ attr; int user_dpm_enabled; int rdma_ctx; TYPE_1__* ops; } ;
struct qedr_alloc_ucontext_resp {int wids_enabled; int max_cqes; int sges_per_srq_wr; int sges_per_recv_wr; int sges_per_send_wr; int max_srq_wr; int max_recv_wr; int max_send_wr; int db_size; int db_pa; int wid_count; int dpm_enabled; } ;
struct qed_rdma_add_user_out_params {int wid_count; int dpi_size; int dpi_phys_addr; int dpi_addr; int dpi; } ;
struct ib_udata {int dummy; } ;
struct ib_ucontext {struct ib_device* device; } ;
struct ib_device {int dummy; } ;
struct TYPE_3__ {int (* rdma_add_user ) (int ,struct qed_rdma_add_user_out_params*) ;} ;


 int FUNC_0 (struct qedr_dev*,int ,char*,int *) ;
 int FUNC_1 (struct qedr_dev*,char*,int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct qedr_dev* FUNC_3 (struct ib_device*) ;
 struct qedr_ucontext* FUNC_4 (struct ib_ucontext*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct qedr_ucontext*,int ,int ) ;
 int FUNC_7 (struct ib_udata*,struct qedr_alloc_ucontext_resp*,int) ;
 int FUNC_8 (int ,struct qed_rdma_add_user_out_params*) ;

int FUNC_9(struct ib_ucontext *VAR_5, struct ib_udata *VAR_6)
{
 struct ib_device *VAR_7 = VAR_5->device;
 int VAR_8;
 struct qedr_ucontext *VAR_9 = FUNC_4(VAR_5);
 struct qedr_alloc_ucontext_resp VAR_10 = {};
 struct qedr_dev *VAR_11 = FUNC_3(VAR_7);
 struct qed_rdma_add_user_out_params VAR_12;

 if (!VAR_6)
  return -VAR_0;

 VAR_8 = VAR_11->ops->rdma_add_user(VAR_11->rdma_ctx, &VAR_12);
 if (VAR_8) {
  FUNC_1(VAR_11,
         "failed to allocate a DPI for a new RoCE application, rc=%d. To overcome this consider to increase the number of DPIs, increase the doorbell BAR size or just close unnecessary RoCE applications. In order to increase the number of DPIs consult the qedr readme\n",
         VAR_8);
  return VAR_8;
 }

 VAR_9->dpi = VAR_12.dpi;
 VAR_9->dpi_addr = VAR_12.dpi_addr;
 VAR_9->dpi_phys_addr = VAR_12.dpi_phys_addr;
 VAR_9->dpi_size = VAR_12.dpi_size;
 FUNC_2(&VAR_9->mm_head);
 FUNC_5(&VAR_9->mm_list_lock);

 VAR_10.dpm_enabled = VAR_11->user_dpm_enabled;
 VAR_10.wids_enabled = 1;
 VAR_10.wid_count = VAR_12.wid_count;
 VAR_10.db_pa = VAR_9->dpi_phys_addr;
 VAR_10.db_size = VAR_9->dpi_size;
 VAR_10.max_send_wr = VAR_11->attr.max_sqe;
 VAR_10.max_recv_wr = VAR_11->attr.max_rqe;
 VAR_10.max_srq_wr = VAR_11->attr.max_srq_wr;
 VAR_10.sges_per_send_wr = VAR_3;
 VAR_10.sges_per_recv_wr = VAR_2;
 VAR_10.sges_per_srq_wr = VAR_11->attr.max_srq_sge;
 VAR_10.max_cqes = VAR_1;

 VAR_8 = FUNC_7(VAR_6, &VAR_10, sizeof(VAR_10));
 if (VAR_8)
  return VAR_8;

 VAR_9->dev = VAR_11;

 VAR_8 = FUNC_6(VAR_9, VAR_9->dpi_phys_addr, VAR_9->dpi_size);
 if (VAR_8)
  return VAR_8;

 FUNC_0(VAR_11, VAR_4, "Allocating user context %p\n",
   &VAR_9->ibucontext);
 return 0;
}
