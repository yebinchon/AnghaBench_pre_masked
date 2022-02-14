
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct condition_iterator {int Cond; } ;
typedef TYPE_1__* iterator_t ;
typedef int condition_t ;
struct TYPE_3__ {int pos; int jump_to; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int) ;

int FUNC_2 (iterator_t VAR_4, int VAR_5) {
  FUNC_0 (VAR_5 > VAR_4->pos);
  condition_t VAR_6 = ((struct condition_iterator *) VAR_4)->Cond;
  while (VAR_5 <= VAR_3 && (!VAR_1[VAR_5] || !FUNC_1 (VAR_1[VAR_5], VAR_6, VAR_5))) {
    ++VAR_5;
  }
  if (VAR_5 > VAR_3) {
    VAR_4->jump_to = VAR_2;
    return VAR_4->pos = VAR_0;
  }
  return VAR_4->pos = VAR_5;
}
