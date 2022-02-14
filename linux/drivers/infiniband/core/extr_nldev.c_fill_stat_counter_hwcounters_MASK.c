
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rdma_hw_stats {int num_counters; int * value; int * names; } ;
struct rdma_counter {struct rdma_hw_stats* stats; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_2,
     struct rdma_counter *VAR_3)
{
 struct rdma_hw_stats *VAR_4 = VAR_3->stats;
 struct nlattr *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_2, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_4->num_counters; VAR_6++)
  if (FUNC_0(VAR_2, VAR_4->names[VAR_6], VAR_4->value[VAR_6]))
   goto err;

 FUNC_2(VAR_2, VAR_5);
 return 0;

err:
 FUNC_1(VAR_2, VAR_5);
 return -VAR_0;
}
