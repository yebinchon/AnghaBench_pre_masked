
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srpt_rdma_ch {int dummy; } ;
struct se_session {struct srpt_rdma_ch* fabric_sess_ptr; } ;


 int FUNC_0 (struct srpt_rdma_ch*) ;

__attribute__((used)) static void FUNC_1(struct se_session *VAR_0)
{
 struct srpt_rdma_ch *VAR_1 = VAR_0->fabric_sess_ptr;

 FUNC_0(VAR_1);
}
