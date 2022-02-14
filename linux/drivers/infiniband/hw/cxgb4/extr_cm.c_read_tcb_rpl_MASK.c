
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct cpl_get_tcb_rpl {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct c4iw_ep {int rx_pdu_out_cnt; TYPE_1__ com; int srqe_idx; int hwtid; } ;
struct c4iw_dev {int dummy; } ;
typedef int __be64 ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct cpl_get_tcb_rpl*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 struct cpl_get_tcb_rpl* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct c4iw_dev*,struct c4iw_ep*) ;
 struct c4iw_ep* FUNC_6 (struct c4iw_dev*,unsigned int) ;
 int FUNC_7 (char*,struct c4iw_ep*,int ,int ) ;
 int FUNC_8 (struct c4iw_ep*) ;
 int FUNC_9 (struct c4iw_ep*) ;
 int FUNC_10 (int *,int ,int ,int ) ;
 int FUNC_11 (int *,int ) ;
 scalar_t__ FUNC_12 (int ,int *) ;

__attribute__((used)) static int FUNC_13(struct c4iw_dev *VAR_6, struct sk_buff *VAR_7)
{
 struct cpl_get_tcb_rpl *VAR_8 = FUNC_4(VAR_7);
 __be64 *VAR_9 = (__be64 *)(VAR_8 + 1);
 unsigned int VAR_10 = FUNC_0(VAR_8);
 struct c4iw_ep *VAR_11;
 u64 VAR_12;
 u32 VAR_13;

 VAR_11 = FUNC_6(VAR_6, VAR_10);
 if (!VAR_11)
  return 0;
 VAR_12 = FUNC_11(VAR_9, VAR_4);
 VAR_13 = (VAR_12 & FUNC_1(1)) >> VAR_5;

 FUNC_3(&VAR_11->com);
 FUNC_3(&VAR_11->com);


 if (VAR_13) {
  if (++VAR_11->rx_pdu_out_cnt >= 2) {
   FUNC_2(1, "tcb re-read() reached the guard limit, finishing the cleanup\n");
   goto cleanup;
  }
  FUNC_8(VAR_11);
  return 0;
 }

 VAR_11->srqe_idx = FUNC_10(VAR_9, VAR_3, VAR_3,
   VAR_2);
cleanup:
 FUNC_7("ep %p tid %u %016x\n", VAR_11, VAR_11->hwtid, VAR_11->srqe_idx);

 if (FUNC_12(VAR_1, &VAR_11->com.flags))
  FUNC_5(VAR_6, VAR_11);
 else if (FUNC_12(VAR_0, &VAR_11->com.flags))
  FUNC_9(VAR_11);
 else
  FUNC_2(1, "unexpected state!");

 return 0;
}
