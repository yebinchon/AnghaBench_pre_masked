
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
struct rvt_qp {struct hfi1_qp_priv* priv; } ;
struct TYPE_2__ {size_t curr; int lock; int completed; } ;
struct hfi1_qp_priv {TYPE_1__ opfn; } ;
struct hfi1_opfn_type {scalar_t__ (* reply ) (struct rvt_qp*,int) ;} ;


 int FUNC_0 (size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 struct hfi1_opfn_type* VAR_2 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (struct rvt_qp*,int) ;
 int FUNC_4 (struct rvt_qp*,size_t,int) ;
 int FUNC_5 (struct rvt_qp*) ;

void FUNC_6(struct rvt_qp *VAR_3, u64 VAR_4)
{
 struct hfi1_qp_priv *VAR_5 = VAR_3->priv;
 struct hfi1_opfn_type *VAR_6;
 u8 VAR_7;
 unsigned long VAR_8;

 FUNC_5(VAR_3);
 VAR_7 = VAR_4 & 0xf;
 FUNC_4(VAR_3, VAR_7, VAR_4);
 if (!VAR_7 || VAR_7 >= VAR_0)
  return;

 FUNC_1(&VAR_5->opfn.lock, VAR_8);




 if (!VAR_5->opfn.curr || VAR_7 != VAR_5->opfn.curr)
  goto done;

 VAR_6 = &VAR_2[VAR_7];

 if (!VAR_6 || !VAR_6->reply)
  goto clear;

 if (VAR_6->reply(VAR_3, VAR_4))
  VAR_5->opfn.completed |= FUNC_0(VAR_7);
clear:




 VAR_5->opfn.curr = VAR_1;
 FUNC_5(VAR_3);
done:
 FUNC_2(&VAR_5->opfn.lock, VAR_8);
}
