
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; int cmp; } ;
struct index_state {int cache_nr; struct cache_entry** cache; } ;
struct cache_entry {int ce_flags; int name; } ;
struct TYPE_2__ {char* string; } ;


 int VAR_0 ;
 struct string_list VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct string_list*,int ) ;
 int FUNC_3 (struct string_list*,int ) ;
 int FUNC_4 (struct string_list*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct index_state *VAR_4)
{
 struct string_list VAR_5 = VAR_1;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4->cache_nr; VAR_6++) {
  struct cache_entry *VAR_7 = VAR_4->cache[VAR_6];

  if (!(VAR_7->ce_flags & VAR_0))
   continue;

  FUNC_2(&VAR_5, VAR_7->name);
  VAR_7->ce_flags &= ~VAR_0;
 }

 VAR_5.cmp = VAR_2;
 FUNC_4(&VAR_5);

 if (VAR_5.nr) {
  FUNC_5(FUNC_0("the following paths have collided (e.g. case-sensitive paths\n"
     "on a case-insensitive filesystem) and only one from the same\n"
     "colliding group is in the working tree:\n"));

  for (VAR_6 = 0; VAR_6 < VAR_5.nr; VAR_6++)
   FUNC_1(VAR_3, "  '%s'\n", VAR_5.items[VAR_6].string);
 }

 FUNC_3(&VAR_5, 0);
}
