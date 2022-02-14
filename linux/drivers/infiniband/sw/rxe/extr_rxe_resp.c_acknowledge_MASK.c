
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ aeth_syndrome; } ;
struct rxe_qp {TYPE_1__ resp; } ;
struct rxe_pkt_info {int mask; int psn; } ;
typedef enum resp_states { ____Placeholder_resp_states } resp_states ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct rxe_pkt_info*) ;
 scalar_t__ FUNC_1 (struct rxe_qp*) ;
 int FUNC_2 (struct rxe_qp*,struct rxe_pkt_info*,scalar_t__,int ) ;
 int FUNC_3 (struct rxe_qp*,struct rxe_pkt_info*,scalar_t__) ;

__attribute__((used)) static enum resp_states FUNC_4(struct rxe_qp *VAR_4,
        struct rxe_pkt_info *VAR_5)
{
 if (FUNC_1(VAR_4) != VAR_1)
  return VAR_2;

 if (VAR_4->resp.aeth_syndrome != VAR_0)
  FUNC_2(VAR_4, VAR_5, VAR_4->resp.aeth_syndrome, VAR_5->psn);
 else if (VAR_5->mask & VAR_3)
  FUNC_3(VAR_4, VAR_5, VAR_0);
 else if (FUNC_0(VAR_5))
  FUNC_2(VAR_4, VAR_5, VAR_0, VAR_5->psn);

 return VAR_2;
}
