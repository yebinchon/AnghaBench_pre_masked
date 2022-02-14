
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_policy {int (* emit_config_values ) (struct dm_cache_policy*,char*,unsigned int,int *) ;} ;
typedef int ssize_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct dm_cache_policy*,char*,unsigned int,int *) ;

__attribute__((used)) static inline int FUNC_2(struct dm_cache_policy *VAR_0, char *VAR_1,
         unsigned VAR_2, ssize_t *VAR_3)
{
 ssize_t VAR_4 = *VAR_3;
 if (VAR_0->emit_config_values)
  return VAR_0->emit_config_values(VAR_0, VAR_1, VAR_2, VAR_3);

 FUNC_0("0 ");
 *VAR_3 = VAR_4;
 return 0;
}
