
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree {int dummy; } ;
struct merge_options {int dummy; } ;
struct hashmap {int dummy; } ;
struct TYPE_2__ {int buf; } ;
struct dir_rename_entry {TYPE_1__ new_dir; int dir; } ;


 int FUNC_0 (char*) ;
 struct dir_rename_entry* FUNC_1 (char const*,struct hashmap*) ;
 struct dir_rename_entry* FUNC_2 (struct hashmap*,int ) ;
 char* FUNC_3 (struct merge_options*,char const*,struct dir_rename_entry*,struct hashmap*,struct tree*) ;
 int FUNC_4 (struct merge_options*,int,int ,int ,int ,char const*,int ) ;

__attribute__((used)) static char *FUNC_5(struct merge_options *VAR_0,
     const char *VAR_1,
     struct tree *VAR_2,
     struct hashmap *VAR_3,
     struct hashmap *VAR_4,
     struct hashmap *VAR_5,
     int *VAR_6)
{
 char *VAR_7 = ((void*)0);
 struct dir_rename_entry *VAR_8 = FUNC_1(VAR_1, VAR_3);
 struct dir_rename_entry *VAR_9 = ((void*)0);

 if (!VAR_8)
  return VAR_7;
 VAR_9 = FUNC_2(VAR_4, VAR_8->new_dir.buf);
 if (VAR_9) {
  FUNC_4(VAR_0, 1, FUNC_0("WARNING: Avoiding applying %s -> %s rename "
          "to %s, because %s itself was renamed."),
         VAR_8->dir, VAR_8->new_dir.buf, VAR_1, VAR_8->new_dir.buf);
 } else {
  VAR_7 = FUNC_3(VAR_0, VAR_1, VAR_8,
             VAR_5, VAR_2);
  *VAR_6 &= (VAR_7 != ((void*)0));
 }

 return VAR_7;
}
