
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ip_src; } ;
struct gre_softc {TYPE_1__ gre_oip; } ;
struct TYPE_4__ {int if_drv_flags; } ;


 TYPE_2__* FUNC_0 (struct gre_softc*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct gre_softc *VAR_1)
{

 if (FUNC_1(VAR_1->gre_oip.ip_src))
  FUNC_0(VAR_1)->if_drv_flags |= VAR_0;
 else
  FUNC_0(VAR_1)->if_drv_flags &= ~VAR_0;
}
