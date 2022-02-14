
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pgd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct mm_struct*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(struct mm_struct *VAR_5, pgd_t *VAR_6)
{



 if (VAR_0 == 2 ||
     (VAR_0 == 3 && VAR_3) ||
     VAR_0 >= 4) {
  FUNC_0(VAR_6 + VAR_1,
    VAR_4 + VAR_1,
    VAR_2);
 }


 if (!VAR_3) {
  FUNC_2(VAR_6, VAR_5);
  FUNC_1(VAR_6);
 }
}
