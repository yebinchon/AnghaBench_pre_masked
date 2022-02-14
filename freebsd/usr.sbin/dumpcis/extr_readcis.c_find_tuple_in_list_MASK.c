
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuple_list {struct tuple* tuples; } ;
struct tuple {unsigned char code; struct tuple* next; } ;



__attribute__((used)) static struct tuple *
FUNC_0(struct tuple_list *VAR_0, unsigned char VAR_1)
{
 struct tuple *VAR_2;

 for (VAR_2 = VAR_0->tuples; VAR_2; VAR_2 = VAR_2->next)
  if (VAR_2->code == VAR_1)
   break;
 return (VAR_2);
}
