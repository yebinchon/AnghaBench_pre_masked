
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* pages; } ;
struct TYPE_5__ {int entry_count; TYPE_1__ u; } ;
struct TYPE_6__ {TYPE_2__ ldt; } ;
struct mm_context {TYPE_3__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (long) ;

void FUNC_1(struct mm_context *VAR_2)
{
 int VAR_3;

 if (VAR_2->arch.ldt.entry_count > VAR_0) {
  VAR_3 = VAR_2->arch.ldt.entry_count / VAR_1;
  while (VAR_3-- > 0)
   FUNC_0((long) VAR_2->arch.ldt.u.pages[VAR_3]);
 }
 VAR_2->arch.ldt.entry_count = 0;
}
