
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uresp ;
struct ib_udata {int dummy; } ;
struct ib_ucontext {struct ib_device* device; } ;
struct ib_device {int dummy; } ;
struct i40iw_ucontext {int abi_ver; int qp_reg_mem_list_lock; int qp_reg_mem_list; int cq_reg_mem_list_lock; int cq_reg_mem_list; struct i40iw_device* iwdev; } ;
struct i40iw_device {int max_qp_wr; int max_pd; int max_qp; } ;
struct i40iw_alloc_ucontext_resp {int wq_size; int kernel_ver; int max_pds; int max_qps; } ;
struct i40iw_alloc_ucontext_req {int userspace_ver; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (struct i40iw_alloc_ucontext_req*,struct ib_udata*,int) ;
 scalar_t__ FUNC_3 (struct ib_udata*,struct i40iw_alloc_ucontext_resp*,int) ;
 int FUNC_4 (int *) ;
 struct i40iw_device* FUNC_5 (struct ib_device*) ;
 struct i40iw_ucontext* FUNC_6 (struct ib_ucontext*) ;

__attribute__((used)) static int FUNC_7(struct ib_ucontext *VAR_3,
    struct ib_udata *VAR_4)
{
 struct ib_device *VAR_5 = VAR_3->device;
 struct i40iw_device *VAR_6 = FUNC_5(VAR_5);
 struct i40iw_alloc_ucontext_req VAR_7;
 struct i40iw_alloc_ucontext_resp VAR_8 = {};
 struct i40iw_ucontext *VAR_9 = FUNC_6(VAR_3);

 if (FUNC_2(&VAR_7, VAR_4, sizeof(VAR_7)))
  return -VAR_1;

 if (VAR_7.userspace_ver < 4 || VAR_7.userspace_ver > VAR_2) {
  FUNC_1("Unsupported provider library version %u.\n", VAR_7.userspace_ver);
  return -VAR_1;
 }

 VAR_8.max_qps = VAR_6->max_qp;
 VAR_8.max_pds = VAR_6->max_pd;
 VAR_8.wq_size = VAR_6->max_qp_wr * 2;
 VAR_8.kernel_ver = VAR_7.userspace_ver;

 VAR_9->iwdev = VAR_6;
 VAR_9->abi_ver = VAR_7.userspace_ver;

 if (FUNC_3(VAR_4, &VAR_8, sizeof(VAR_8)))
  return -VAR_0;

 FUNC_0(&VAR_9->cq_reg_mem_list);
 FUNC_4(&VAR_9->cq_reg_mem_list_lock);
 FUNC_0(&VAR_9->qp_reg_mem_list);
 FUNC_4(&VAR_9->qp_reg_mem_list_lock);

 return 0;
}
