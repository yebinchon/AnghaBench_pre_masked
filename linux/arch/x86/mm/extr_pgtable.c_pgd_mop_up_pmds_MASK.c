
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pgd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (struct mm_struct*,int *) ;

__attribute__((used)) static void FUNC_3(struct mm_struct *VAR_4, pgd_t *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  FUNC_2(VAR_4, &VAR_5[VAR_6]);
}
