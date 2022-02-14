
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ atomic_orig; struct rxe_mem* mr; } ;
struct rxe_qp {TYPE_1__ resp; } ;
struct rxe_pkt_info {scalar_t__ opcode; } ;
struct rxe_mem {scalar_t__ state; } ;
typedef enum resp_states { ____Placeholder_resp_states } resp_states ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct rxe_pkt_info*) ;
 scalar_t__ FUNC_1 (struct rxe_pkt_info*) ;
 scalar_t__ FUNC_2 (struct rxe_pkt_info*) ;
 int VAR_6 ;
 scalar_t__* FUNC_3 (struct rxe_mem*,scalar_t__,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static enum resp_states FUNC_6(struct rxe_qp *VAR_7,
           struct rxe_pkt_info *VAR_8)
{
 u64 VAR_9 = FUNC_2(VAR_8);
 u64 *VAR_10;
 enum resp_states VAR_11;
 struct rxe_mem *VAR_12 = VAR_7->resp.mr;

 if (VAR_12->state != VAR_5) {
  VAR_11 = VAR_3;
  goto out;
 }

 VAR_10 = FUNC_3(VAR_12, VAR_9, sizeof(u64));


 if (!VAR_10 || (uintptr_t)VAR_10 & 7) {
  VAR_11 = VAR_2;
  goto out;
 }

 FUNC_4(&VAR_6);

 VAR_7->resp.atomic_orig = *VAR_10;

 if (VAR_8->opcode == VAR_0 ||
     VAR_8->opcode == VAR_1) {
  if (*VAR_10 == FUNC_0(VAR_8))
   *VAR_10 = FUNC_1(VAR_8);
 } else {
  *VAR_10 += FUNC_1(VAR_8);
 }

 FUNC_5(&VAR_6);

 VAR_11 = VAR_4;
out:
 return VAR_11;
}
