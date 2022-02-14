
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool_c {struct pool* pool; } ;
struct pool {int dummy; } ;
struct dm_target {struct pool_c* private; } ;


 int FUNC_0 (struct pool*,struct dm_target*) ;
 int FUNC_1 (struct pool*) ;
 int FUNC_2 (struct dm_target*,int*) ;
 int FUNC_3 (struct dm_target*,int*) ;

__attribute__((used)) static int FUNC_4(struct dm_target *VAR_0)
{
 int VAR_1;
 bool VAR_2, VAR_3;
 struct pool_c *VAR_4 = VAR_0->private;
 struct pool *VAR_5 = VAR_4->pool;




 VAR_1 = FUNC_0(VAR_5, VAR_0);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_2(VAR_0, &VAR_2);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_3(VAR_0, &VAR_3);
 if (VAR_1)
  return VAR_1;

 if (VAR_2 || VAR_3)
  (void) FUNC_1(VAR_5);

 return 0;
}
