
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct creq_allocate_mrw_resp {int xid; } ;
struct cmdq_allocate_mrw {scalar_t__ mrw_flags; int mrw_handle; int access; int pd_id; } ;
struct bnxt_qplib_res {struct bnxt_qplib_rcfw* rcfw; } ;
struct bnxt_qplib_rcfw {int dummy; } ;
struct bnxt_qplib_mrw {scalar_t__ type; int flags; void* lkey; void* rkey; TYPE_1__* pd; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct cmdq_allocate_mrw,int ,int ) ;
 int FUNC_1 (struct bnxt_qplib_rcfw*,void*,void*,int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;
 void* FUNC_4 (int ) ;

int FUNC_5(struct bnxt_qplib_res *VAR_7, struct bnxt_qplib_mrw *VAR_8)
{
 struct bnxt_qplib_rcfw *VAR_9 = VAR_7->rcfw;
 struct cmdq_allocate_mrw VAR_10;
 struct creq_allocate_mrw_resp VAR_11;
 u16 VAR_12 = 0;
 unsigned long VAR_13;
 int VAR_14;

 FUNC_0(VAR_10, VAR_0, VAR_12);

 VAR_10.pd_id = FUNC_2(VAR_8->pd->id);
 VAR_10.mrw_flags = VAR_8->type;
 if ((VAR_8->type == VAR_6 &&
      VAR_8->flags & VAR_1) ||
     VAR_8->type == VAR_4 ||
     VAR_8->type == VAR_5)
  VAR_10.access = VAR_2;
 VAR_13 = (unsigned long)VAR_8;
 VAR_10.mrw_handle = FUNC_3(VAR_13);

 VAR_14 = FUNC_1(VAR_9, (void *)&VAR_10,
       (void *)&VAR_11, ((void*)0), 0);
 if (VAR_14)
  return VAR_14;

 if ((VAR_8->type == VAR_3) ||
     (VAR_8->type == VAR_4) ||
     (VAR_8->type == VAR_5))
  VAR_8->rkey = FUNC_4(VAR_11.xid);
 else
  VAR_8->lkey = FUNC_4(VAR_11.xid);
 return 0;
}
