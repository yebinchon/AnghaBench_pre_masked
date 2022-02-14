
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {int * sc_class; } ;
typedef int device_t ;


 int VAR_0 ;
 struct uart_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 char* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
 struct uart_softc *VAR_3;
 char *VAR_4;

 VAR_4 = FUNC_2(VAR_2);
 if (FUNC_3(VAR_4, "com", 3) != 0)
  return (VAR_0);

 VAR_3 = FUNC_0(VAR_2);
 VAR_3->sc_class = &VAR_1;

 FUNC_1(VAR_2, "PSIM serial port");
 return (FUNC_4(VAR_2, 0, 0, 0, 0, 0, 0));
}
