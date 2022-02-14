
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct timespec {scalar_t__ tv_sec; } ;
struct pmu_softc {int sc_mutex; } ;
typedef int sec ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct pmu_softc* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pmu_softc*,int ,int,int *,int ,int *) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2, struct timespec *VAR_3)
{
 struct pmu_softc *VAR_4 = FUNC_0(VAR_2);
 uint32_t VAR_5;

 VAR_5 = VAR_3->tv_sec + VAR_0;

 FUNC_1(&VAR_4->sc_mutex);
 FUNC_3(VAR_4, VAR_1, sizeof(VAR_5), (uint8_t *)&VAR_5, 0, ((void*)0));
 FUNC_2(&VAR_4->sc_mutex);

 return (0);
}
