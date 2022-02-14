
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {int mmap_sem; scalar_t__ pgd; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct seq_file*,scalar_t__,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 if (VAR_0->mm->pgd) {
  FUNC_0(&VAR_0->mm->mmap_sem);
  FUNC_1(VAR_1, VAR_0->mm->pgd, 0);
  FUNC_2(&VAR_0->mm->mmap_sem);
 }
 return 0;
}
