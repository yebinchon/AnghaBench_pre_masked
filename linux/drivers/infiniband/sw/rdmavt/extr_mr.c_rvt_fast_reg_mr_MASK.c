
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ pd; } ;
struct rvt_qp {TYPE_1__ ibqp; } ;
struct TYPE_4__ {scalar_t__ pd; int lkey; int access_flags; int lkey_invalid; int iova; } ;
struct rvt_mr {TYPE_2__ mr; scalar_t__ umem; } ;
struct ib_mr {int lkey; int rkey; int iova; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 struct rvt_mr* FUNC_1 (struct ib_mr*) ;

int FUNC_2(struct rvt_qp *VAR_2, struct ib_mr *VAR_3, u32 VAR_4,
      int VAR_5)
{
 struct rvt_mr *VAR_6 = FUNC_1(VAR_3);

 if (VAR_2->ibqp.pd != VAR_6->mr.pd)
  return -VAR_0;


 if (!VAR_6->mr.lkey || VAR_6->umem)
  return -VAR_1;

 if ((VAR_4 & 0xFFFFFF00) != (VAR_6->mr.lkey & 0xFFFFFF00))
  return -VAR_1;

 VAR_3->lkey = VAR_4;
 VAR_3->rkey = VAR_4;
 VAR_6->mr.lkey = VAR_4;
 VAR_6->mr.access_flags = VAR_5;
 VAR_6->mr.iova = VAR_3->iova;
 FUNC_0(&VAR_6->mr.lkey_invalid, 0);

 return 0;
}
