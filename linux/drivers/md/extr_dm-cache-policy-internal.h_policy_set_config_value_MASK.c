
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_policy {int (* set_config_value ) (struct dm_cache_policy*,char const*,char const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct dm_cache_policy*,char const*,char const*) ;

__attribute__((used)) static inline int FUNC_1(struct dm_cache_policy *VAR_1,
       const char *VAR_2, const char *VAR_3)
{
 return VAR_1->set_config_value ? VAR_1->set_config_value(VAR_1, VAR_2, VAR_3) : -VAR_0;
}
