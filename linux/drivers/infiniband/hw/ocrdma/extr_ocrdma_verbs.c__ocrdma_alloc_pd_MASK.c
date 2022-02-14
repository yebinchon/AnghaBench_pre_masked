
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ocrdma_ucontext {int dummy; } ;
struct ocrdma_pd {int dpp_enabled; int num_dpp_qp; } ;
struct TYPE_6__ {int wqe_size; scalar_t__ max_dpp_pds; } ;
struct TYPE_4__ {int db_page_size; } ;
struct ocrdma_dev {TYPE_2__* pd_mgr; TYPE_3__ attr; TYPE_1__ nic_info; } ;
struct ib_udata {int dummy; } ;
struct TYPE_5__ {scalar_t__ pd_prealloc_valid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ocrdma_dev*) ;
 int FUNC_1 (struct ocrdma_dev*,struct ocrdma_pd*) ;
 int FUNC_2 (struct ocrdma_dev*,struct ocrdma_pd*) ;

__attribute__((used)) static int FUNC_3(struct ocrdma_dev *VAR_1, struct ocrdma_pd *VAR_2,
       struct ocrdma_ucontext *VAR_3,
       struct ib_udata *VAR_4)
{
 int VAR_5;

 if (VAR_4 && VAR_3 && VAR_1->attr.max_dpp_pds) {
  VAR_2->dpp_enabled =
   FUNC_0(VAR_1) == VAR_0;
  VAR_2->num_dpp_qp =
   VAR_2->dpp_enabled ? (VAR_1->nic_info.db_page_size /
        VAR_1->attr.wqe_size) : 0;
 }

 if (VAR_1->pd_mgr->pd_prealloc_valid)
  return FUNC_1(VAR_1, VAR_2);

retry:
 VAR_5 = FUNC_2(VAR_1, VAR_2);
 if (VAR_5) {
  if (VAR_2->dpp_enabled) {
   VAR_2->dpp_enabled = 0;
   VAR_2->num_dpp_qp = 0;
   goto retry;
  }
  return VAR_5;
 }

 return 0;
}
