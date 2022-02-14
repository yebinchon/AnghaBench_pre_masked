
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pmu_softc {int sc_dev; int sc_mutex; } ;
struct pmu_battstate {int state; int charge; int maxcharge; int voltage; int current; } ;
typedef int int8_t ;
typedef int int16_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pmu_softc*,int ,int,int*,int,int*) ;

__attribute__((used)) static int
FUNC_4(struct pmu_softc *VAR_1, int VAR_2, struct pmu_battstate *VAR_3)
{
 uint8_t VAR_4;
 uint8_t VAR_5[16];
 int VAR_6;

 VAR_4 = VAR_2 + 1;

 FUNC_1(&VAR_1->sc_mutex);
 VAR_6 = FUNC_3(VAR_1, VAR_0, 1, &VAR_4, 16, VAR_5);
 FUNC_2(&VAR_1->sc_mutex);

 if (VAR_6 < 3)
  return (-1);






 VAR_3->state = VAR_5[2];

 switch (VAR_5[1]) {
 case 3:
 case 4:
  VAR_3->charge = VAR_5[3];
  VAR_3->maxcharge = VAR_5[4];

  VAR_3->current = (int8_t)VAR_5[5];
  VAR_3->voltage = VAR_5[6];
  break;
 case 5:
  VAR_3->charge = (VAR_5[3] << 8) | VAR_5[4];
  VAR_3->maxcharge = (VAR_5[5] << 8) | VAR_5[6];

  VAR_3->current = (int16_t)((VAR_5[7] << 8) | VAR_5[8]);
  VAR_3->voltage = (VAR_5[9] << 8) | VAR_5[10];
  break;
 default:
  FUNC_0(VAR_1->sc_dev, "Unknown battery info format (%d)!\n",
      VAR_5[1]);
  return (-1);
 }

 return (0);
}
