
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tid_group {int list; } ;
struct exp_tid_set {int count; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct tid_group *VAR_0,
        struct exp_tid_set *VAR_1)
{
 FUNC_0(&VAR_0->list);
 VAR_1->count--;
}
