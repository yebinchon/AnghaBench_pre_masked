
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wr ;
typedef int u64 ;
typedef int u16 ;
struct rvt_qp {int ibqp; struct hfi1_qp_priv* priv; } ;
struct TYPE_4__ {int opcode; } ;
struct ib_atomic_wr {int compare_add; TYPE_2__ wr; int remote_addr; } ;
struct TYPE_3__ {int requested; int completed; int curr; int lock; int extended; } ;
struct hfi1_qp_priv {TYPE_1__ opfn; } ;
struct hfi1_opfn_type {int (* request ) (struct rvt_qp*,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct hfi1_opfn_type* VAR_4 ;
 int FUNC_1 (int *,TYPE_2__*,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ib_atomic_wr*,int ,int) ;
 int FUNC_4 (struct rvt_qp*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct rvt_qp*,int*) ;
 int FUNC_8 (struct rvt_qp*,char*,int) ;
 int FUNC_9 (struct rvt_qp*,int,int) ;
 int FUNC_10 (struct rvt_qp*) ;

__attribute__((used)) static void FUNC_11(struct rvt_qp *VAR_5)
{
 struct hfi1_qp_priv *VAR_6 = VAR_5->priv;
 struct ib_atomic_wr VAR_7;
 u16 VAR_8, VAR_9;
 struct hfi1_opfn_type *VAR_10;
 u64 VAR_11;
 unsigned long VAR_12;
 int VAR_13 = 0;

 FUNC_10(VAR_5);
 FUNC_5(&VAR_6->opfn.lock, VAR_12);





 if (!VAR_6->opfn.extended || !VAR_6->opfn.requested ||
     VAR_6->opfn.requested == VAR_6->opfn.completed || VAR_6->opfn.curr)
  goto done;

 VAR_8 = VAR_6->opfn.requested & ~VAR_6->opfn.completed;
 VAR_9 = FUNC_2(VAR_8 & ~(VAR_8 - 1)) + 1;
 if (VAR_9 >= VAR_2) {
  VAR_6->opfn.completed |= FUNC_0(VAR_9);
  goto done;
 }

 VAR_10 = &VAR_4[VAR_9];
 if (!VAR_10 || !VAR_10->request || !VAR_10->request(VAR_5, &VAR_11)) {





  VAR_6->opfn.completed |= FUNC_0(VAR_9);
  goto done;
 }

 FUNC_9(VAR_5, VAR_9, VAR_11);
 VAR_11 = (VAR_11 & ~0xf) | VAR_9;

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.wr.opcode = VAR_1;
 VAR_7.remote_addr = VAR_0;
 VAR_7.compare_add = VAR_11;

 VAR_6->opfn.curr = VAR_9;

 FUNC_6(&VAR_6->opfn.lock, VAR_12);

 VAR_13 = FUNC_1(&VAR_5->ibqp, &VAR_7.wr, ((void*)0));
 if (VAR_13)
  goto err;
 FUNC_10(VAR_5);
 return;
err:
 FUNC_8(VAR_5, "ib_ost_send failed: ret = ",
      (u64)VAR_13);
 FUNC_5(&VAR_6->opfn.lock, VAR_12);




 VAR_6->opfn.curr = VAR_3;
 FUNC_4(VAR_5);
done:
 FUNC_6(&VAR_6->opfn.lock, VAR_12);
}
