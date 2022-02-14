
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char const* name; } ;
struct entry {TYPE_2__ sym; struct entry* link; } ;
typedef TYPE_1__* Table ;
struct TYPE_6__ {struct entry** buckets; struct TYPE_6__* previous; } ;
typedef TYPE_2__* Symbol ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

Symbol FUNC_1(const char *VAR_1, Table VAR_2) {
 struct entry *VAR_3;
 unsigned VAR_4 = (unsigned long)VAR_1&(VAR_0-1);

 FUNC_0(VAR_2);
 do
  for (VAR_3 = VAR_2->buckets[VAR_4]; VAR_3; VAR_3 = VAR_3->link)
   if (VAR_1 == VAR_3->sym.name)
    return &VAR_3->sym;
 while ((VAR_2 = VAR_2->previous) != ((void*)0));
 return ((void*)0);
}
