
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
FUNC_4(device_t VAR_4, device_t VAR_5, int VAR_6, int VAR_7,
    int *VAR_8)
{
 struct cpcht_softc *VAR_9;
 int VAR_10, VAR_11;

 VAR_9 = FUNC_1(VAR_4);
 VAR_11 = 0;


 if (VAR_3 == 0)
  return (VAR_0);

 FUNC_2(&VAR_9->htirq_mtx);
 for (VAR_10 = 8; VAR_10 < 124 - VAR_6; VAR_10++) {
  for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
   if (VAR_9->htirq_map[VAR_10+VAR_11].irq_type != VAR_2)
    break;
  }
  if (VAR_11 == VAR_6)
   break;

  VAR_10 += VAR_11;
 }

 if (VAR_11 != VAR_6) {
  FUNC_3(&VAR_9->htirq_mtx);
  return (VAR_0);
 }

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  VAR_8[VAR_11] = FUNC_0(VAR_3, VAR_10+VAR_11);
  VAR_9->htirq_map[VAR_10+VAR_11].irq_type = VAR_1;
 }
 FUNC_3(&VAR_9->htirq_mtx);

 return (0);
}
