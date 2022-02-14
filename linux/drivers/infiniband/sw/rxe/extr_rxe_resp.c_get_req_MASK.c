
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; scalar_t__ res; } ;
struct rxe_qp {TYPE_1__ resp; int req_pkts; } ;
struct rxe_pkt_info {int dummy; } ;
typedef enum resp_states { ____Placeholder_resp_states } resp_states ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct rxe_pkt_info* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct rxe_qp*) ;
 struct sk_buff* FUNC_3 (int *) ;
 struct sk_buff* FUNC_4 (int *) ;

__attribute__((used)) static inline enum resp_states FUNC_5(struct rxe_qp *VAR_5,
           struct rxe_pkt_info **VAR_6)
{
 struct sk_buff *VAR_7;

 if (VAR_5->resp.state == VAR_0) {
  while ((VAR_7 = FUNC_3(&VAR_5->req_pkts))) {
   FUNC_2(VAR_5);
   FUNC_1(VAR_7);
  }


  return VAR_2;
 }

 VAR_7 = FUNC_4(&VAR_5->req_pkts);
 if (!VAR_7)
  return VAR_3;

 *VAR_6 = FUNC_0(VAR_7);

 return (VAR_5->resp.res) ? VAR_4 : VAR_1;
}
