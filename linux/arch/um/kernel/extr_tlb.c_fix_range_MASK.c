
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int mm_users; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct mm_struct*,unsigned long,unsigned long,int) ;

__attribute__((used)) static void FUNC_2(struct mm_struct *VAR_0, unsigned long VAR_1,
        unsigned long VAR_2, int VAR_3)
{




 if (FUNC_0(&VAR_0->mm_users) == 0)
  return;

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
