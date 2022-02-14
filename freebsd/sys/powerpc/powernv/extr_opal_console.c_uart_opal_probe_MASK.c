
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_opal_softc {int node; } ;
typedef int device_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct uart_opal_softc*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0)
{
 struct uart_opal_softc VAR_1;
 int VAR_2;

 VAR_1.node = FUNC_1(VAR_0);
 VAR_2 = FUNC_2(&VAR_1);
 if (VAR_2 != 0)
  return (VAR_2);

 FUNC_0(VAR_0, "OPAL Serial Port");

 return (VAR_2);
}
