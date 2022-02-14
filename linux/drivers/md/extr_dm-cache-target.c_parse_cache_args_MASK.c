
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_arg_set {int argc; char** argv; } ;
struct cache_args {int dummy; } ;


 int FUNC_0 (struct cache_args*,struct dm_arg_set*,char**) ;
 int FUNC_1 (struct cache_args*,struct dm_arg_set*,char**) ;
 int FUNC_2 (struct cache_args*,struct dm_arg_set*,char**) ;
 int FUNC_3 (struct cache_args*,struct dm_arg_set*,char**) ;
 int FUNC_4 (struct cache_args*,struct dm_arg_set*,char**) ;
 int FUNC_5 (struct cache_args*,struct dm_arg_set*,char**) ;

__attribute__((used)) static int FUNC_6(struct cache_args *VAR_0, int VAR_1, char **VAR_2,
       char **VAR_3)
{
 int VAR_4;
 struct dm_arg_set VAR_5;

 VAR_5.argc = VAR_1;
 VAR_5.argv = VAR_2;

 VAR_4 = FUNC_3(VAR_0, &VAR_5, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_0, &VAR_5, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_4(VAR_0, &VAR_5, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_0, &VAR_5, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_0, &VAR_5, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_5(VAR_0, &VAR_5, VAR_3);
 if (VAR_4)
  return VAR_4;

 return 0;
}
