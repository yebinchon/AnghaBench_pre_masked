
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40iw_sc_cq {struct i40iw_cq* back_cq; } ;
struct i40iw_device {int dummy; } ;
struct TYPE_2__ {int cq_context; int (* comp_handler ) (TYPE_1__*,int ) ;} ;
struct i40iw_cq {TYPE_1__ ibcq; } ;


 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_1(struct i40iw_device *VAR_0,
       struct i40iw_sc_cq *VAR_1)
{
 struct i40iw_cq *VAR_2 = VAR_1->back_cq;

 if (VAR_2->ibcq.comp_handler)
  VAR_2->ibcq.comp_handler(&VAR_2->ibcq,
        VAR_2->ibcq.cq_context);
}
