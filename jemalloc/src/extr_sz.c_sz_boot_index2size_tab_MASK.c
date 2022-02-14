
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


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int* VAR_1 ;

__attribute__((used)) static void
FUNC_1(const sc_data_t *VAR_2) {
 for (unsigned VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  const sc_t *VAR_4 = &VAR_2->sc[VAR_3];
  VAR_1[VAR_3] = (FUNC_0(1) << VAR_4->lg_base)
      + (FUNC_0(VAR_4->ndelta) << (VAR_4->lg_delta));
 }
}
