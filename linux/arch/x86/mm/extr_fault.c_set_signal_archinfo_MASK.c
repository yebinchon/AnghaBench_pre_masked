
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long error_code; unsigned long cr2; int trap_nr; } ;
struct task_struct {TYPE_1__ thread; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 struct task_struct* VAR_4 ;

__attribute__((used)) static void FUNC_0(unsigned long VAR_5,
    unsigned long VAR_6)
{
 struct task_struct *VAR_7 = VAR_4;
 if (VAR_5 >= VAR_0)
  VAR_6 |= VAR_1;

 VAR_7->thread.trap_nr = VAR_3;
 VAR_7->thread.error_code = VAR_6 | VAR_2;
 VAR_7->thread.cr2 = VAR_5;
}
