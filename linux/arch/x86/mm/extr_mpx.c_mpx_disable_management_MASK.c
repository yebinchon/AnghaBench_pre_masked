
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bd_addr; } ;
struct mm_struct {int mmap_sem; TYPE_1__ context; } ;
struct TYPE_4__ {struct mm_struct* mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(void)
{
 struct mm_struct *VAR_4 = VAR_3->mm;

 if (!FUNC_0(VAR_2))
  return -VAR_0;

 FUNC_1(&VAR_4->mmap_sem);
 VAR_4->context.bd_addr = VAR_1;
 FUNC_2(&VAR_4->mmap_sem);
 return 0;
}
