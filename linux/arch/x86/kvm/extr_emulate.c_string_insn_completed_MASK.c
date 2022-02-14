
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x86_emulate_ctxt {int b; scalar_t__ rep_prefix; int eflags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_0(struct x86_emulate_ctxt *VAR_3)
{







 if (((VAR_3->b == 0xa6) || (VAR_3->b == 0xa7) ||
      (VAR_3->b == 0xae) || (VAR_3->b == 0xaf))
     && (((VAR_3->rep_prefix == VAR_0) &&
   ((VAR_3->eflags & VAR_2) == 0))
  || ((VAR_3->rep_prefix == VAR_1) &&
      ((VAR_3->eflags & VAR_2) == VAR_2))))
  return 1;

 return 0;
}
