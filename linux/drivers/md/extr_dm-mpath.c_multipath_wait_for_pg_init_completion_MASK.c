
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multipath {int pg_init_wait; int pg_init_in_progress; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct multipath *VAR_2)
{
 FUNC_0(VAR_1);

 while (1) {
  FUNC_4(&VAR_2->pg_init_wait, &VAR_1, VAR_0);

  if (!FUNC_1(&VAR_2->pg_init_in_progress))
   break;

  FUNC_3();
 }
 FUNC_2(&VAR_2->pg_init_wait, &VAR_1);
}
