
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int has_pgste; } ;
struct mm_struct {int mmap_sem; TYPE_1__ context; } ;
struct TYPE_4__ {struct mm_struct* mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mm_struct*) ;
 scalar_t__ FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (struct mm_struct*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mm_struct*,int ,int ,int *,int *) ;
 int VAR_3 ;

int FUNC_6(void)
{
 struct mm_struct *VAR_4 = VAR_2->mm;


 if (FUNC_2(VAR_4))
  return 0;

 if (!FUNC_1(VAR_4))
  return -VAR_0;
 FUNC_0(&VAR_4->mmap_sem);
 VAR_4->context.has_pgste = 1;

 FUNC_3(VAR_4);
 FUNC_5(VAR_4, 0, VAR_1, &VAR_3, ((void*)0));
 FUNC_4(&VAR_4->mmap_sem);
 return 0;
}
