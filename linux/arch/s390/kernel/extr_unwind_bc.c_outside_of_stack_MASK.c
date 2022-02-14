
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int end; } ;
struct unwind_state {unsigned long sp; TYPE_1__ stack_info; } ;
struct stack_frame {int dummy; } ;



__attribute__((used)) static bool FUNC_0(struct unwind_state *VAR_0, unsigned long VAR_1)
{
 return (VAR_1 <= VAR_0->sp) ||
  (VAR_1 > VAR_0->stack_info.end - sizeof(struct stack_frame));
}
