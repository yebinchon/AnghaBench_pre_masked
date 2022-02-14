
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_4__ {int hmi_exceptions; } ;
struct TYPE_3__ {int (* hmi_exception_early ) (struct pt_regs*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct pt_regs*) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (struct pt_regs*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

long FUNC_5(struct pt_regs *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_0.hmi_exceptions);

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 >= 0)
  return VAR_3;

 FUNC_3();

 if (VAR_1.hmi_exception_early)
  VAR_1.hmi_exception_early(VAR_2);

 FUNC_4();

 return 1;
}
