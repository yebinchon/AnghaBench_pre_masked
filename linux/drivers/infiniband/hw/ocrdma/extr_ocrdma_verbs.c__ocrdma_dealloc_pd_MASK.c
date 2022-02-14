
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocrdma_pd {int dpp_enabled; int id; } ;
struct ocrdma_dev {TYPE_1__* pd_mgr; } ;
struct TYPE_2__ {scalar_t__ pd_prealloc_valid; } ;


 int FUNC_0 (struct ocrdma_dev*,struct ocrdma_pd*) ;
 int FUNC_1 (struct ocrdma_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ocrdma_dev *VAR_0,
         struct ocrdma_pd *VAR_1)
{
 if (VAR_0->pd_mgr->pd_prealloc_valid)
  FUNC_1(VAR_0, VAR_1->id, VAR_1->dpp_enabled);
 else
  FUNC_0(VAR_0, VAR_1);
}
