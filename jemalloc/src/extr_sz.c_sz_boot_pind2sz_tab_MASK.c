
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lg_base; int ndelta; int lg_delta; scalar_t__ psz; } ;
typedef TYPE_1__ sc_t ;
struct TYPE_5__ {int large_maxclass; TYPE_1__* sc; } ;
typedef TYPE_2__ sc_data_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int) ;
 int* VAR_3 ;

__attribute__((used)) static void
FUNC_1(const sc_data_t *VAR_4) {
 int VAR_5 = 0;
 for (unsigned VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  const sc_t *VAR_7 = &VAR_4->sc[VAR_6];
  if (VAR_7->psz) {
   VAR_3[VAR_5] = (FUNC_0(1) << VAR_7->lg_base)
       + (FUNC_0(VAR_7->ndelta) << VAR_7->lg_delta);
   VAR_5++;
  }
 }
 for (int VAR_8 = VAR_5; VAR_8 <= (int)VAR_1; VAR_8++) {
  VAR_3[VAR_5] = VAR_4->large_maxclass + VAR_0;
 }
}
