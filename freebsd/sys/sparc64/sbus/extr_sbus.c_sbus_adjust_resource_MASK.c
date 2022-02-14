
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbus_softc {int sc_nrange; TYPE_1__* sc_rd; } ;
struct resource {int dummy; } ;
typedef int rman_res_t ;
typedef int device_t ;
struct TYPE_2__ {int rd_rman; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,struct resource*,int ,int ) ;
 struct sbus_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct resource*,int ,int ) ;
 scalar_t__ FUNC_3 (struct resource*,int *) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2, device_t VAR_3, int VAR_4,
    struct resource *VAR_5, rman_res_t VAR_6, rman_res_t VAR_7)
{
 struct sbus_softc *VAR_8;
 int VAR_9;

 if (VAR_4 == VAR_1) {
  VAR_8 = FUNC_1(VAR_2);
  for (VAR_9 = 0; VAR_9 < VAR_8->sc_nrange; VAR_9++)
   if (FUNC_3(VAR_5,
       &VAR_8->sc_rd[VAR_9].rd_rman) != 0)
    return (FUNC_2(VAR_5, VAR_6, VAR_7));
  return (VAR_0);
 }
 return (FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7));
}
