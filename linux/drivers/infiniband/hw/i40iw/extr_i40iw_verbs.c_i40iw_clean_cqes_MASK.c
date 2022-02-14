
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int qp_uk; } ;
struct i40iw_qp {TYPE_3__ sc_qp; } ;
struct TYPE_5__ {int (* iw_cq_clean ) (int *,struct i40iw_cq_uk*) ;} ;
struct i40iw_cq_uk {TYPE_2__ ops; } ;
struct TYPE_4__ {struct i40iw_cq_uk cq_uk; } ;
struct i40iw_cq {TYPE_1__ sc_cq; } ;


 int FUNC_0 (int *,struct i40iw_cq_uk*) ;

__attribute__((used)) static void FUNC_1(struct i40iw_qp *VAR_0, struct i40iw_cq *VAR_1)
{
 struct i40iw_cq_uk *VAR_2 = &VAR_1->sc_cq.cq_uk;

 VAR_2->ops.iw_cq_clean(&VAR_0->sc_qp.qp_uk, VAR_2);
}
