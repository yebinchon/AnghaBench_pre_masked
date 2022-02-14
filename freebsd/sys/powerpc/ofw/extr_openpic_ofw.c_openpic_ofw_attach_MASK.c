
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xref ;
struct openpic_softc {int sc_quirks; } ;
typedef int phandle_t ;
typedef int device_t ;


 int FUNC_0 (int ,char*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct openpic_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
 struct openpic_softc *VAR_3;
 phandle_t VAR_4, VAR_5;

 VAR_5 = FUNC_2(VAR_2);
 VAR_3 = FUNC_1(VAR_2);

 if (FUNC_0(VAR_5, "phandle", &VAR_4, sizeof(VAR_4)) == -1 &&
     FUNC_0(VAR_5, "ibm,phandle", &VAR_4, sizeof(VAR_4)) == -1 &&
     FUNC_0(VAR_5, "linux,phandle", &VAR_4, sizeof(VAR_4)) == -1)
  VAR_4 = VAR_5;

 if (FUNC_3(VAR_2, "fsl,mpic")) {
  VAR_3->sc_quirks = VAR_1;
  VAR_3->sc_quirks |= VAR_0;
 }

 return (FUNC_4(VAR_2, VAR_4));
}
