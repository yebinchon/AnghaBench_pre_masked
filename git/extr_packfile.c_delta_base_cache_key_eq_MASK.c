
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delta_base_cache_key {scalar_t__ p; scalar_t__ base_offset; } ;



__attribute__((used)) static int FUNC_0(const struct delta_base_cache_key *VAR_0,
       const struct delta_base_cache_key *VAR_1)
{
 return VAR_0->p == VAR_1->p && VAR_0->base_offset == VAR_1->base_offset;
}
