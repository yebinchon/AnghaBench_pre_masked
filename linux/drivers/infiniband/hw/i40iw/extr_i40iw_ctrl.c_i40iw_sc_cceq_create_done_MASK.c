
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40iw_sc_cqp {int dummy; } ;
struct i40iw_sc_ceq {TYPE_1__* dev; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_2__ {struct i40iw_sc_cqp* cqp; } ;


 int VAR_0 ;
 int FUNC_0 (struct i40iw_sc_cqp*,int ,int *) ;

__attribute__((used)) static enum i40iw_status_code FUNC_1(struct i40iw_sc_ceq *VAR_1)
{
 struct i40iw_sc_cqp *VAR_2;

 VAR_2 = VAR_1->dev->cqp;
 return FUNC_0(VAR_2, VAR_0, ((void*)0));
}
