
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ebus_softc {int sc_nrange; int sc_range; int sc_ign; } ;
struct ebus_nexus_ranges {int dummy; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int *,int) ;
 int FUNC_1 (int ,char*,int,int *) ;
 struct ebus_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,struct ebus_softc*,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1)
{
 struct ebus_softc *VAR_2;
 phandle_t VAR_3;

 VAR_2 = FUNC_2(VAR_1);
 VAR_3 = FUNC_5(VAR_1);


 if (FUNC_0(VAR_3, "portid", &VAR_2->sc_ign,
     sizeof(VAR_2->sc_ign)) == -1) {
  FUNC_3(VAR_1, "could not determine IGN");
  return (VAR_0);
 }


 VAR_2->sc_nrange = FUNC_1(VAR_3, "ranges",
     sizeof(struct ebus_nexus_ranges), &VAR_2->sc_range);
 if (VAR_2->sc_nrange == -1) {
  FUNC_3(VAR_1, "could not get ranges property\n");
  return (VAR_0);
 }
 return (FUNC_4(VAR_1, VAR_2, VAR_3));
}
