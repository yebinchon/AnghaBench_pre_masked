
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_4__ {scalar_t__ charge_mode; int dev; TYPE_1__* machinfo; } ;
struct TYPE_3__ {int (* read_devdata ) (int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_2__ VAR_3 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_4)
{
 int VAR_5 = VAR_3.machinfo->read_devdata(VAR_1);

 FUNC_0(VAR_3.dev, "AC Status: %d\n", VAR_5);

 FUNC_2();
 if (VAR_5 && (VAR_3.charge_mode != VAR_0))
  FUNC_4();
 else if (VAR_3.charge_mode == VAR_0)
  FUNC_3();

 FUNC_1(&VAR_2, 0);
}
