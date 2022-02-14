
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpcht_softc {int htirq_mtx; TYPE_1__* htirq_map; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ irq_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_3 ;
 struct cpcht_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_4, device_t VAR_5, int *VAR_6)
{
 struct cpcht_softc *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_4);


 if (VAR_3 == 0)
  return (VAR_0);

 FUNC_2(&VAR_7->htirq_mtx);
 for (VAR_8 = 8; VAR_8 < 124; VAR_8++) {
  if (VAR_7->htirq_map[VAR_8].irq_type == VAR_2) {
   VAR_7->htirq_map[VAR_8].irq_type = VAR_1;
   *VAR_6 = FUNC_0(VAR_3, VAR_8);

   FUNC_3(&VAR_7->htirq_mtx);
   return (0);
  }
 }
 FUNC_3(&VAR_7->htirq_mtx);

 return (VAR_0);
}
