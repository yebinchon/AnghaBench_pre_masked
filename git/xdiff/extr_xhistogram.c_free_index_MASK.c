
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct histindex {int rcha; int next_ptrs; int line_map; int records; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct histindex *VAR_0)
{
 FUNC_1(VAR_0->records);
 FUNC_1(VAR_0->line_map);
 FUNC_1(VAR_0->next_ptrs);
 FUNC_0(&VAR_0->rcha);
}
