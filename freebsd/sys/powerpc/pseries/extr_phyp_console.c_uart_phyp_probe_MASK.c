
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_phyp_softc {int node; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (struct uart_phyp_softc*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 const char *VAR_2;
 struct uart_phyp_softc VAR_3;
 int VAR_4;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 == ((void*)0) || FUNC_3(VAR_2, "vty") != 0)
  return (VAR_0);

 VAR_3.node = FUNC_2(VAR_1);
 VAR_4 = FUNC_4(&VAR_3);
 if (VAR_4 != 0)
  return (VAR_4);

 FUNC_0(VAR_1, "POWER Hypervisor Virtual Serial Port");

 return (VAR_4);
}
