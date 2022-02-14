
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct TYPE_4__ {unsigned long physical_address; scalar_t__ physical_address_provided; scalar_t__ ignore_event; } ;
struct TYPE_3__ {TYPE_2__ ue_error; } ;
struct machine_check_event {scalar_t__ error_type; TYPE_1__ u; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (char*) ;
 struct machine_check_event* FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct work_struct *VAR_4)
{
 int VAR_5;
 struct machine_check_event *VAR_6;

 while (FUNC_1(VAR_2) > 0) {
  VAR_5 = FUNC_1(VAR_2) - 1;
  VAR_6 = FUNC_4(&VAR_3[VAR_5]);
  FUNC_0(VAR_2);
 }
}
