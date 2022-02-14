
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct traverse_info {int dummy; } ;
struct name_entry {int oid; int path; } ;
struct cache_tree {scalar_t__ entry_count; int oid; } ;


 struct cache_tree* FUNC_0 (struct cache_tree*,int ) ;
 struct cache_tree* FUNC_1 (struct cache_tree*,struct traverse_info*) ;
 scalar_t__ FUNC_2 (int *,int *) ;

int FUNC_3(struct cache_tree *VAR_0,
     struct name_entry *VAR_1,
     struct traverse_info *VAR_2)
{
 struct cache_tree *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_2);
 VAR_3 = FUNC_0(VAR_3, VAR_1->path);
 if (VAR_3 && VAR_3->entry_count > 0 && FUNC_2(&VAR_1->oid, &VAR_3->oid))
  return VAR_3->entry_count;
 return 0;
}
