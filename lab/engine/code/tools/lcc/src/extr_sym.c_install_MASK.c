
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* name; int scope; struct TYPE_8__* up; } ;
struct entry {TYPE_2__ sym; struct entry* link; } ;
typedef TYPE_1__* Table ;
struct TYPE_7__ {int level; struct entry** buckets; TYPE_2__* all; } ;
typedef TYPE_2__* Symbol ;


 int VAR_0 ;
 int FUNC_0 (struct entry*,int) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int) ;

Symbol FUNC_3(const char *VAR_1, Table *VAR_2, int VAR_3, int VAR_4) {
 Table VAR_5 = *VAR_2;
 struct entry *VAR_6;
 unsigned VAR_7 = (unsigned long)VAR_1&(VAR_0-1);

 FUNC_1(VAR_3 == 0 || VAR_3 >= VAR_5->level);
 if (VAR_3 > 0 && VAR_5->level < VAR_3)
  VAR_5 = *VAR_2 = FUNC_2(VAR_5, VAR_3);
 FUNC_0(VAR_6, VAR_4);
 VAR_6->sym.name = (char *)VAR_1;
 VAR_6->sym.scope = VAR_3;
 VAR_6->sym.up = VAR_5->all;
 VAR_5->all = &VAR_6->sym;
 VAR_6->link = VAR_5->buckets[VAR_7];
 VAR_5->buckets[VAR_7] = VAR_6;
 return &VAR_6->sym;
}
