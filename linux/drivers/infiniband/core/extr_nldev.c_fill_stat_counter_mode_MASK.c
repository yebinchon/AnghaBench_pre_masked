
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int qp_type; } ;
struct rdma_counter_mode {scalar_t__ mode; int mask; TYPE_1__ param; } ;
struct rdma_counter {struct rdma_counter_mode mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_5,
      struct rdma_counter *VAR_6)
{
 struct rdma_counter_mode *VAR_7 = &VAR_6->mode;

 if (FUNC_0(VAR_5, VAR_4, VAR_7->mode))
  return -VAR_0;

 if (VAR_7->mode == VAR_2)
  if ((VAR_7->mask & VAR_1) &&
      FUNC_1(VAR_5, VAR_3, VAR_7->param.qp_type))
   return -VAR_0;

 return 0;
}
