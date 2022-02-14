
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int va; int resid; int mr; } ;
struct rxe_qp {TYPE_1__ resp; } ;
struct rxe_pkt_info {int dummy; } ;
typedef enum resp_states { ____Placeholder_resp_states } resp_states ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rxe_pkt_info*) ;
 int FUNC_1 (struct rxe_pkt_info*) ;
 int FUNC_2 (int ,int,int ,int,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static enum resp_states FUNC_3(struct rxe_qp *VAR_3,
          struct rxe_pkt_info *VAR_4)
{
 enum resp_states VAR_5 = VAR_1;
 int VAR_6;
 int VAR_7 = FUNC_1(VAR_4);

 VAR_6 = FUNC_2(VAR_3->resp.mr, VAR_3->resp.va, FUNC_0(VAR_4),
      VAR_7, VAR_2, ((void*)0));
 if (VAR_6) {
  VAR_5 = VAR_0;
  goto out;
 }

 VAR_3->resp.va += VAR_7;
 VAR_3->resp.resid -= VAR_7;

out:
 return VAR_5;
}
