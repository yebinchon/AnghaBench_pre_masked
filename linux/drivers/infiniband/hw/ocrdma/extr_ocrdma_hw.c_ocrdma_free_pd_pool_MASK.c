
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocrdma_dev {TYPE_1__* pd_mgr; } ;
struct TYPE_2__ {struct TYPE_2__* pd_dpp_bitmap; struct TYPE_2__* pd_norm_bitmap; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct ocrdma_dev*) ;

__attribute__((used)) static void FUNC_2(struct ocrdma_dev *VAR_0)
{
 FUNC_1(VAR_0);
 FUNC_0(VAR_0->pd_mgr->pd_norm_bitmap);
 FUNC_0(VAR_0->pd_mgr->pd_dpp_bitmap);
 FUNC_0(VAR_0->pd_mgr);
}
