
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_pool {int pool_lock; int num_elem; int state; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct rxe_pool*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct rxe_pool*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct rxe_pool *VAR_1)
{
 unsigned long VAR_2;

 FUNC_4(&VAR_1->pool_lock, VAR_2);
 VAR_1->state = VAR_0;
 if (FUNC_0(&VAR_1->num_elem) > 0)
  FUNC_2("%s pool destroyed with unfree'd elem\n",
   FUNC_1(VAR_1));
 FUNC_5(&VAR_1->pool_lock, VAR_2);

 FUNC_3(VAR_1);
}
