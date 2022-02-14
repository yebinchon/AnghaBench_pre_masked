
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct ifnet {struct glc_softc* if_softc; } ;
struct TYPE_2__ {int ifm_media; } ;
struct glc_softc {int sc_dev; int sc_bus; TYPE_1__ sc_media; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int,int ,int*,int*) ;

__attribute__((used)) static int
FUNC_4(struct ifnet *VAR_11)
{
 struct glc_softc *VAR_12 = VAR_11->if_softc;
 uint64_t VAR_13, VAR_14;
 int VAR_15;

 if (FUNC_2(VAR_12->sc_media.ifm_media) != VAR_9)
  return (VAR_0);

 switch (FUNC_1(VAR_12->sc_media.ifm_media)) {
 case 128:
  VAR_13 = VAR_2;
  break;
 case 129:
  VAR_13 = VAR_5;
  break;
 case 130:
  VAR_13 = VAR_6;
  break;
 case 131:
  VAR_13 = VAR_7 | VAR_3;
  break;
 default:
  return (VAR_0);
 }

 if (FUNC_0(VAR_12->sc_media.ifm_media) & VAR_10)
  VAR_13 |= VAR_3;

 VAR_15 = FUNC_3(VAR_12->sc_bus, VAR_12->sc_dev, VAR_4,
     VAR_8, VAR_13, 0, &VAR_14, &VAR_14);

 return (VAR_15 ? VAR_1 : 0);
}
