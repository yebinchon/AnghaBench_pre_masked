
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct cacheinfo {unsigned int level; int type; } ;
typedef enum cache_type { ____Placeholder_cache_type } cache_type ;



__attribute__((used)) static void FUNC_0(struct cacheinfo *VAR_0,
    struct device_node *VAR_1,
    enum cache_type VAR_2, unsigned int VAR_3)
{
 VAR_0->level = VAR_3;
 VAR_0->type = VAR_2;
}
