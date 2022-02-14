
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct macro_definition {int dummy; } ;
typedef TYPE_1__* ndptr ;
struct TYPE_6__ {scalar_t__ defn; int * next; } ;
struct TYPE_5__ {TYPE_2__* d; } ;


 TYPE_1__* FUNC_0 (char const*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_2__*,char const*,char const*) ;
 TYPE_2__* FUNC_3 (int,int *) ;

void
FUNC_4(const char *VAR_1, const char *VAR_2)
{
 ndptr VAR_3 = FUNC_0(VAR_1);
 if (VAR_3->d != ((void*)0)) {
  if (VAR_3->d->defn != VAR_0)
   FUNC_1(VAR_3->d->defn);
 } else {
  VAR_3->d = FUNC_3(sizeof(struct macro_definition), ((void*)0));
  VAR_3->d->next = ((void*)0);
 }
 FUNC_2(VAR_3->d, VAR_2, VAR_1);
}
