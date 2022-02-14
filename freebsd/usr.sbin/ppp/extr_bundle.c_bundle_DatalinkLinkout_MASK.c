
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct datalink {struct datalink* next; } ;
struct bundle {struct datalink* links; } ;


 int FUNC_0 (struct bundle*) ;

__attribute__((used)) static struct datalink *
FUNC_1(struct bundle *VAR_0, struct datalink *VAR_1)
{
  struct datalink **VAR_2;

  for (VAR_2 = &VAR_0->links; *VAR_2; VAR_2 = &(*VAR_2)->next)
    if (*VAR_2 == VAR_1) {
      *VAR_2 = VAR_1->next;
      VAR_1->next = ((void*)0);
      FUNC_0(VAR_0);
      return VAR_1;
    }

  return ((void*)0);
}
