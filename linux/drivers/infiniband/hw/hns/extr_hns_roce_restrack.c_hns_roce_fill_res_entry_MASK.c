
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rdma_restrack_entry {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct rdma_restrack_entry*) ;

int FUNC_1(struct sk_buff *VAR_1,
       struct rdma_restrack_entry *VAR_2)
{
 if (VAR_2->type == VAR_0)
  return FUNC_0(VAR_1, VAR_2);

 return 0;
}
