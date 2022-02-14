
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llan_softc {int io_lock; } ;
struct ifnet {struct llan_softc* if_softc; } ;


 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct ifnet *VAR_0)
{
 struct llan_softc *VAR_1 = VAR_0->if_softc;

 FUNC_1(&VAR_1->io_lock);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_1->io_lock);
}
