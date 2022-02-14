
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long* type; int next_sp; } ;
struct unwind_state {unsigned long stack_mask; void* graph_idx; int task; int orig_sp; TYPE_1__ stack_info; } ;
struct stack_info {unsigned long* end; int next_sp; int member_0; } ;


 int VAR_0 ;
 unsigned long* FUNC_0 (int ,int) ;
 unsigned long FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long*,int ,struct stack_info*,unsigned long*) ;
 int FUNC_3 (char*,unsigned long*,int,unsigned long,...) ;

__attribute__((used)) static void FUNC_4(struct unwind_state *VAR_1)
{
 static bool VAR_2 = 0;
 bool VAR_3, VAR_4 = 0;
 unsigned long VAR_5, *VAR_6;
 struct stack_info VAR_7 = {0};
 unsigned long VAR_8 = 0;

 if (VAR_2)
  return;

 VAR_2 = 1;

 FUNC_3("unwind stack type:%d next_sp:%p mask:0x%lx graph_idx:%d\n",
   VAR_1->stack_info.type, VAR_1->stack_info.next_sp,
   VAR_1->stack_mask, VAR_1->graph_idx);

 for (VAR_6 = FUNC_0(VAR_1->orig_sp, sizeof(long)); VAR_6;
      VAR_6 = FUNC_0(VAR_7.next_sp, sizeof(long))) {
  if (FUNC_2(VAR_6, VAR_1->task, &VAR_7, &VAR_8))
   break;

  for (; VAR_6 < VAR_7.end; VAR_6++) {

   VAR_5 = FUNC_1(*VAR_6);

   VAR_3 = VAR_4;
   VAR_4 = VAR_5 == 0;

   if (VAR_4) {
    if (!VAR_3)
     FUNC_3("%p: %0*x ...\n",
       VAR_6, VAR_0/4, 0);
    continue;
   }

   FUNC_3("%p: %0*lx (%pB)\n",
     VAR_6, VAR_0/4, VAR_5, (void *)VAR_5);
  }
 }
}
