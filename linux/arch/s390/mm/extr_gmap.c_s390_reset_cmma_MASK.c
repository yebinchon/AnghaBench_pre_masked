
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int mmap_sem; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mm_struct*,int ,int ,int *,int *) ;

void FUNC_3(struct mm_struct *VAR_2)
{
 FUNC_0(&VAR_2->mmap_sem);
 FUNC_2(VAR_2, 0, VAR_0, &VAR_1, ((void*)0));
 FUNC_1(&VAR_2->mmap_sem);
}
