
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sort_level {int dummy; } ;
struct level_stack {struct sort_level* sl; } ;


 int FUNC_0 (struct level_stack*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct level_stack* FUNC_4 (int) ;

__attribute__((used)) static inline void
FUNC_5(struct sort_level *VAR_3)
{
 struct level_stack *VAR_4;

 VAR_4 = FUNC_4(sizeof(struct level_stack));
 VAR_4->sl = VAR_3;
  FUNC_0(VAR_4);
}
