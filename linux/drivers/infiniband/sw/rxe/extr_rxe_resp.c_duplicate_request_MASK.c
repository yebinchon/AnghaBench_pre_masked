
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_5__ {int ack_psn; struct resp_res* res; } ;
struct rxe_qp {TYPE_2__ resp; } ;
struct rxe_pkt_info {int mask; scalar_t__ psn; } ;
struct TYPE_6__ {int skb; } ;
struct TYPE_4__ {scalar_t__ va_org; scalar_t__ length; scalar_t__ rkey; scalar_t__ resid; scalar_t__ va; } ;
struct resp_res {scalar_t__ cur_psn; scalar_t__ first_psn; int replay; TYPE_3__ atomic; TYPE_1__ read; int state; } ;
typedef enum resp_states { ____Placeholder_resp_states } resp_states ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct rxe_pkt_info*) ;
 struct resp_res* FUNC_1 (struct rxe_qp*,scalar_t__) ;
 int FUNC_2 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (struct rxe_pkt_info*) ;
 scalar_t__ FUNC_4 (struct rxe_pkt_info*) ;
 scalar_t__ FUNC_5 (struct rxe_pkt_info*) ;
 int FUNC_6 (struct rxe_qp*,struct rxe_pkt_info*,int ) ;
 int FUNC_7 (struct rxe_qp*,struct rxe_pkt_info*,int ,scalar_t__) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static enum resp_states FUNC_9(struct rxe_qp *VAR_9,
       struct rxe_pkt_info *VAR_10)
{
 enum resp_states VAR_11;
 u32 VAR_12 = (VAR_9->resp.ack_psn - 1) & VAR_1;

 if (VAR_10->mask & VAR_5 ||
     VAR_10->mask & VAR_6) {

  if (FUNC_0(VAR_10))
   FUNC_7(VAR_9, VAR_10, VAR_0, VAR_12);
  VAR_11 = VAR_2;
  goto out;
 } else if (VAR_10->mask & VAR_4) {
  struct resp_res *VAR_13;

  VAR_13 = FUNC_1(VAR_9, VAR_10->psn);
  if (!VAR_13) {



   VAR_11 = VAR_2;
   goto out;
  } else {



   u64 VAR_14 = FUNC_5(VAR_10);
   u32 VAR_15 = FUNC_3(VAR_10);

   if (VAR_14 < VAR_13->read.va_org ||
       VAR_15 > VAR_13->read.length ||
       (VAR_14 + VAR_15) > (VAR_13->read.va_org +
           VAR_13->read.length)) {
    VAR_11 = VAR_2;
    goto out;
   }

   if (FUNC_4(VAR_10) != VAR_13->read.rkey) {
    VAR_11 = VAR_2;
    goto out;
   }

   VAR_13->cur_psn = VAR_10->psn;
   VAR_13->state = (VAR_10->psn == VAR_13->first_psn) ?
     VAR_7 :
     VAR_8;
   VAR_13->replay = 1;


   VAR_13->read.va_org = VAR_14;
   VAR_13->read.va = VAR_14;
   VAR_13->read.resid = VAR_15;


   VAR_9->resp.res = VAR_13;
   VAR_11 = VAR_3;
   goto out;
  }
 } else {
  struct resp_res *VAR_16;


  VAR_16 = FUNC_1(VAR_9, VAR_10->psn);
  if (VAR_16) {
   FUNC_8(VAR_16->atomic.skb);

   VAR_11 = FUNC_6(VAR_9, VAR_10, VAR_16->atomic.skb);
   if (VAR_11) {
    FUNC_2("Failed resending result. This flow is not handled - skb ignored\n");
    VAR_11 = VAR_2;
    goto out;
   }
  }


  VAR_11 = VAR_2;
  goto out;
 }
out:
 return VAR_11;
}
