
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int mmap_sem; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 unsigned long FUNC_0 (int *,int ,unsigned long,int,int,int ,int ,unsigned long*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 unsigned long FUNC_3 (struct mm_struct*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static unsigned long FUNC_5(unsigned long VAR_7)
{
 struct mm_struct *VAR_8 = VAR_6->mm;
 unsigned long VAR_9, VAR_10;


 if (VAR_7 != FUNC_3(VAR_8))
  return -VAR_0;

 FUNC_1(&VAR_8->mmap_sem);
 VAR_9 = FUNC_0(((void*)0), 0, VAR_7, VAR_3 | VAR_4,
         VAR_1 | VAR_2, VAR_5, 0, &VAR_10, ((void*)0));
 FUNC_4(&VAR_8->mmap_sem);
 if (VAR_10)
  FUNC_2(VAR_9, VAR_10);

 return VAR_9;
}
