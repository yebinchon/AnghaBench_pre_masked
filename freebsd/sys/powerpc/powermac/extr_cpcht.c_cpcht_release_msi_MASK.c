
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpcht_softc {int htirq_mtx; TYPE_1__* htirq_map; } ;
typedef int device_t ;
struct TYPE_2__ {int irq_type; } ;


 int VAR_0 ;
 struct cpcht_softc* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, device_t VAR_2, int VAR_3, int *VAR_4)
{
 struct cpcht_softc *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_1);

 FUNC_1(&VAR_5->htirq_mtx);
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  VAR_5->htirq_map[VAR_4[VAR_6] & 0xff].irq_type = VAR_0;
 FUNC_2(&VAR_5->htirq_mtx);

 return (0);
}
