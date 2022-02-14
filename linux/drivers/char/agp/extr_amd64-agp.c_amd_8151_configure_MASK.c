
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int gart_bus_addr; int gatt_table_real; } ;
struct TYPE_3__ {int misc; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 (int) ;
 unsigned long FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(void)
{
 unsigned long VAR_2 = FUNC_5(VAR_1->gatt_table_real);
 int VAR_3;

 if (!FUNC_2(VAR_0))
  return 0;


 for (VAR_3 = 0; VAR_3 < FUNC_3(); VAR_3++) {
  VAR_1->gart_bus_addr =
   FUNC_0(FUNC_4(VAR_3)->misc, VAR_2);
 }
 FUNC_1();
 return 0;
}
