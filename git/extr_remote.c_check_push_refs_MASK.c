
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct refspec_item {scalar_t__ matching; scalar_t__ pattern; } ;
struct refspec {int nr; struct refspec_item* items; } ;
struct ref {int dummy; } ;


 int FUNC_0 (struct ref*,struct refspec_item*,int *,int *) ;

int FUNC_1(struct ref *VAR_0, struct refspec *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->nr; VAR_3++) {
  struct refspec_item *VAR_4 = &VAR_1->items[VAR_3];

  if (VAR_4->pattern || VAR_4->matching)
   continue;

  VAR_2 |= FUNC_0(VAR_0, VAR_4, ((void*)0), ((void*)0));
 }

 return VAR_2;
}
