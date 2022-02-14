
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elevator_type {int * icq_cache; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct elevator_type *VAR_1)
{

 FUNC_3(&VAR_0);
 FUNC_1(&VAR_1->list);
 FUNC_4(&VAR_0);





 if (VAR_1->icq_cache) {
  FUNC_2();
  FUNC_0(VAR_1->icq_cache);
  VAR_1->icq_cache = ((void*)0);
 }
}
