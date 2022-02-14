
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_counter_mode {scalar_t__ mode; int mask; } ;
typedef enum rdma_nl_counter_mode { ____Placeholder_rdma_nl_counter_mode } rdma_nl_counter_mode ;
typedef enum rdma_nl_counter_mask { ____Placeholder_rdma_nl_counter_mask } rdma_nl_counter_mask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_0(struct rdma_counter_mode *VAR_4,
         enum rdma_nl_counter_mode VAR_5,
         enum rdma_nl_counter_mask VAR_6)
{
 if ((VAR_5 == VAR_2) &&
     ((VAR_6 & (~VAR_0)) ||
      (VAR_4->mode != VAR_3)))
  return -VAR_1;

 VAR_4->mode = VAR_5;
 VAR_4->mask = VAR_6;
 return 0;
}
