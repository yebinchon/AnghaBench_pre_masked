
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_4__ {int full_count; scalar_t__ charge_mode; int dev; scalar_t__ charge_start_time; TYPE_1__* machinfo; } ;
struct TYPE_3__ {int (* read_devdata ) (int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 () ;
 TYPE_2__ VAR_5 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_7)
{
 FUNC_0(VAR_5.dev, "Charge Full at time: %lx\n", VAR_4);

 VAR_5.full_count++;

 if (!VAR_5.machinfo->read_devdata(VAR_3)) {
  FUNC_0(VAR_5.dev, "Charge Full: AC removed - stop charging!\n");
  if (VAR_5.charge_mode == VAR_1)
   FUNC_2();
 } else if (VAR_5.full_count < 2) {
  FUNC_0(VAR_5.dev, "Charge Full: Count too low\n");
  FUNC_1(&VAR_6, 0);
 } else if (FUNC_4(VAR_4, VAR_5.charge_start_time + VAR_2)) {
  FUNC_0(VAR_5.dev, "Charge Full: Interrupt generated too slowly - retry.\n");
  FUNC_1(&VAR_6, 0);
 } else {
  FUNC_2();
  VAR_5.charge_mode = VAR_0;
  FUNC_0(VAR_5.dev, "Charge Full: Charging Finished\n");
 }
}
