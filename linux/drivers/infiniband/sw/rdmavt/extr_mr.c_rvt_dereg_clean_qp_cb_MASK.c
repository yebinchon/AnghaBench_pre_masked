
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ pd; } ;
struct rvt_qp {TYPE_1__ ibqp; } ;
struct rvt_mregion {scalar_t__ pd; int lkey; } ;


 int FUNC_0 (struct rvt_qp*,int ) ;

__attribute__((used)) static void FUNC_1(struct rvt_qp *VAR_0, u64 VAR_1)
{
 struct rvt_mregion *VAR_2 = (struct rvt_mregion *)VAR_1;


 if (VAR_2->pd != VAR_0->ibqp.pd)
  return;
 FUNC_0(VAR_0, VAR_2->lkey);
}
