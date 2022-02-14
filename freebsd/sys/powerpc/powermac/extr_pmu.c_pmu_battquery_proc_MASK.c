
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_softc {int dummy; } ;
struct pmu_battstate {int dummy; } ;
typedef int cur_batt ;


 int FUNC_0 (struct pmu_battstate*,int) ;
 int VAR_0 ;
 struct pmu_softc* FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct pmu_battstate*,struct pmu_battstate*) ;
 int FUNC_5 (struct pmu_softc*,int ,struct pmu_battstate*) ;

__attribute__((used)) static void
FUNC_6()
{
 struct pmu_softc *VAR_3;
 struct pmu_battstate VAR_4;
 struct pmu_battstate VAR_5;
 int VAR_6;

 VAR_3 = FUNC_1(VAR_2);

 FUNC_0(&VAR_5, sizeof(VAR_5));
 while (1) {
  FUNC_2(VAR_0);
  VAR_6 = FUNC_5(VAR_3, 0, &VAR_4);
  FUNC_4(&VAR_4, &VAR_5);
  VAR_5 = VAR_4;
  FUNC_3("pmu_batt", VAR_1);
 }
}
