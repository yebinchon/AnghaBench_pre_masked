
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int olist_t ;
struct TYPE_2__ {int * last; int * first; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0 () {
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
    VAR_0[VAR_2].first = VAR_0[VAR_2].last = (olist_t *)&VAR_0[VAR_2];
  }
}
