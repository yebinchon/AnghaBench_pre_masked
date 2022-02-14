
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; scalar_t__ sclass; } ;
struct entry {TYPE_2__ sym; struct entry* link; } ;
typedef scalar_t__ Type ;
typedef TYPE_1__* Table ;
struct TYPE_6__ {struct entry** buckets; struct TYPE_6__* previous; } ;
typedef TYPE_2__* Symbol ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_2 ;

Symbol FUNC_1(Type VAR_3) {
 Table VAR_4 = VAR_2;
 int VAR_5;
 struct entry *VAR_6;

 FUNC_0(VAR_4);
 do
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   for (VAR_6 = VAR_4->buckets[VAR_5]; VAR_6; VAR_6 = VAR_6->link)
    if (VAR_6->sym.type == VAR_3 && VAR_6->sym.sclass == VAR_1)
     return &VAR_6->sym;
 while ((VAR_4 = VAR_4->previous) != ((void*)0));
 return ((void*)0);
}
