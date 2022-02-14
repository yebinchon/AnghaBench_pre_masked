
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_3__ {int z_symbol_error_counter; } ;
struct qib_pportdata {int lflags; TYPE_2__* dd; TYPE_1__ ibport_data; } ;
struct TYPE_4__ {int (* f_portcntr ) (struct qib_pportdata*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct qib_pportdata* FUNC_0 (int ,struct timer_list*,int ) ;
 struct qib_pportdata* VAR_2 ;
 int FUNC_1 (struct qib_pportdata*,int ) ;
 int VAR_3 ;

void FUNC_2(struct timer_list *VAR_4)
{
 struct qib_pportdata *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_3);

 if (VAR_5->lflags & VAR_0)
  return;

 VAR_5->ibport_data.z_symbol_error_counter =
  VAR_5->dd->f_portcntr(VAR_5, VAR_1);
}
