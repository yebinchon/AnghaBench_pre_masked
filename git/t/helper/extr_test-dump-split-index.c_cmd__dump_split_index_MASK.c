
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct split_index {scalar_t__ delete_bitmap; scalar_t__ replace_bitmap; int base_oid; } ;
struct cache_entry {int ce_mode; char* name; int oid; } ;
struct TYPE_3__ {int cache_nr; struct cache_entry** cache; struct split_index* split_index; int oid; } ;


 int FUNC_0 (struct cache_entry*) ;
 int FUNC_1 (TYPE_1__*,char const*,int) ;
 int FUNC_2 (scalar_t__,int ,int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

int FUNC_5(int VAR_2, const char **VAR_3)
{
 struct split_index *VAR_4;
 int VAR_5;

 FUNC_1(&VAR_1, VAR_3[1], 1);
 FUNC_4("own %s\n", FUNC_3(&VAR_1.oid));
 VAR_4 = VAR_1.split_index;
 if (!VAR_4) {
  FUNC_4("not a split index\n");
  return 0;
 }
 FUNC_4("base %s\n", FUNC_3(&VAR_4->base_oid));
 for (VAR_5 = 0; VAR_5 < VAR_1.cache_nr; VAR_5++) {
  struct cache_entry *VAR_6 = VAR_1.cache[VAR_5];
  FUNC_4("%06o %s %d\t%s\n", VAR_6->ce_mode,
         FUNC_3(&VAR_6->oid), FUNC_0(VAR_6), VAR_6->name);
 }
 FUNC_4("replacements:");
 if (VAR_4->replace_bitmap)
  FUNC_2(VAR_4->replace_bitmap, VAR_0, ((void*)0));
 FUNC_4("\ndeletions:");
 if (VAR_4->delete_bitmap)
  FUNC_2(VAR_4->delete_bitmap, VAR_0, ((void*)0));
 FUNC_4("\n");
 return 0;
}
