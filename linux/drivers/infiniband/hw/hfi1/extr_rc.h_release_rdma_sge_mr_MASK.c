
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * mr; } ;
struct rvt_ack_entry {TYPE_1__ rdma_sge; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct rvt_ack_entry *VAR_0)
{
 if (VAR_0->rdma_sge.mr) {
  FUNC_0(VAR_0->rdma_sge.mr);
  VAR_0->rdma_sge.mr = ((void*)0);
 }
}
