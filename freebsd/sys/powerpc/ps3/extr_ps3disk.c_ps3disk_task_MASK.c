
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps3disk_softc {int sc_dmatag; int sc_deferredq; int sc_task; } ;
struct bio {int * bio_driver1; } ;
typedef int bus_dmamap_t ;


 int VAR_0 ;
 int FUNC_0 (struct ps3disk_softc*) ;
 int FUNC_1 (struct ps3disk_softc*) ;
 struct bio* FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct bio*) ;
 int FUNC_8 (int *,int ,char*,int) ;

__attribute__((used)) static void
FUNC_9(void *VAR_1)
{
 struct ps3disk_softc *VAR_2 = (struct ps3disk_softc *) VAR_1;
 struct bio *VAR_3;


 while (1) {
  FUNC_6(VAR_2->sc_task);
  FUNC_8(&VAR_2->sc_deferredq, VAR_0, "ps3disk", 10);

  FUNC_0(VAR_2);
  VAR_3 = FUNC_2(&VAR_2->sc_deferredq);
  FUNC_1(VAR_2);

  if (VAR_3 == ((void*)0))
   continue;

  if (VAR_3->bio_driver1 != ((void*)0)) {
   FUNC_4(VAR_2->sc_dmatag, (bus_dmamap_t)
       VAR_3->bio_driver1);
   FUNC_3(VAR_2->sc_dmatag, (bus_dmamap_t)
       VAR_3->bio_driver1);
  }

  FUNC_7(VAR_3);
 }

 FUNC_5(0);
}
