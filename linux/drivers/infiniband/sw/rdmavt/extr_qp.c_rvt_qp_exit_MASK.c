
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct rvt_dev_info {TYPE_1__* qp_dev; } ;
struct TYPE_2__ {int qpn_table; struct TYPE_2__* qp_table; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct rvt_dev_info*) ;
 int FUNC_3 (struct rvt_dev_info*,char*,scalar_t__) ;

void FUNC_4(struct rvt_dev_info *VAR_0)
{
 u32 VAR_1 = FUNC_2(VAR_0);

 if (VAR_1)
  FUNC_3(VAR_0, "QP memory leak! %u still in use\n",
      VAR_1);
 if (!VAR_0->qp_dev)
  return;

 FUNC_1(VAR_0->qp_dev->qp_table);
 FUNC_0(&VAR_0->qp_dev->qpn_table);
 FUNC_1(VAR_0->qp_dev);
}
