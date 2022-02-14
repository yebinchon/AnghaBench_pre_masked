
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clkbrd_softc {int ** sc_res; int * sc_rid; int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_1(struct clkbrd_softc *VAR_3)
{
 int VAR_4;

 for (VAR_4 = VAR_0; VAR_4 <= VAR_1; VAR_4++)
  if (VAR_3->sc_res[VAR_4] != ((void*)0))
   FUNC_0(VAR_3->sc_dev, VAR_2,
       VAR_3->sc_rid[VAR_4], VAR_3->sc_res[VAR_4]);
}
