
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int on_disk; int tree_pool; int version; int reuc_search; int entries_search_path; int entries_search; int entries_cmp_path; int deleted; int reuc; int names; int entries_map; int entries; int index_file_path; } ;
typedef TYPE_1__ git_index ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__**) ;
 int VAR_1 ;
 TYPE_1__* FUNC_3 (int,int) ;
 int VAR_2 ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 scalar_t__ FUNC_11 (int *,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_12(git_index **VAR_8, const char *VAR_9)
{
 git_index *VAR_10;
 int VAR_11 = -1;

 FUNC_2(VAR_8);

 VAR_10 = FUNC_3(1, sizeof(git_index));
 FUNC_0(VAR_10);

 FUNC_10(&VAR_10->tree_pool, 1);

 if (VAR_9 != ((void*)0)) {
  VAR_10->index_file_path = FUNC_4(VAR_9);
  if (!VAR_10->index_file_path)
   goto fail;


  if (FUNC_8(VAR_10->index_file_path) == 1)
   VAR_10->on_disk = 1;
 }

 if (FUNC_11(&VAR_10->entries, 32, VAR_3) < 0 ||
     FUNC_5(&VAR_10->entries_map) < 0 ||
     FUNC_11(&VAR_10->names, 8, VAR_1) < 0 ||
     FUNC_11(&VAR_10->reuc, 8, VAR_6) < 0 ||
     FUNC_11(&VAR_10->deleted, 8, VAR_3) < 0)
  goto fail;

 VAR_10->entries_cmp_path = VAR_2;
 VAR_10->entries_search = VAR_4;
 VAR_10->entries_search_path = VAR_5;
 VAR_10->reuc_search = VAR_7;
 VAR_10->version = VAR_0;

 if (VAR_9 != ((void*)0) && (VAR_11 = FUNC_7(VAR_10, 1)) < 0)
  goto fail;

 *VAR_8 = VAR_10;
 FUNC_1(VAR_10);

 return 0;

fail:
 FUNC_9(&VAR_10->tree_pool);
 FUNC_6(VAR_10);
 return VAR_11;
}
