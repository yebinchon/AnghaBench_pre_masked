
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct glc_softc {int sc_dev; int sc_bus; int sc_mtx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 struct glc_softc *VAR_2 = VAR_1;

 FUNC_2(&VAR_2->sc_mtx, VAR_0);

 FUNC_1(VAR_2->sc_bus, VAR_2->sc_dev, 0);
 FUNC_0(VAR_2->sc_bus, VAR_2->sc_dev, 0);
}
