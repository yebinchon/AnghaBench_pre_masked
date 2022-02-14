
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {int * sc_class; } ;
typedef int device_t ;


 int VAR_0 ;
 struct uart_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 struct uart_softc *VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 VAR_3->sc_class = &VAR_1;
 FUNC_1(VAR_2, "Serengeti console");
 return (FUNC_2(VAR_2, 0, 0, 0, VAR_0, 0, 0));
}
