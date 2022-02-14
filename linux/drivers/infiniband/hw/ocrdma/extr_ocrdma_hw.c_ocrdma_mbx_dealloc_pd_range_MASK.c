
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocrdma_mqe {int dummy; } ;
struct ocrdma_dev {TYPE_1__* pd_mgr; } ;
struct ocrdma_dealloc_pd_range {scalar_t__ pd_count; int start_pd_id; } ;
struct TYPE_2__ {scalar_t__ max_dpp_pd; int pd_dpp_start; scalar_t__ max_normal_pd; int pd_norm_start; } ;


 int VAR_0 ;
 int FUNC_0 (struct ocrdma_dealloc_pd_range*) ;
 struct ocrdma_dealloc_pd_range* FUNC_1 (int ,int) ;
 int FUNC_2 (struct ocrdma_dev*,struct ocrdma_mqe*) ;

__attribute__((used)) static void FUNC_3(struct ocrdma_dev *VAR_1)
{
 struct ocrdma_dealloc_pd_range *VAR_2;


 VAR_2 = FUNC_1(VAR_0, sizeof(*VAR_2));
 if (!VAR_2)
  goto mbx_err;

 if (VAR_1->pd_mgr->max_normal_pd) {
  VAR_2->start_pd_id = VAR_1->pd_mgr->pd_norm_start;
  VAR_2->pd_count = VAR_1->pd_mgr->max_normal_pd;
  FUNC_2(VAR_1, (struct ocrdma_mqe *)VAR_2);
 }

 if (VAR_1->pd_mgr->max_dpp_pd) {
  FUNC_0(VAR_2);

  VAR_2 = FUNC_1(VAR_0,
       sizeof(*VAR_2));
  if (!VAR_2)
   goto mbx_err;

  VAR_2->start_pd_id = VAR_1->pd_mgr->pd_dpp_start;
  VAR_2->pd_count = VAR_1->pd_mgr->max_dpp_pd;
  FUNC_2(VAR_1, (struct ocrdma_mqe *)VAR_2);
 }
mbx_err:
 FUNC_0(VAR_2);
}
