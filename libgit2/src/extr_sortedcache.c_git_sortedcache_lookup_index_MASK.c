
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sortedcache_magic_key {char const* key; int offset; } ;
struct TYPE_3__ {int items; int item_path_offset; } ;
typedef TYPE_1__ git_sortedcache ;


 int FUNC_0 (size_t*,int *,int ,struct sortedcache_magic_key*) ;
 int VAR_0 ;

int FUNC_1(
 size_t *VAR_1, git_sortedcache *VAR_2, const char *VAR_3)
{
 struct sortedcache_magic_key VAR_4;

 VAR_4.offset = VAR_2->item_path_offset;
 VAR_4.key = VAR_3;

 return FUNC_0(VAR_1, &VAR_2->items, VAR_0, &VAR_4);
}
