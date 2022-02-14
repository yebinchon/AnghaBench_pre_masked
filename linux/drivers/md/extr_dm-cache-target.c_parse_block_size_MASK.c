
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_arg_set {int dummy; } ;
struct cache_args {unsigned long cache_sectors; unsigned long block_size; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dm_arg_set*,char**) ;
 int FUNC_1 (struct dm_arg_set*) ;
 scalar_t__ FUNC_2 (int ,int,unsigned long*) ;

__attribute__((used)) static int FUNC_3(struct cache_args *VAR_3, struct dm_arg_set *VAR_4,
       char **VAR_5)
{
 unsigned long VAR_6;

 if (!FUNC_0(VAR_4, VAR_5))
  return -VAR_2;

 if (FUNC_2(FUNC_1(VAR_4), 10, &VAR_6) || !VAR_6 ||
     VAR_6 < VAR_1 ||
     VAR_6 > VAR_0 ||
     VAR_6 & (VAR_1 - 1)) {
  *VAR_5 = "Invalid data block size";
  return -VAR_2;
 }

 if (VAR_6 > VAR_3->cache_sectors) {
  *VAR_5 = "Data block size is larger than the cache device";
  return -VAR_2;
 }

 VAR_3->block_size = VAR_6;

 return 0;
}
