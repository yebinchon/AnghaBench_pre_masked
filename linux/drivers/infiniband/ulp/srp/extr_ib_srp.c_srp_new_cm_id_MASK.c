
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_target_port {scalar_t__ using_rdma_cm; } ;
struct srp_rdma_ch {struct srp_target_port* target; } ;


 int FUNC_0 (struct srp_rdma_ch*) ;
 int FUNC_1 (struct srp_rdma_ch*) ;

__attribute__((used)) static int FUNC_2(struct srp_rdma_ch *VAR_0)
{
 struct srp_target_port *VAR_1 = VAR_0->target;

 return VAR_1->using_rdma_cm ? FUNC_1(VAR_0) :
  FUNC_0(VAR_0);
}
