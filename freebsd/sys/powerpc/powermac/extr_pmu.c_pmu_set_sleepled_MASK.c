
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pmu_softc {int sc_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pmu_softc*,int ,int,int*,int ,int *) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1, int VAR_2)
{
 struct pmu_softc *VAR_3 = VAR_1;
 uint8_t VAR_4[] = {4, 0, 0};

 VAR_4[2] = VAR_2;

 FUNC_0(&VAR_3->sc_mutex);
 FUNC_2(VAR_3, VAR_0, 3, VAR_4, 0, ((void*)0));
 FUNC_1(&VAR_3->sc_mutex);
}
