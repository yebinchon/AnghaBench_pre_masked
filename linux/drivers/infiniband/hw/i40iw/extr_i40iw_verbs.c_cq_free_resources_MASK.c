
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cq_id; } ;
struct i40iw_sc_cq {TYPE_2__ cq_uk; } ;
struct TYPE_3__ {int hw; } ;
struct i40iw_device {int allocated_cqs; TYPE_1__ sc_dev; } ;
struct i40iw_cq {int kmem; int user_mode; struct i40iw_sc_cq sc_cq; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct i40iw_device*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct i40iw_device *VAR_0, struct i40iw_cq *VAR_1)
{
 struct i40iw_sc_cq *VAR_2 = &VAR_1->sc_cq;

 if (!VAR_1->user_mode)
  FUNC_0(VAR_0->sc_dev.hw, &VAR_1->kmem);
 FUNC_1(VAR_0, VAR_0->allocated_cqs, VAR_2->cq_uk.cq_id);
}
