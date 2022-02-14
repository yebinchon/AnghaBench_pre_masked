
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct schppm_softc {int sc_res; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (struct schppm_softc*,int ,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct schppm_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_6)
{
 struct schppm_softc *VAR_7;

 VAR_7 = FUNC_3(VAR_6);
 if (FUNC_1(VAR_6, VAR_5, VAR_7->sc_res)) {
  FUNC_4(VAR_6, "failed to allocate resources\n");
  FUNC_2(VAR_6, VAR_5, VAR_7->sc_res);
  return (VAR_0);
 }

 if (VAR_4) {
  FUNC_4(VAR_6, "running at ");
  switch (FUNC_0(VAR_7, VAR_1, VAR_2) &
      VAR_3) {
  case 130:
   FUNC_5("full");
   break;
  case 129:
   FUNC_5("half");
   break;
  case 128:
   FUNC_5("1/32");
   break;
  default:
   FUNC_5("unknown");
   break;
  }
  FUNC_5(" speed\n");
 }

 return (0);
}
