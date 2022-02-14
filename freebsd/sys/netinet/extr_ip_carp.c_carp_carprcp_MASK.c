
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct carpreq {int carpr_key; int carpr_advskew; int carpr_advbase; int carpr_vhid; int carpr_state; } ;
struct carp_softc {int sc_key; int sc_advskew; int sc_advbase; int sc_vhid; int sc_state; } ;


 int FUNC_0 (struct carp_softc*) ;
 int FUNC_1 (struct carp_softc*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(struct carpreq *VAR_0, struct carp_softc *VAR_1, int VAR_2)
{

 FUNC_0(VAR_1);
 VAR_0->carpr_state = VAR_1->sc_state;
 VAR_0->carpr_vhid = VAR_1->sc_vhid;
 VAR_0->carpr_advbase = VAR_1->sc_advbase;
 VAR_0->carpr_advskew = VAR_1->sc_advskew;
 if (VAR_2)
  FUNC_2(VAR_1->sc_key, VAR_0->carpr_key, sizeof(VAR_0->carpr_key));
 else
  FUNC_3(VAR_0->carpr_key, sizeof(VAR_0->carpr_key));
 FUNC_1(VAR_1);
}
