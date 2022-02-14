
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_ath_alq_init_state {int sc_hal_magic; int sc_phy_rev; int sc_mac_revision; int sc_mac_version; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int,int,int) ;

__attribute__((used)) static void
FUNC_2(struct if_ath_alq_init_state *VAR_0)
{
 FUNC_1("macVersion=%d.%d, PHY=%d, Magic=%08x\n",
     FUNC_0(VAR_0->sc_mac_version),
     FUNC_0(VAR_0->sc_mac_revision),
     FUNC_0(VAR_0->sc_phy_rev),
     FUNC_0(VAR_0->sc_hal_magic));
}
