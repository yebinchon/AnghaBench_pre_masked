
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct ebus_softc {int sc_flags; int sc_nrange; struct ebus_rinfo* sc_rinfo; } ;
struct ebus_rinfo {struct resource* eri_res; int eri_rman; } ;
typedef int device_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int,struct resource*) ;
 int FUNC_1 (int ,int ,scalar_t__,int ,int *) ;
 struct ebus_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct resource*) ;
 int FUNC_4 (struct resource*) ;
 int FUNC_5 (struct resource*) ;
 int FUNC_6 (struct resource*) ;
 scalar_t__ FUNC_7 (struct resource*) ;
 scalar_t__ FUNC_8 (struct resource*,int *) ;
 int FUNC_9 (struct resource*,int ) ;
 int FUNC_10 (struct resource*,int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_3, device_t VAR_4, int VAR_5, int VAR_6,
    struct resource *VAR_7)
{
 struct ebus_softc *VAR_8;
 struct ebus_rinfo *VAR_9;
 bus_space_tag_t VAR_10;
 bus_space_handle_t VAR_11;
 int VAR_12, VAR_13;

 VAR_8 = FUNC_2(VAR_3);
 if ((VAR_8->sc_flags & VAR_0) != 0 && VAR_5 != VAR_2) {
  for (VAR_12 = 0; VAR_12 < VAR_8->sc_nrange; VAR_12++) {
   VAR_9 = &VAR_8->sc_rinfo[VAR_12];
   if (FUNC_8(VAR_7, &VAR_9->eri_rman) != 0) {
    VAR_10 = FUNC_5(VAR_9->eri_res);
    VAR_13 = FUNC_1(VAR_10,
        FUNC_4(VAR_9->eri_res),
        FUNC_7(VAR_7) -
        FUNC_7(VAR_9->eri_res),
        FUNC_6(VAR_7), &VAR_11);
    if (VAR_13 != 0)
     return (VAR_13);
    FUNC_10(VAR_7, VAR_10);
    FUNC_9(VAR_7, VAR_11);
    return (FUNC_3(VAR_7));
   }
  }
  return (VAR_1);
 }
 return (FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7));
}
