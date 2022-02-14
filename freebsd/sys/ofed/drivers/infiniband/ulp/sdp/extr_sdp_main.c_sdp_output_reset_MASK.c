
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdp_sock {int state; scalar_t__ qp_active; struct rdma_cm_id* id; } ;
struct rdma_cm_id {int dummy; } ;


 int FUNC_0 (struct sdp_sock*) ;
 int FUNC_1 (struct sdp_sock*) ;
 int FUNC_2 (struct sdp_sock*) ;
 int VAR_0 ;
 int FUNC_3 (struct rdma_cm_id*) ;

__attribute__((used)) static void
FUNC_4(struct sdp_sock *VAR_1)
{
 struct rdma_cm_id *VAR_2;

 FUNC_1(VAR_1);
 if (VAR_1->id) {
  VAR_2 = VAR_1->id;
  VAR_1->qp_active = 0;
  FUNC_2(VAR_1);
  FUNC_3(VAR_2);
  FUNC_0(VAR_1);
 }
 VAR_1->state = VAR_0;
}
