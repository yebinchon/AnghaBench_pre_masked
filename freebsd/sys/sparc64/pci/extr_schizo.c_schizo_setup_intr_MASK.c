
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_long ;
struct schizo_softc {scalar_t__ sc_ign; } ;
struct schizo_icarg {struct schizo_softc* sica_sc; } ;
struct resource {int dummy; } ;
typedef int driver_intr_t ;
typedef int driver_filter_t ;
typedef int device_t ;
struct TYPE_2__ {int * iv_ic; scalar_t__ iv_icarg; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int ,struct resource*,int,int *,int *,void*,void**) ;
 struct schizo_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,size_t,...) ;
 TYPE_1__* VAR_2 ;
 size_t FUNC_5 (struct resource*) ;
 int VAR_3 ;
 int FUNC_6 (struct schizo_softc*,int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_4, device_t VAR_5, struct resource *VAR_6,
    int VAR_7, driver_filter_t *VAR_8, driver_intr_t *VAR_9, void *VAR_10,
    void **VAR_11)
{
 struct schizo_softc *VAR_12;
 u_long VAR_13;
 int VAR_14;

 VAR_12 = FUNC_3(VAR_4);



 VAR_13 = FUNC_5(VAR_6);
 if (FUNC_0(VAR_13) != VAR_12->sc_ign) {
  FUNC_4(VAR_4, "invalid interrupt vector 0x%lx\n", VAR_13);
  return (VAR_0);
 }

 if (VAR_2[VAR_13].iv_ic == &VAR_3) {




  VAR_12 = ((struct schizo_icarg *)VAR_2[VAR_13].iv_icarg)->
      sica_sc;
 } else if (VAR_2[VAR_13].iv_ic == ((void*)0)) {




  VAR_14 = FUNC_6(VAR_12, FUNC_1(VAR_13));
  if (VAR_14 != 0) {
   FUNC_4(VAR_4, "could not register interrupt "
       "controller for vector 0x%lx (%d)\n", VAR_13, VAR_14);
   return (VAR_14);
  }
  if (VAR_1)
   FUNC_4(VAR_4, "belatedly registered as "
       "interrupt controller for vector 0x%lx\n", VAR_13);
 } else {
  FUNC_4(VAR_4,
      "invalid interrupt controller for vector 0x%lx\n", VAR_13);
  return (VAR_0);
 }
 return (FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
     VAR_10, VAR_11));
}
