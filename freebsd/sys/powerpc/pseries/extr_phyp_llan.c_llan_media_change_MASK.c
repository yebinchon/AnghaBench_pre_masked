
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ifm_media; } ;
struct llan_softc {TYPE_1__ media; } ;
struct ifnet {struct llan_softc* if_softc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct ifnet *VAR_3)
{
 struct llan_softc *VAR_4 = VAR_3->if_softc;

 if (FUNC_1(VAR_4->media.ifm_media) != VAR_2)
  return (VAR_0);

 if (FUNC_0(VAR_4->media.ifm_media) != VAR_1)
  return (VAR_0);

 return (0);
}
