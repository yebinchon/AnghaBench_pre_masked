
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct unpack_trees_options {TYPE_2__* src_index; TYPE_1__* dir; } ;
struct object_id {int dummy; } ;
struct dir_struct {int exclude_per_dir; } ;
typedef struct cache_entry {char* name; int oid; int ce_mode; } const cache_entry ;
typedef int d ;
struct TYPE_4__ {int cache_nr; struct cache_entry const** cache; } ;
struct TYPE_3__ {int exclude_per_dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct unpack_trees_options*,struct cache_entry const*,int ,int ) ;
 int FUNC_2 (struct unpack_trees_options*,int ,char*) ;
 int FUNC_3 (struct cache_entry const*) ;
 int FUNC_4 (struct cache_entry const*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct cache_entry const*,struct unpack_trees_options*) ;
 int FUNC_7 (struct cache_entry const*,struct unpack_trees_options*) ;
 int FUNC_8 (struct cache_entry const*,struct unpack_trees_options*) ;
 int FUNC_9 (struct dir_struct*,int ,int) ;
 int * FUNC_10 (struct object_id*) ;
 scalar_t__ FUNC_11 (struct object_id*,int *) ;
 int FUNC_12 (struct dir_struct*,TYPE_2__*,char*,int,int *) ;
 int FUNC_13 (char*,char*,struct object_id*) ;
 scalar_t__ FUNC_14 (char*,char*,int) ;
 int FUNC_15 (int *,struct cache_entry const*,struct unpack_trees_options*) ;
 scalar_t__ FUNC_16 (struct cache_entry const*,struct unpack_trees_options*) ;
 char* FUNC_17 (char*,int,char*) ;

__attribute__((used)) static int FUNC_18(const struct cache_entry *VAR_2,
         struct unpack_trees_options *VAR_3)
{




 int VAR_4;
 int VAR_5;
 struct dir_struct VAR_6;
 char *VAR_7;
 int VAR_8 = 0;

 if (FUNC_0(VAR_2->ce_mode)) {
  struct object_id VAR_9;
  int VAR_10 = FUNC_13(VAR_2->name, "HEAD", &VAR_9);




  if (!VAR_10 && FUNC_11(&VAR_9, &VAR_2->oid))
   return 0;
  return FUNC_15(VAR_10 ? ((void*)0) : FUNC_10(&VAR_9),
           VAR_2, VAR_3);
 }





 VAR_4 = FUNC_3(VAR_2);
 for (VAR_5 = FUNC_7(VAR_2, VAR_3);
      VAR_5 < VAR_3->src_index->cache_nr;
      VAR_5++) {
  struct cache_entry *VAR_11 = VAR_3->src_index->cache[VAR_5];
  int VAR_12 = FUNC_3(VAR_11);
  if (VAR_12 < VAR_4 ||
      FUNC_14(VAR_2->name, VAR_11->name, VAR_4) ||
      VAR_11->name[VAR_4] != '/')
   break;




  if (!FUNC_4(VAR_11)) {
   if (FUNC_16(VAR_11, VAR_3))
    return -1;
   FUNC_1(VAR_3, VAR_11, VAR_0, 0);
   FUNC_6(VAR_2, VAR_3);
   FUNC_8(VAR_11, VAR_3);
  }
  VAR_8++;
 }





 VAR_7 = FUNC_17("%.*s/", VAR_4, VAR_2->name);

 FUNC_9(&VAR_6, 0, sizeof(VAR_6));
 if (VAR_3->dir)
  VAR_6.exclude_per_dir = VAR_3->dir->exclude_per_dir;
 VAR_5 = FUNC_12(&VAR_6, VAR_3->src_index, VAR_7, VAR_4+1, ((void*)0));
 if (VAR_5)
  return FUNC_2(VAR_3, VAR_1, VAR_2->name);
 FUNC_5(VAR_7);
 return VAR_8;
}
