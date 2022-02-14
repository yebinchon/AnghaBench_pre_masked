
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_queue {int dummy; } ;
struct bfq_group {struct bfq_queue* async_idle_bfqq; struct bfq_queue*** async_bfqq; } ;
struct bfq_data {int dummy; } ;






 int VAR_0 ;

__attribute__((used)) static struct bfq_queue **FUNC_0(struct bfq_data *VAR_1,
            struct bfq_group *VAR_2,
            int VAR_3, int VAR_4)
{
 switch (VAR_3) {
 case 128:
  return &VAR_2->async_bfqq[0][VAR_4];
 case 129:
  VAR_4 = VAR_0;

 case 131:
  return &VAR_2->async_bfqq[1][VAR_4];
 case 130:
  return &VAR_2->async_idle_bfqq;
 default:
  return ((void*)0);
 }
}
