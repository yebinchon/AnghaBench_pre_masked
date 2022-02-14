
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iterator {int pos; int (* jump_to ) (struct iterator*,int ) ;} ;
typedef struct iterator* iterator_t ;


 int FUNC_0 (struct iterator*,int ) ;
 struct iterator* FUNC_1 (int) ;

iterator_t FUNC_2 (void) {
  struct iterator *VAR_0 = FUNC_1 (sizeof (struct iterator));
  VAR_0->jump_to = FUNC_0;
  VAR_0->pos = -1;
  FUNC_0 (VAR_0, 0);
  return VAR_0;
}
