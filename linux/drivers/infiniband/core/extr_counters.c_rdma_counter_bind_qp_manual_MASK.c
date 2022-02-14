
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_counter {scalar_t__ device; scalar_t__ port; } ;
struct ib_qp {scalar_t__ device; scalar_t__ port; } ;


 int VAR_0 ;
 int FUNC_0 (struct rdma_counter*,struct ib_qp*) ;

__attribute__((used)) static int FUNC_1(struct rdma_counter *VAR_1,
           struct ib_qp *VAR_2)
{
 if ((VAR_1->device != VAR_2->device) || (VAR_1->port != VAR_2->port))
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_2);
}
