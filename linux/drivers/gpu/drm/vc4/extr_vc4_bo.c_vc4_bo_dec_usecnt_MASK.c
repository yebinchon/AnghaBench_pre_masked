
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_bo {scalar_t__ madv; int madv_lock; int usecnt; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct vc4_bo*) ;

void FUNC_5(struct vc4_bo *VAR_1)
{



 if (FUNC_3(&VAR_1->usecnt))
  return;

 FUNC_0(&VAR_1->madv_lock);
 if (FUNC_2(&VAR_1->usecnt) &&
     VAR_1->madv == VAR_0)
  FUNC_4(VAR_1);
 FUNC_1(&VAR_1->madv_lock);
}
