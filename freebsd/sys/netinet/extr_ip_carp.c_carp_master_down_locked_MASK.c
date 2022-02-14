
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct carp_softc {int sc_state; TYPE_1__* sc_carpdev; int sc_vhid; } ;
struct TYPE_2__ {int if_xname; } ;



 int FUNC_0 (struct carp_softc*) ;


 int FUNC_1 (struct carp_softc*) ;
 int FUNC_2 (struct carp_softc*) ;
 int FUNC_3 (struct carp_softc*) ;
 int FUNC_4 (struct carp_softc*) ;
 int FUNC_5 (struct carp_softc*,int,char const*) ;
 int FUNC_6 (struct carp_softc*,int ) ;
 int FUNC_7 (char*,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_8(struct carp_softc *VAR_0, const char *VAR_1)
{

 FUNC_0(VAR_0);

 switch (VAR_0->sc_state) {
 case 130:
  FUNC_5(VAR_0, 128, VAR_1);
  FUNC_2(VAR_0);






  FUNC_6(VAR_0, 0);
  FUNC_1(VAR_0);
  break;
 case 129:
 case 128:






  break;
 }
}
