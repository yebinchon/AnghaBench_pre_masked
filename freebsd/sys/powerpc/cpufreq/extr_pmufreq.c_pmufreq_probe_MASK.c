
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pmufreq_softc {int dummy; } ;
typedef int phandle_t ;
typedef int min_freq ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int *,int) ;
 int FUNC_1 (int ) ;
 struct pmufreq_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1)
{
 struct pmufreq_softc *VAR_2;
 phandle_t VAR_3;
 uint32_t VAR_4;

 if (FUNC_5("pmufreq", 0))
  return (VAR_0);

 VAR_2 = FUNC_2(VAR_1);
 VAR_3 = FUNC_4(FUNC_1(VAR_1));




 if (FUNC_0(VAR_3, "min-clock-frequency", &VAR_4, sizeof(VAR_4)) == -1)
  return (VAR_0);
 FUNC_3(VAR_1, "PMU-based frequency scaling");
 return (0);
}
