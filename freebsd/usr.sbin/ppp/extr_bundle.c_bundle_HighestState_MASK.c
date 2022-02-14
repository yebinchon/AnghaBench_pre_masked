
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct datalink {unsigned int state; struct datalink* next; } ;
struct bundle {struct datalink* links; } ;


 unsigned int VAR_0 ;

unsigned
FUNC_0(struct bundle *VAR_1)
{
  struct datalink *VAR_2;
  unsigned VAR_3 = VAR_0;

  for (VAR_2 = VAR_1->links; VAR_2; VAR_2 = VAR_2->next)
    if (VAR_3 < VAR_2->state)
      VAR_3 = VAR_2->state;

  return VAR_3;
}
