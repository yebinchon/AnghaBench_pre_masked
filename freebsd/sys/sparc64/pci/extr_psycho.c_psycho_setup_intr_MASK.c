
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_long ;
struct resource {int dummy; } ;
struct psycho_softc {scalar_t__ sc_ign; } ;
typedef int driver_intr_t ;
typedef int driver_filter_t ;
typedef int device_t ;
struct TYPE_2__ {int * iv_ic; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (int ,int ,struct resource*,int,int *,int *,void*,void**) ;
 struct psycho_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,size_t) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 size_t FUNC_4 (struct resource*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3, device_t VAR_4, struct resource *VAR_5,
    int VAR_6, driver_filter_t *VAR_7, driver_intr_t *VAR_8, void *VAR_9,
    void **VAR_10)
{
 struct psycho_softc *VAR_11;
 u_long VAR_12;

 VAR_11 = FUNC_2(VAR_3);




 VAR_12 = FUNC_4(VAR_5);
 if (FUNC_0(VAR_12) != VAR_11->sc_ign ||
     VAR_1[VAR_12].iv_ic != &VAR_2) {
  FUNC_3(VAR_3, "invalid interrupt vector 0x%lx\n", VAR_12);
  return (VAR_0);
 }
 return (FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
     VAR_9, VAR_10));
}
