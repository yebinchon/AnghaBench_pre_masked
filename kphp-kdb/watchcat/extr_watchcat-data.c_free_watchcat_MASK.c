
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * query; } ;
typedef TYPE_1__ watchcat ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;

inline void FUNC_3 (watchcat *VAR_2) {
  int VAR_3 = FUNC_2();
  VAR_0--;
  VAR_1 -= VAR_3;

  if (VAR_2->query != ((void*)0)) {
    FUNC_1 (VAR_2->query);
    VAR_2->query = ((void*)0);
  }
  FUNC_0 (VAR_2, VAR_3);
}
