
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_info {scalar_t__ scope; size_t type; } ;
typedef enum cache_type { ____Placeholder_cache_type } cache_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;

__attribute__((used)) static inline enum cache_type FUNC_0(struct cache_info *VAR_5, int VAR_6)
{
 if (VAR_6 >= VAR_0)
  return VAR_3;
 VAR_5 += VAR_6;
 if (VAR_5->scope != VAR_2 && VAR_5->scope != VAR_1)
  return VAR_3;
 return VAR_4[VAR_5->type];
}
