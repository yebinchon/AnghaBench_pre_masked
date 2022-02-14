
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct openpic_softc {int * sc_saved_vectors; int sc_memr; TYPE_1__* sc_saved_timers; int * sc_saved_prios; int * sc_saved_ipis; int sc_saved_config; } ;
typedef int device_t ;
struct TYPE_2__ {int tdst; int tvec; int tbase; int tcnt; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_3 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 struct openpic_softc* FUNC_9 (int ) ;

int
FUNC_10(device_t VAR_4)
{
     struct openpic_softc *VAR_5;
     int VAR_6;

     VAR_5 = FUNC_9(VAR_4);

 VAR_5->sc_saved_config = FUNC_7(VAR_5->sc_memr, VAR_0);
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  FUNC_8(VAR_5->sc_memr, FUNC_0(VAR_6), VAR_5->sc_saved_ipis[VAR_6]);
 }

 for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
  FUNC_8(VAR_5->sc_memr, FUNC_1(VAR_6), VAR_5->sc_saved_prios[VAR_6]);
 }

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  FUNC_8(VAR_5->sc_memr, FUNC_4(VAR_6), VAR_5->sc_saved_timers[VAR_6].tcnt);
  FUNC_8(VAR_5->sc_memr, FUNC_3(VAR_6), VAR_5->sc_saved_timers[VAR_6].tbase);
  FUNC_8(VAR_5->sc_memr, FUNC_6(VAR_6), VAR_5->sc_saved_timers[VAR_6].tvec);
  FUNC_8(VAR_5->sc_memr, FUNC_5(VAR_6), VAR_5->sc_saved_timers[VAR_6].tdst);
 }

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  FUNC_8(VAR_5->sc_memr, FUNC_2(VAR_6), VAR_5->sc_saved_vectors[VAR_6]);

 return (0);
}
