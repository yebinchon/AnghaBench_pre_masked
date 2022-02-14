
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* iterator_t ;
struct TYPE_4__ {int pos; int (* jump_to ) (TYPE_1__*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int VAR_4 ;

int FUNC_6 (void) {
  if (VAR_4 > 1) {
    FUNC_2 (VAR_3, "performing query via iterators\n");
  }

  FUNC_0 (6);

  iterator_t VAR_5 = FUNC_1 (VAR_1, 1);

  FUNC_0 (7);

  int VAR_6 = VAR_5->pos;
  while (VAR_6 < VAR_0) {
    FUNC_4 (VAR_6);
    VAR_6 = VAR_5->jump_to (VAR_5, VAR_6 + 1);
  }

  FUNC_0 (8);

  FUNC_3 ();

  FUNC_0 (9);

  return VAR_2;
}
