
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef size_t u_int ;
struct pn_softc {int fsb; int vid_to_volts; int pn_type; scalar_t__ errata; } ;
struct pcpu {int pc_cpuid; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 size_t FUNC_2 (int) ;
 int VAR_2 ;
 size_t FUNC_3 (int) ;
 size_t FUNC_4 (int) ;
 size_t FUNC_5 (int) ;
 int VAR_3 ;
 int FUNC_6 (int ,int*) ;
 struct pcpu* FUNC_7 (int ) ;
 int VAR_4 ;
 struct pn_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int VAR_5 ;
 int* VAR_6 ;
 int VAR_7 ;
 int* VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_10)
{
 struct pn_softc *VAR_11;
 uint64_t VAR_12;
 uint64_t VAR_13;
 struct pcpu *VAR_14;
 u_int VAR_15, VAR_16, VAR_17;

 VAR_11 = FUNC_8(VAR_10);
 VAR_11->errata = 0;
 VAR_12 = FUNC_10(VAR_1);

 VAR_14 = FUNC_7(VAR_10);
 if (VAR_14 == ((void*)0))
  return (VAR_0);

 FUNC_6(VAR_14->pc_cpuid, &VAR_13);

 switch (VAR_4 & 0xf00) {
 case 0x600:
  VAR_15 = FUNC_2(VAR_12);
  VAR_16 = FUNC_1(VAR_12);
  VAR_17 = FUNC_0(VAR_12);
  VAR_11->pn_type = VAR_2;
  VAR_11->fsb = VAR_13 / 100000 / VAR_6[VAR_17];






  if (FUNC_2(VAR_12) != FUNC_1(VAR_12)) {
   VAR_11->vid_to_volts = VAR_7;
   FUNC_9(VAR_10, "PowerNow! K7");
  } else {
   VAR_11->vid_to_volts = VAR_5;
   FUNC_9(VAR_10, "Cool`n'Quiet K7");
  }
  break;

 case 0xf00:
  VAR_15 = FUNC_5(VAR_12);
  VAR_16 = FUNC_4(VAR_12);
  VAR_17 = FUNC_3(VAR_12);
  VAR_11->pn_type = VAR_3;
  VAR_11->vid_to_volts = VAR_9;
  VAR_11->fsb = VAR_13 / 100000 / VAR_8[VAR_17];

  if (FUNC_5(VAR_12) != FUNC_4(VAR_12))
   FUNC_9(VAR_10, "PowerNow! K8");
  else
   FUNC_9(VAR_10, "Cool`n'Quiet K8");
  break;
 default:
  return (VAR_0);
 }

 return (0);
}
