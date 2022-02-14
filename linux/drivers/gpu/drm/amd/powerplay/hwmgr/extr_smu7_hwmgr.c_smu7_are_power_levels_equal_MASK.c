
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu7_performance_level {scalar_t__ memory_clock; scalar_t__ engine_clock; scalar_t__ pcie_gen; scalar_t__ pcie_lane; } ;



__attribute__((used)) static inline bool FUNC_0(const struct smu7_performance_level *VAR_0,
          const struct smu7_performance_level *VAR_1)
{
 return ((VAR_0->memory_clock == VAR_1->memory_clock) &&
    (VAR_0->engine_clock == VAR_1->engine_clock) &&
    (VAR_0->pcie_gen == VAR_1->pcie_gen) &&
    (VAR_0->pcie_lane == VAR_1->pcie_lane));
}
