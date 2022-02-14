
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_struct {scalar_t__ amr; scalar_t__ iamr; scalar_t__ uamor; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct thread_struct *VAR_1,
         struct thread_struct *VAR_2)
{
 if (FUNC_0(&VAR_0))
  return;

 if (VAR_2->amr != VAR_1->amr)
  FUNC_1(VAR_1->amr);
 if (VAR_2->iamr != VAR_1->iamr)
  FUNC_2(VAR_1->iamr);
 if (VAR_2->uamor != VAR_1->uamor)
  FUNC_3(VAR_1->uamor);
}
