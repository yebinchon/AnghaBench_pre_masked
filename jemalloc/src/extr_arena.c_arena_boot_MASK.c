
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int lg_base; unsigned int ndelta; unsigned int lg_delta; } ;
typedef TYPE_1__ sc_t ;
struct TYPE_5__ {TYPE_1__* sc; } ;
typedef TYPE_2__ sc_data_t ;


 unsigned int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_3(sc_data_t *VAR_4) {
 FUNC_0(VAR_2);
 FUNC_1(VAR_3);
 for (unsigned VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  sc_t *VAR_6 = &VAR_4->sc[VAR_5];
  FUNC_2(&VAR_1[VAR_5],
      (1U << VAR_6->lg_base) + (VAR_6->ndelta << VAR_6->lg_delta));
 }
}
