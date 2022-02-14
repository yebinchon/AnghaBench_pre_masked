
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ndelta; int lg_delta; int lg_base; int bin; } ;
typedef TYPE_1__ sc_t ;
struct TYPE_6__ {int nsizes; TYPE_1__* sc; int initialized; } ;
typedef TYPE_2__ sc_data_t ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,size_t,int) ;

void
FUNC_3(sc_data_t *VAR_0, size_t VAR_1, size_t VAR_2, int VAR_3) {
 FUNC_0(VAR_0->initialized);
 for (int VAR_4 = 0; VAR_4 < VAR_0->nsizes; VAR_4++) {
  sc_t *VAR_5 = &VAR_0->sc[VAR_4];
  if (!VAR_5->bin) {
   break;
  }
  size_t VAR_6 = FUNC_1(VAR_5->lg_base, VAR_5->lg_delta,
      VAR_5->ndelta);
  if (VAR_1 <= VAR_6 && VAR_6 <= VAR_2) {
   FUNC_2(VAR_5, VAR_6, VAR_3);
  }
 }
}
