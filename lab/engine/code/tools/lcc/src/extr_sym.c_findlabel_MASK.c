
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int label; } ;
struct TYPE_9__ {TYPE_1__ l; } ;
struct TYPE_10__ {int generated; TYPE_2__ u; struct TYPE_10__* up; int scope; int name; } ;
struct entry {TYPE_3__ sym; struct entry* link; } ;
struct TYPE_12__ {int (* defsymbol ) (TYPE_3__*) ;} ;
struct TYPE_11__ {struct entry** buckets; TYPE_3__* all; } ;
typedef TYPE_3__* Symbol ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct entry*,int ) ;
 TYPE_5__* VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;

Symbol FUNC_3(int VAR_5) {
 struct entry *VAR_6;
 unsigned VAR_7 = VAR_5&(VAR_1-1);

 for (VAR_6 = VAR_4->buckets[VAR_7]; VAR_6; VAR_6 = VAR_6->link)
  if (VAR_5 == VAR_6->sym.u.l.label)
   return &VAR_6->sym;
 FUNC_0(VAR_6, VAR_0);
 VAR_6->sym.name = FUNC_1(VAR_5);
 VAR_6->sym.scope = VAR_3;
 VAR_6->sym.up = VAR_4->all;
 VAR_4->all = &VAR_6->sym;
 VAR_6->link = VAR_4->buckets[VAR_7];
 VAR_4->buckets[VAR_7] = VAR_6;
 VAR_6->sym.generated = 1;
 VAR_6->sym.u.l.label = VAR_5;
 (*VAR_2->defsymbol)(&VAR_6->sym);
 return &VAR_6->sym;
}
