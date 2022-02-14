
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct unw_frame_info {int dummy; } ;
struct switch_stack {int dummy; } ;
struct TYPE_3__ {int frame; int depth; scalar_t__ regs; } ;
typedef TYPE_1__ ia64_backtrace_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,scalar_t__*) ;
 int FUNC_3 (int *,scalar_t__*) ;
 int FUNC_4 (int *,int ,struct switch_stack*) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct unw_frame_info *VAR_1, void *VAR_2)
{
 ia64_backtrace_t *VAR_3 = VAR_2;
 struct switch_stack *VAR_4;
 int VAR_5 = 0;
 u_long VAR_6, VAR_7;

 VAR_4 = (struct switch_stack *)(VAR_1+1);

 VAR_4 = (struct switch_stack *)(((unsigned long)VAR_4 + 15) & ~15);

 FUNC_4(&VAR_3->frame, VAR_0, VAR_4);


 do {
  FUNC_3(&VAR_3->frame, &VAR_7);
  if (VAR_7 >= (u_long)VAR_3->regs)
   break;
  if (!FUNC_0(VAR_3))
   return;
 } while (VAR_5++ < 200);


 while (VAR_3->depth-- && FUNC_0(VAR_3)) {
  FUNC_2(&VAR_3->frame, &VAR_6);
  FUNC_1(VAR_6);
  if (FUNC_5(&VAR_3->frame)) {
   break;
  }
 }
}
