
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int hmi_exceptions; } ;
struct TYPE_7__ {TYPE_1__* kvm_vcore; } ;
struct TYPE_9__ {TYPE_2__ kvm_hstate; } ;
struct TYPE_8__ {int (* hmi_exception_early ) (int *) ;} ;
struct TYPE_6__ {scalar_t__ tb_offset_applied; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_5__ VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_4__* VAR_1 ;
 int FUNC_5 () ;
 TYPE_3__ VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

long FUNC_9(void)
{
 bool VAR_3;

 FUNC_0(VAR_0.hmi_exceptions);

 if (FUNC_1(((void*)0)) >= 0)
  return 1;
 VAR_3 = FUNC_4();


 FUNC_2();







 FUNC_7();






 if (VAR_2.hmi_exception_early)
  VAR_2.hmi_exception_early(((void*)0));






 if (VAR_3) {
  FUNC_5();

  FUNC_3();
 } else {
  FUNC_8();
 }





 if (VAR_1->kvm_hstate.kvm_vcore)
  VAR_1->kvm_hstate.kvm_vcore->tb_offset_applied = 0;

 return 0;
}
