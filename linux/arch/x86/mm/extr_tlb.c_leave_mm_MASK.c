
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int dummy; } ;
struct TYPE_2__ {int is_lazy; int loaded_mm; } ;


 int FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 struct mm_struct VAR_1 ;
 int FUNC_1 (int *,struct mm_struct*,int *) ;
 struct mm_struct* FUNC_2 (int ) ;

void FUNC_3(int VAR_2)
{
 struct mm_struct *VAR_3 = FUNC_2(VAR_0.loaded_mm);
 if (VAR_3 == &VAR_1)
  return;


 FUNC_0(!FUNC_2(VAR_0.is_lazy));

 FUNC_1(((void*)0), &VAR_1, ((void*)0));
}
