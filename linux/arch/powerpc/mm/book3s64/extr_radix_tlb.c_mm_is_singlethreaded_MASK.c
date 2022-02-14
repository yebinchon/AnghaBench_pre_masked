
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int copros; } ;
struct mm_struct {int mm_users; TYPE_1__ context; } ;
struct TYPE_4__ {struct mm_struct* mm; } ;


 int FUNC_0 (int *) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static bool FUNC_1(struct mm_struct *VAR_1)
{
 if (FUNC_0(&VAR_1->context.copros) > 0)
  return 0;
 if (FUNC_0(&VAR_1->mm_users) <= 1 && VAR_0->mm == VAR_1)
  return 1;
 return 0;
}
