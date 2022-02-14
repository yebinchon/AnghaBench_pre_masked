
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qfq_sched {struct qfq_group* groups; } ;
struct qfq_group {int dummy; } ;


 int FUNC_0 (unsigned long) ;

__attribute__((used)) static inline struct qfq_group *FUNC_1(struct qfq_sched *VAR_0,
     unsigned long VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1) - 1;
 return &VAR_0->groups[VAR_2];
}
