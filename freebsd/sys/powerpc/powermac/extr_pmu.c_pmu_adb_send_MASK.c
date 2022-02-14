
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
typedef int u_char ;
struct pmu_softc {int sc_mutex; } ;
typedef int device_t ;


 int VAR_0 ;
 struct pmu_softc* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct pmu_softc*,int ,int,int*,int,int*) ;

__attribute__((used)) static u_int
FUNC_5(device_t VAR_1, u_char VAR_2, int VAR_3, u_char *VAR_4,
    u_char VAR_5)
{
 struct pmu_softc *VAR_6 = FUNC_0(VAR_1);
 int VAR_7,VAR_8;
 uint8_t VAR_9[16], VAR_10[16];



 VAR_9[0] = VAR_2;

 VAR_9[1] = 0;
 VAR_9[2] = VAR_3;
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  VAR_9[VAR_7 + 3] = VAR_4[VAR_7];

 FUNC_1(&VAR_6->sc_mutex);
 VAR_8 = FUNC_4(VAR_6, VAR_0, VAR_3 + 3, VAR_9, 16, VAR_10);
 FUNC_2(&VAR_6->sc_mutex);

 if (VAR_5)
  FUNC_3(VAR_1);

 return 0;
}
