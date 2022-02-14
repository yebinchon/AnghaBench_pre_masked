
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dm_cache_policy {int (* get_hint ) (struct dm_cache_policy*,int ) ;} ;
typedef int dm_cblock_t ;


 int FUNC_0 (struct dm_cache_policy*,int ) ;

__attribute__((used)) static inline uint32_t FUNC_1(struct dm_cache_policy *VAR_0,
           dm_cblock_t VAR_1)
{
 return VAR_0->get_hint ? VAR_0->get_hint(VAR_0, VAR_1) : 0;
}
