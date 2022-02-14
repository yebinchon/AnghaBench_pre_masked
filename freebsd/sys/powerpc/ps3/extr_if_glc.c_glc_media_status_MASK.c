
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ifnet {struct glc_softc* if_softc; } ;
struct ifmediareq {int ifm_active; int ifm_status; } ;
struct glc_softc {int sc_dev; int sc_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int*,int*) ;

__attribute__((used)) static void
FUNC_1(struct ifnet *VAR_15, struct ifmediareq *VAR_16)
{
 struct glc_softc *VAR_17 = VAR_15->if_softc;
 uint64_t VAR_18, VAR_19;

 VAR_16->ifm_status = VAR_11;
 VAR_16->ifm_active = VAR_12;

 FUNC_0(VAR_17->sc_bus, VAR_17->sc_dev, VAR_1,
     VAR_6, 0, 0, &VAR_18, &VAR_19);

 if (VAR_18 & VAR_2)
  VAR_16->ifm_status |= VAR_10;

 if (VAR_18 & VAR_3)
  VAR_16->ifm_active |= VAR_9;
 else if (VAR_18 & VAR_4)
  VAR_16->ifm_active |= VAR_8;
 else if (VAR_18 & VAR_5)
  VAR_16->ifm_active |= VAR_7;

 if (VAR_18 & VAR_0)
  VAR_16->ifm_active |= VAR_13;
 else
  VAR_16->ifm_active |= VAR_14;
}
