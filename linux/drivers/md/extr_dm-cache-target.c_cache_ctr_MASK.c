
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {char* error; struct cache* private; } ;
struct cache_args {struct dm_target* ti; } ;
struct cache {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cache_args*,struct cache**) ;
 int FUNC_1 (struct cache*,unsigned int,char const**) ;
 int FUNC_2 (struct cache*) ;
 int FUNC_3 (struct cache_args*) ;
 struct cache_args* FUNC_4 (int,int ) ;
 int FUNC_5 (struct cache_args*,unsigned int,char**,char**) ;

__attribute__((used)) static int FUNC_6(struct dm_target *VAR_3, unsigned VAR_4, char **VAR_5)
{
 int VAR_6 = -VAR_0;
 struct cache_args *VAR_7;
 struct cache *VAR_8 = ((void*)0);

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_2);
 if (!VAR_7) {
  VAR_3->error = "Error allocating memory for cache";
  return -VAR_1;
 }
 VAR_7->ti = VAR_3;

 VAR_6 = FUNC_5(VAR_7, VAR_4, VAR_5, &VAR_3->error);
 if (VAR_6)
  goto out;

 VAR_6 = FUNC_0(VAR_7, &VAR_8);
 if (VAR_6)
  goto out;

 VAR_6 = FUNC_1(VAR_8, VAR_4 - 3, (const char **)VAR_5 + 3);
 if (VAR_6) {
  FUNC_2(VAR_8);
  goto out;
 }

 VAR_3->private = VAR_8;
out:
 FUNC_3(VAR_7);
 return VAR_6;
}
