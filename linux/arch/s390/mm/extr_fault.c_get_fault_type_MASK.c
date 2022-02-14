
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int int_parm_long; } ;
typedef enum fault_type { ____Placeholder_fault_type } fault_type ;
struct TYPE_3__ {int mm_segment; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct pt_regs*,int ) ;

__attribute__((used)) static enum fault_type FUNC_3(struct pt_regs *VAR_9)
{
 unsigned long VAR_10;

 VAR_10 = VAR_9->int_parm_long & 3;
 if (FUNC_1(VAR_10 == 0)) {

  if (FUNC_0(VAR_0) &&
      FUNC_2(VAR_9, VAR_3))
   return VAR_1;
  if (VAR_8->thread.mm_segment == VAR_4)
   return VAR_6;
  return VAR_2;
 }
 if (VAR_10 == 2) {

  if (VAR_8->thread.mm_segment & 1) {
   if (VAR_8->thread.mm_segment == VAR_5)
    return VAR_6;
   return VAR_2;
  }
  return VAR_7;
 }
 if (VAR_10 == 1) {

  return VAR_6;
 }

 return VAR_2;
}
