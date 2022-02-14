
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbus_softc {int sc_nrange; TYPE_1__* sc_rd; } ;
struct resource {int dummy; } ;
struct bus_space_tag {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ rd_bushandle; int rd_rman; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ,int ,int,int,struct resource*) ;
 struct sbus_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct resource*) ;
 scalar_t__ FUNC_3 (struct resource*) ;
 int FUNC_4 (struct resource*,int *) ;
 int FUNC_5 (struct resource*,scalar_t__) ;
 int FUNC_6 (struct resource*,struct bus_space_tag*) ;
 struct bus_space_tag* FUNC_7 (struct resource*,int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_3, device_t VAR_4, int VAR_5, int VAR_6,
    struct resource *VAR_7)
{
 struct sbus_softc *VAR_8;
 struct bus_space_tag *VAR_9;
 int VAR_10;

 switch (VAR_5) {
 case 129:
  return (FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_7));
 case 128:
  VAR_8 = FUNC_1(VAR_3);
  for (VAR_10 = 0; VAR_10 < VAR_8->sc_nrange; VAR_10++) {
   if (FUNC_4(VAR_7,
       &VAR_8->sc_rd[VAR_10].rd_rman) != 0) {
    VAR_9 = FUNC_7(VAR_7, VAR_2);
    if (VAR_9 == ((void*)0))
     return (VAR_1);
    FUNC_6(VAR_7, VAR_9);
    FUNC_5(VAR_7,
        VAR_8->sc_rd[VAR_10].rd_bushandle +
        FUNC_3(VAR_7));
    return (FUNC_2(VAR_7));
   }
  }

 default:
  return (VAR_0);
 }
}
