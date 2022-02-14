
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mambodisk_softc {int running; int disk; int sc_mtx; } ;
typedef int device_t ;


 int FUNC_0 (struct mambodisk_softc*) ;
 int FUNC_1 (struct mambodisk_softc*) ;
 int FUNC_2 (struct mambodisk_softc*) ;
 int VAR_0 ;
 struct mambodisk_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mambodisk_softc*,int *,int ,char*,int ) ;
 int FUNC_6 (struct mambodisk_softc*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1)
{
 struct mambodisk_softc *VAR_2 = FUNC_3(VAR_1);


 FUNC_0(VAR_2);
 VAR_2->running = 0;
 FUNC_6(VAR_2);
 FUNC_2(VAR_2);


 FUNC_0(VAR_2);
 while (VAR_2->running != -1)
  FUNC_5(VAR_2, &VAR_2->sc_mtx, VAR_0, "detach", 0);
 FUNC_2(VAR_2);


 FUNC_4(VAR_2->disk);


 FUNC_1(VAR_2);

 return (0);
}
