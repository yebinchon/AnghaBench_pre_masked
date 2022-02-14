
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lg_base; int ndelta; int lg_delta; } ;
typedef TYPE_1__ sc_t ;
struct TYPE_5__ {TYPE_1__* sc; } ;
typedef TYPE_2__ sc_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int) ;
 unsigned int* VAR_3 ;

__attribute__((used)) static void
FUNC_1(const sc_data_t *VAR_4) {
 size_t VAR_5 = (VAR_1 >> VAR_0) + 1;
 size_t VAR_6 = 0;
 for (unsigned VAR_7 = 0; VAR_7 < VAR_2 && VAR_6 < VAR_5;
     VAR_7++) {
  const sc_t *VAR_8 = &VAR_4->sc[VAR_7];
  size_t VAR_9 = (FUNC_0(1) << VAR_8->lg_base)
      + (FUNC_0(VAR_8->ndelta) << VAR_8->lg_delta);
  size_t VAR_10 = ((VAR_9 + (FUNC_0(1) << VAR_0) - 1)
       >> VAR_0);
  for (; VAR_6 <= VAR_10 && VAR_6 < VAR_5; VAR_6++) {
   VAR_3[VAR_6] = VAR_7;
  }
 }
}
