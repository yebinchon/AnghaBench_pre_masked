
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* mm; TYPE_2__* signal; } ;
struct TYPE_7__ {unsigned long locked_vm; } ;
struct TYPE_6__ {TYPE_1__* rlim; } ;
struct TYPE_5__ {unsigned long rlim_cur; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 size_t VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_4__* VAR_4 ;

__attribute__((used)) static unsigned long FUNC_1(unsigned long VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7;

 if (FUNC_0(VAR_0))
  return VAR_3;

 VAR_7 = VAR_4->signal->rlim[VAR_2].rlim_cur;
 VAR_6 = VAR_7 - (VAR_4->mm->locked_vm << VAR_1);

 return VAR_6 - VAR_5;
}
