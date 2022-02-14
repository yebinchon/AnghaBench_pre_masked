
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct id_range_iterator {int pos; int lim; int (* jump_to ) (int ,int) ;} ;
typedef int iterator_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct id_range_iterator* FUNC_2 (int) ;

iterator_t FUNC_3 (int VAR_3, int VAR_4) {
  int VAR_5 = (VAR_3 - VAR_0 + VAR_1 - 1) / VAR_1;
  int VAR_6 = (VAR_4 - VAR_0 + VAR_1) / VAR_1 - 1;
  if (VAR_6 > VAR_2) {
    VAR_6 = VAR_2;
  }
  if (VAR_5 <= 0) {
    VAR_5 = 0;
  }
  if (VAR_5 > VAR_6) {
    return FUNC_0 ();
  }
  struct id_range_iterator *VAR_7 = FUNC_2 (sizeof (struct id_range_iterator));
  VAR_7->jump_to = FUNC_1;
  VAR_7->pos = VAR_5 - 1;
  VAR_7->lim = VAR_6;
  FUNC_1 ((iterator_t) VAR_7, VAR_5);
  return (iterator_t) VAR_7;
}
