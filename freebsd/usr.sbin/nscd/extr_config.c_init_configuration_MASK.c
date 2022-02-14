
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct configuration {int entries_capacity; int rwlock; int * entries; } ;


 int VAR_0 ;
 int FUNC_0 (struct configuration* (*) ()) ;
 int FUNC_1 (struct configuration* (*) ()) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int,int) ;
 int FUNC_4 (int *,int *) ;

struct configuration *
FUNC_5(void)
{
 struct configuration *VAR_1;

 FUNC_0(FUNC_5);
 VAR_1 = FUNC_3(1, sizeof(*VAR_1));
 FUNC_2(VAR_1 != ((void*)0));

 VAR_1->entries_capacity = VAR_0;
 VAR_1->entries = FUNC_3(VAR_1->entries_capacity,
  sizeof(*VAR_1->entries));
 FUNC_2(VAR_1->entries != ((void*)0));

 FUNC_4(&VAR_1->rwlock, ((void*)0));

 FUNC_1(FUNC_5);
 return (VAR_1);
}
