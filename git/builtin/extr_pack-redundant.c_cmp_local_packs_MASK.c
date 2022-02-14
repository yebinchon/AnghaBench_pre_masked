
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pack_list {struct pack_list* next; } ;


 int FUNC_0 (struct pack_list*,struct pack_list*) ;
 struct pack_list* VAR_0 ;

__attribute__((used)) static void FUNC_1(void)
{
 struct pack_list *VAR_1, *VAR_2 = VAR_0;

 while ((VAR_1 = VAR_2)) {
  while ((VAR_1 = VAR_1->next))
   FUNC_0(VAR_2, VAR_1);
  VAR_2 = VAR_2->next;
 }
}
