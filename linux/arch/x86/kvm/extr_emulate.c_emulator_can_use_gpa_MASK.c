
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x86_emulate_ctxt {int d; scalar_t__ rep_prefix; } ;


 int VAR_0 ;
 int VAR_1 ;

bool FUNC_0(struct x86_emulate_ctxt *VAR_2)
{
 if (VAR_2->rep_prefix && (VAR_2->d & VAR_0))
  return 0;

 if (VAR_2->d & VAR_1)
  return 0;

 return 1;
}
