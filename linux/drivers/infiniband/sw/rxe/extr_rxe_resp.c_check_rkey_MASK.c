
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int rkey; int resid; struct rxe_mem* mr; int va; scalar_t__ length; } ;
struct rxe_qp {int mtu; TYPE_1__ resp; int pd; } ;
struct rxe_pkt_info {int mask; } ;
struct rxe_mem {scalar_t__ state; } ;
typedef enum resp_states { ____Placeholder_resp_states } resp_states ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct rxe_mem*) ;
 int FUNC_1 (struct rxe_pkt_info*) ;
 int FUNC_2 (struct rxe_pkt_info*) ;
 int FUNC_3 (struct rxe_pkt_info*) ;
 struct rxe_mem* FUNC_4 (int ,int,int,int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_5 (struct rxe_mem*,int ,int) ;
 int FUNC_6 (struct rxe_pkt_info*) ;
 scalar_t__ FUNC_7 (struct rxe_pkt_info*) ;
 int FUNC_8 (struct rxe_pkt_info*) ;
 int FUNC_9 (struct rxe_pkt_info*) ;
 int FUNC_10 (struct rxe_mem*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static enum resp_states FUNC_12(struct rxe_qp *VAR_13,
       struct rxe_pkt_info *VAR_14)
{
 struct rxe_mem *VAR_15 = ((void*)0);
 u64 VAR_16;
 u32 VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 int VAR_20 = VAR_13->mtu;
 enum resp_states VAR_21;
 int VAR_22;

 if (VAR_14->mask & (VAR_8 | VAR_10)) {
  if (VAR_14->mask & VAR_9) {
   VAR_13->resp.va = FUNC_9(VAR_14);
   VAR_13->resp.rkey = FUNC_8(VAR_14);
   VAR_13->resp.resid = FUNC_7(VAR_14);
   VAR_13->resp.length = FUNC_7(VAR_14);
  }
  VAR_22 = (VAR_14->mask & VAR_8) ? VAR_1
           : VAR_2;
 } else if (VAR_14->mask & VAR_6) {
  VAR_13->resp.va = FUNC_2(VAR_14);
  VAR_13->resp.rkey = FUNC_1(VAR_14);
  VAR_13->resp.resid = sizeof(u64);
  VAR_22 = VAR_0;
 } else {
  return VAR_5;
 }


 if ((VAR_14->mask & (VAR_8 | VAR_11)) &&
     (VAR_14->mask & VAR_9) &&
     FUNC_7(VAR_14) == 0) {
  return VAR_5;
 }

 VAR_16 = VAR_13->resp.va;
 VAR_17 = VAR_13->resp.rkey;
 VAR_18 = VAR_13->resp.resid;
 VAR_19 = FUNC_6(VAR_14);

 VAR_15 = FUNC_4(VAR_13->pd, VAR_22, VAR_17, VAR_12);
 if (!VAR_15) {
  VAR_21 = VAR_4;
  goto err;
 }

 if (FUNC_11(VAR_15->state == VAR_7)) {
  VAR_21 = VAR_4;
  goto err;
 }

 if (FUNC_5(VAR_15, VAR_16, VAR_18)) {
  VAR_21 = VAR_4;
  goto err;
 }

 if (VAR_14->mask & VAR_10) {
  if (VAR_18 > VAR_20) {
   if (VAR_19 != VAR_20 || FUNC_3(VAR_14)) {
    VAR_21 = VAR_3;
    goto err;
   }
  } else {
   if (VAR_19 != VAR_18) {
    VAR_21 = VAR_3;
    goto err;
   }
   if ((FUNC_3(VAR_14) != (0x3 & (-VAR_18)))) {



    VAR_21 = VAR_3;
    goto err;
   }
  }
 }

 FUNC_0(VAR_13->resp.mr);

 VAR_13->resp.mr = VAR_15;
 return VAR_5;

err:
 if (VAR_15)
  FUNC_10(VAR_15);
 return VAR_21;
}
