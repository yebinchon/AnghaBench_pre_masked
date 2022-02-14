
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
struct pmu_softc {int dummy; } ;


 int FUNC_0 (struct pmu_softc*) ;
 int FUNC_1 (struct pmu_softc*) ;
 int FUNC_2 (struct pmu_softc*) ;
 scalar_t__ FUNC_3 (struct pmu_softc*) ;
 void* FUNC_4 (struct pmu_softc*,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_5(struct pmu_softc *VAR_1, uint8_t *VAR_2)
{
 volatile uint8_t VAR_3;
 FUNC_2(VAR_1);
 VAR_3 = FUNC_4(VAR_1, VAR_0);
 FUNC_0(VAR_1);

 do {} while (FUNC_3(VAR_1) == 0);
 FUNC_1(VAR_1);
 do {} while (FUNC_3(VAR_1));
 *VAR_2 = FUNC_4(VAR_1, VAR_0);
 return 0;
}
