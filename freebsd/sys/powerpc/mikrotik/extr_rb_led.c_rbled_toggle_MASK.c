
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbled_softc {int sc_ledpin; int sc_gpio; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, int VAR_1)
{
 struct rbled_softc *VAR_2 = VAR_0;

 FUNC_0(VAR_2->sc_gpio, VAR_2->sc_ledpin, VAR_1);
}
