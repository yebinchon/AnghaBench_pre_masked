
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40iw_sc_dev {int hw; int cqp; TYPE_1__* cqp_ops; } ;
struct i40iw_cqp {int * cqp_requests; int * scratch_array; int sq; } ;
struct i40iw_device {struct i40iw_cqp cqp; struct i40iw_sc_dev sc_dev; } ;
struct TYPE_2__ {int (* cqp_destroy ) (int ) ;} ;


 int FUNC_0 (struct i40iw_device*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct i40iw_device *VAR_0, bool VAR_1)
{
 struct i40iw_sc_dev *VAR_2 = &VAR_0->sc_dev;
 struct i40iw_cqp *VAR_3 = &VAR_0->cqp;

 if (VAR_1)
  VAR_2->cqp_ops->cqp_destroy(VAR_2->cqp);

 FUNC_0(VAR_0);

 FUNC_1(VAR_2->hw, &VAR_3->sq);
 FUNC_2(VAR_3->scratch_array);
 VAR_0->cqp.scratch_array = ((void*)0);

 FUNC_2(VAR_3->cqp_requests);
 VAR_3->cqp_requests = ((void*)0);
}
