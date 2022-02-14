
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pmu_softc {int sc_autopoll; int lid_closed; int adb_bus; int sc_mutex; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int,int,unsigned int,int*) ;
 int FUNC_1 (char*,char*,char*,int *) ;
 struct pmu_softc* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned int FUNC_5 (struct pmu_softc*,int ,int,int*,int,int*) ;
 int FUNC_6 (struct pmu_softc*,int ,int) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_7(void *VAR_9)
{
 device_t VAR_10;
 struct pmu_softc *VAR_11;

 unsigned int VAR_12;
 uint8_t VAR_13[16];
 uint8_t VAR_14[16];

        VAR_10 = (device_t)VAR_9;
 VAR_11 = FUNC_2(VAR_10);

 FUNC_3(&VAR_11->sc_mutex);

 FUNC_6(VAR_11, VAR_8, 0x90);
 VAR_12 = FUNC_5(VAR_11, VAR_4, 0, ((void*)0), 16, VAR_13);

 FUNC_4(&VAR_11->sc_mutex);

 if ((VAR_12 < 1) || (VAR_13[1] == 0)) {
  return;
 }

 if (VAR_13[1] & VAR_5) {






  FUNC_3(&VAR_11->sc_mutex);

  if ((VAR_13[2] & 0x0f) != (VAR_0 << 2)) {
   if (VAR_11->sc_autopoll) {
    uint8_t VAR_15[] = {0, VAR_7,
        (VAR_11->sc_autopoll >> 8) & 0xff,
        VAR_11->sc_autopoll & 0xff};

    FUNC_5(VAR_11, VAR_1, 4, VAR_15, 16, VAR_14);
   }
  }

  FUNC_4(&VAR_11->sc_mutex);

  FUNC_0(VAR_11->adb_bus,VAR_13[1],VAR_13[2],
   VAR_12 - 3,&VAR_13[3]);
 }
 if (VAR_13[1] & VAR_6) {

  if ((VAR_13[2] & VAR_2) && (!VAR_11->lid_closed)) {
   VAR_11->lid_closed = 1;
   FUNC_1("PMU", "lid", "close", ((void*)0));
  }
  else if (!(VAR_13[2] & VAR_2) && (VAR_11->lid_closed)) {

   VAR_11->lid_closed = 0;
   FUNC_1("PMU", "lid", "open", ((void*)0));
  }
  if (VAR_13[2] & VAR_3)
   FUNC_1("PMU", "Button", "pressed", ((void*)0));
 }
}
