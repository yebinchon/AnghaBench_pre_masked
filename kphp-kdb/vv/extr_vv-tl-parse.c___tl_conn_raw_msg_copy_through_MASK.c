
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int nb_iterator_t ;
struct TYPE_2__ {int In; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,void*,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,void*,int) ;
 void* FUNC_5 (int ,int) ;

__attribute__((used)) static inline void FUNC_6 (int VAR_3, int VAR_4) {
  if (VAR_4) {
    while (VAR_3) {
      int VAR_5 = VAR_3 >= VAR_0 ? VAR_0 : VAR_3;
      void *VAR_6 = FUNC_5 (VAR_2, VAR_5);
      FUNC_0 (VAR_6);
      FUNC_0 (FUNC_4 (&VAR_1->In, VAR_6, VAR_5) == VAR_5);
      VAR_3 -= VAR_5;
    }
  } else {
    nb_iterator_t VAR_7;
    FUNC_3 (&VAR_7, &VAR_1->In);
    while (VAR_3) {
      int VAR_8 = VAR_3 >= VAR_0 ? VAR_0 : VAR_3;
      void *VAR_9 = FUNC_5 (VAR_2, VAR_8);
      FUNC_0 (VAR_9);
      FUNC_0 (FUNC_2 (&VAR_7, VAR_9, VAR_8) == VAR_8);
      VAR_3 -= VAR_8;
    }
    FUNC_1 (&VAR_7);
  }
}
