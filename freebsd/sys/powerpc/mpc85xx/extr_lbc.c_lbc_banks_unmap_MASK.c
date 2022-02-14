
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbc_softc {TYPE_1__* sc_range; } ;
struct TYPE_2__ {scalar_t__ size; int addr; int kva; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct lbc_softc *VAR_2)
{
 int VAR_3;

 VAR_3 = 0;
 while (VAR_3 < VAR_0) {
  if (VAR_2->sc_range[VAR_3].size == 0)
   return;

  FUNC_1(VAR_2->sc_range[VAR_3].kva, VAR_2->sc_range[VAR_3].size);
  FUNC_0(VAR_1, VAR_2->sc_range[VAR_3].addr,
      VAR_2->sc_range[VAR_3].size);
  VAR_3++;
 }
}
