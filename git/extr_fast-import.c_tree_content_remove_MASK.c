
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tree_entry {TYPE_2__* versions; struct tree_content* tree; TYPE_1__* name; } ;
struct tree_content {unsigned int entry_count; struct tree_entry** entries; } ;
struct TYPE_4__ {int oid; scalar_t__ mode; } ;
struct TYPE_3__ {unsigned int str_len; int str_dat; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char const*,int ,unsigned int) ;
 int FUNC_2 (struct tree_entry*) ;
 int FUNC_3 (struct tree_entry*,struct tree_entry*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tree_content*) ;
 char* FUNC_6 (char const*,char) ;

__attribute__((used)) static int FUNC_7(
 struct tree_entry *VAR_0,
 const char *VAR_1,
 struct tree_entry *VAR_2,
 int VAR_3)
{
 struct tree_content *VAR_4;
 const char *VAR_5;
 unsigned int VAR_6, VAR_7;
 struct tree_entry *VAR_8;

 VAR_5 = FUNC_6(VAR_1, '/');
 VAR_7 = VAR_5 - VAR_1;

 if (!VAR_0->tree)
  FUNC_2(VAR_0);

 if (!*VAR_1 && VAR_3) {
  VAR_8 = VAR_0;
  goto del_entry;
 }

 VAR_4 = VAR_0->tree;
 for (VAR_6 = 0; VAR_6 < VAR_4->entry_count; VAR_6++) {
  VAR_8 = VAR_4->entries[VAR_6];
  if (VAR_8->name->str_len == VAR_7 && !FUNC_1(VAR_1, VAR_8->name->str_dat, VAR_7)) {
   if (*VAR_5 && !FUNC_0(VAR_8->versions[1].mode))






    return 1;
   if (!*VAR_5 || !FUNC_0(VAR_8->versions[1].mode))
    goto del_entry;
   if (!VAR_8->tree)
    FUNC_2(VAR_8);
   if (FUNC_7(VAR_8, VAR_5 + 1, VAR_2, 0)) {
    for (VAR_7 = 0; VAR_7 < VAR_8->tree->entry_count; VAR_7++) {
     if (VAR_8->tree->entries[VAR_7]->versions[1].mode) {
      FUNC_4(&VAR_0->versions[1].oid);
      return 1;
     }
    }
    VAR_2 = ((void*)0);
    goto del_entry;
   }
   return 0;
  }
 }
 return 0;

del_entry:
 if (VAR_2)
  FUNC_3(VAR_2, VAR_8, sizeof(*VAR_2));
 else if (VAR_8->tree)
  FUNC_5(VAR_8->tree);
 VAR_8->tree = ((void*)0);
 VAR_8->versions[1].mode = 0;
 FUNC_4(&VAR_8->versions[1].oid);
 FUNC_4(&VAR_0->versions[1].oid);
 return 1;
}
