
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx4_ib_ucontext {int uar; int wqn_ranges_mutex; int wqn_ranges_list; int db_page_mutex; int db_page_list; } ;
struct mlx4_ib_dev {TYPE_3__* dev; int ib_active; } ;
struct mlx4_ib_alloc_ucontext_resp_v3 {int cqe_size; int bf_regs_per_page; int bf_reg_size; int qp_tab_size; int dev_caps; } ;
struct mlx4_ib_alloc_ucontext_resp {int cqe_size; int bf_regs_per_page; int bf_reg_size; int qp_tab_size; int dev_caps; } ;
struct ib_udata {int dummy; } ;
struct ib_ucontext {struct ib_device* device; } ;
struct TYPE_6__ {scalar_t__ uverbs_abi_ver; } ;
struct ib_device {TYPE_2__ ops; } ;
typedef int resp_v3 ;
typedef int resp ;
struct TYPE_5__ {int cqe_size; int bf_regs_per_page; int bf_reg_size; int num_qps; int userspace_caps; } ;
struct TYPE_7__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct ib_udata*,struct mlx4_ib_alloc_ucontext_resp_v3*,int) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (int *) ;
 struct mlx4_ib_dev* FUNC_5 (struct ib_device*) ;
 struct mlx4_ib_ucontext* FUNC_6 (struct ib_ucontext*) ;

__attribute__((used)) static int FUNC_7(struct ib_ucontext *VAR_3,
      struct ib_udata *VAR_4)
{
 struct ib_device *VAR_5 = VAR_3->device;
 struct mlx4_ib_dev *VAR_6 = FUNC_5(VAR_5);
 struct mlx4_ib_ucontext *VAR_7 = FUNC_6(VAR_3);
 struct mlx4_ib_alloc_ucontext_resp_v3 VAR_8;
 struct mlx4_ib_alloc_ucontext_resp VAR_9;
 int VAR_10;

 if (!VAR_6->ib_active)
  return -VAR_0;

 if (VAR_5->ops.uverbs_abi_ver ==
     VAR_2) {
  VAR_8 = VAR_6->dev->caps.num_qps;
  VAR_8 = VAR_6->dev->caps.bf_reg_size;
  VAR_8 = VAR_6->dev->caps.bf_regs_per_page;
 } else {
  VAR_9.dev_caps = VAR_6->dev->caps.userspace_caps;
  VAR_9.qp_tab_size = VAR_6->dev->caps.num_qps;
  VAR_9.bf_reg_size = VAR_6->dev->caps.bf_reg_size;
  VAR_9.bf_regs_per_page = VAR_6->dev->caps.bf_regs_per_page;
  VAR_9.cqe_size = VAR_6->dev->caps.cqe_size;
 }

 VAR_10 = FUNC_2(FUNC_5(VAR_5)->dev, &VAR_7->uar);
 if (VAR_10)
  return VAR_10;

 FUNC_0(&VAR_7->db_page_list);
 FUNC_4(&VAR_7->db_page_mutex);

 FUNC_0(&VAR_7->wqn_ranges_list);
 FUNC_4(&VAR_7->wqn_ranges_mutex);

 if (VAR_5->ops.uverbs_abi_ver == VAR_2)
  VAR_10 = FUNC_1(VAR_4, &VAR_8, sizeof(VAR_8));
 else
  VAR_10 = FUNC_1(VAR_4, &VAR_9, sizeof(VAR_9));

 if (VAR_10) {
  FUNC_3(FUNC_5(VAR_5)->dev, &VAR_7->uar);
  return -VAR_1;
 }

 return VAR_10;
}
