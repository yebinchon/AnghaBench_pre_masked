
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter {struct counter* prev_use; struct counter* next_use; } ;


 struct counter** VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void FUNC_0 (struct counter *VAR_2) {
  VAR_2->next_use = VAR_0[VAR_1]->next_use;
  VAR_0[VAR_1]->next_use = VAR_2;
  VAR_2->prev_use = VAR_0[VAR_1];
  VAR_2->next_use->prev_use = VAR_2;
}
