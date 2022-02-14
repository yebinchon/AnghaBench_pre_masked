
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cacheinfo {unsigned int level; int type; } ;
typedef enum cache_type { ____Placeholder_cache_type } cache_type ;



__attribute__((used)) static void FUNC_0(struct cacheinfo *VAR_0,
    enum cache_type VAR_1, unsigned int VAR_2)
{
 VAR_0->level = VAR_2;
 VAR_0->type = VAR_1;
}
