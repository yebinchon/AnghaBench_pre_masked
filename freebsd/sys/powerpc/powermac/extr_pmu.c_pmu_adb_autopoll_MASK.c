
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int u_int ;
struct pmu_softc {int sc_autopoll; int sc_mutex; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pmu_softc* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pmu_softc*,int ,int,int*,int,int*) ;

__attribute__((used)) static u_int
FUNC_4(device_t VAR_3, uint16_t VAR_4)
{
 struct pmu_softc *VAR_5 = FUNC_0(VAR_3);


 uint8_t VAR_6[] = {0, VAR_2, (VAR_4 >> 8) & 0xff, VAR_4 & 0xff};
 uint8_t VAR_7[16];

 FUNC_1(&VAR_5->sc_mutex);

 if (VAR_5->sc_autopoll == VAR_4) {
  FUNC_2(&VAR_5->sc_mutex);
  return 0;
 }

 VAR_5->sc_autopoll = VAR_4 & 0xffff;

 if (VAR_4)
  FUNC_3(VAR_5, VAR_0, 4, VAR_6, 16, VAR_7);
 else
  FUNC_3(VAR_5, VAR_1, 0, ((void*)0), 16, VAR_7);

 FUNC_2(&VAR_5->sc_mutex);

 return 0;
}
