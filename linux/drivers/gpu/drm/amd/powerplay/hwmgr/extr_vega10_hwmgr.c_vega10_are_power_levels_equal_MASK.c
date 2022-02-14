
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vega10_performance_level {scalar_t__ soc_clock; scalar_t__ gfx_clock; scalar_t__ mem_clock; } ;



__attribute__((used)) static inline bool FUNC_0(
    const struct vega10_performance_level *VAR_0,
    const struct vega10_performance_level *VAR_1)
{
 return ((VAR_0->soc_clock == VAR_1->soc_clock) &&
   (VAR_0->gfx_clock == VAR_1->gfx_clock) &&
   (VAR_0->mem_clock == VAR_1->mem_clock));
}
