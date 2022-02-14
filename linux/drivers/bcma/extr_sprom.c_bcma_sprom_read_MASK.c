
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {int core; } ;
struct bcma_bus {TYPE_1__ drv_cc; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct bcma_bus *VAR_0, u16 VAR_1, u16 *VAR_2,
       size_t VAR_3)
{
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  VAR_2[VAR_4] = FUNC_0(VAR_0->drv_cc.core, VAR_1 + (VAR_4 * 2));
}
