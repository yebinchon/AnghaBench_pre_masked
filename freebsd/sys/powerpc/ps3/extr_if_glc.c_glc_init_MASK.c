
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct glc_softc {int sc_mtx; } ;


 int FUNC_0 (struct glc_softc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0)
{
 struct glc_softc *VAR_1 = VAR_0;

 FUNC_1(&VAR_1->sc_mtx);
 FUNC_0(VAR_1);
 FUNC_2(&VAR_1->sc_mtx);
}
