
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct region {scalar_t__ base; scalar_t__ limit; int enabled; } ;



__attribute__((used)) static bool FUNC_0(struct region *VAR_0, u64 VAR_1)
{
 if (!VAR_0->enabled)
  return 0;

 return VAR_0->base <= VAR_1 && VAR_1 <= VAR_0->limit;
}
