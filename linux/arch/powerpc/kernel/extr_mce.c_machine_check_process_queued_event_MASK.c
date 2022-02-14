
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ignore_event; } ;
struct TYPE_4__ {TYPE_1__ ue_error; } ;
struct machine_check_event {scalar_t__ error_type; TYPE_2__ u; } ;
struct irq_work {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct machine_check_event*,int,int) ;
 int * VAR_3 ;
 int VAR_4 ;
 struct machine_check_event* FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct irq_work *VAR_5)
{
 int VAR_6;
 struct machine_check_event *VAR_7;

 FUNC_2(VAR_2, VAR_0);





 while (FUNC_1(VAR_4) > 0) {
  VAR_6 = FUNC_1(VAR_4) - 1;
  VAR_7 = FUNC_4(&VAR_3[VAR_6]);

  if (VAR_7->error_type == VAR_1 &&
      VAR_7->u.ue_error.ignore_event) {
   FUNC_0(VAR_4);
   continue;
  }
  FUNC_3(VAR_7, 0, 0);
  FUNC_0(VAR_4);
 }
}
