
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_arg_set {int dummy; } ;
struct cache_args {int cache_dev; int cache_sectors; int ti; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dm_arg_set*,char**) ;
 int FUNC_1 (int ,int ,int,int *) ;
 int FUNC_2 (struct dm_arg_set*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct cache_args *VAR_3, struct dm_arg_set *VAR_4,
      char **VAR_5)
{
 int VAR_6;

 if (!FUNC_0(VAR_4, VAR_5))
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_3->ti, FUNC_2(VAR_4), VAR_1 | VAR_2,
     &VAR_3->cache_dev);
 if (VAR_6) {
  *VAR_5 = "Error opening cache device";
  return VAR_6;
 }
 VAR_3->cache_sectors = FUNC_3(VAR_3->cache_dev);

 return 0;
}
