
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llan_softc {int unit; int io_lock; struct ifnet* ifp; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ifnet*,int ,struct llan_softc*) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct llan_softc *VAR_4)
{
 struct ifnet *VAR_5 = VAR_4->ifp;

 FUNC_1(&VAR_4->io_lock, VAR_2);

 FUNC_2(VAR_0, VAR_4->unit, VAR_1, 0);

 FUNC_0(VAR_5, VAR_3, VAR_4);

 return (0);
}
