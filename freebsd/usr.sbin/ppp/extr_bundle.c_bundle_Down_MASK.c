
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct datalink {struct datalink* next; } ;
struct bundle {struct datalink* links; } ;


 int FUNC_0 (struct datalink*,int) ;

void
FUNC_1(struct bundle *VAR_0, int VAR_1)
{
  struct datalink *VAR_2;

  for (VAR_2 = VAR_0->links; VAR_2; VAR_2 = VAR_2->next)
    FUNC_0(VAR_2, VAR_1);
}
