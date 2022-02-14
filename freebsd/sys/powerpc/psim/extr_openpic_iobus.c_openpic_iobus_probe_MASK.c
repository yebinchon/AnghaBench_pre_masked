
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct openpic_softc {int sc_psim; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct openpic_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 char* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 struct openpic_softc *VAR_3;
 char *VAR_4;

 VAR_4 = FUNC_2(VAR_2);
 if (FUNC_3(VAR_4, "interrupt-controller") != 0)
  return (VAR_0);





 FUNC_1(VAR_2, VAR_1);

 VAR_3 = FUNC_0(VAR_2);
 VAR_3->sc_psim = 1;

 return (0);
}
