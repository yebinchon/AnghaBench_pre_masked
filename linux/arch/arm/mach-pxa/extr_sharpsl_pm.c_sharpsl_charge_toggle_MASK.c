
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct TYPE_4__ {int charge_start_time; TYPE_1__* machinfo; int dev; } ;
struct TYPE_3__ {int (* charge ) (int) ;int (* read_devdata ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 TYPE_2__ VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct work_struct *VAR_5)
{
 FUNC_0(VAR_4.dev, "Toggling Charger at time: %lx\n", VAR_3);

 if (!VAR_4.machinfo->read_devdata(VAR_2)) {
  FUNC_4();
  return;
 } else if ((FUNC_5() < 0) || (FUNC_2() < 0)) {
  FUNC_3();
  return;
 }

 FUNC_6(VAR_1);
 VAR_4.machinfo->charge(0);
 FUNC_1(VAR_0);
 VAR_4.machinfo->charge(1);

 VAR_4.charge_start_time = VAR_3;
}
