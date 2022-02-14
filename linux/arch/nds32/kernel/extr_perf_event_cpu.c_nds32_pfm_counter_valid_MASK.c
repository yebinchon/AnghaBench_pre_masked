
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nds32_pmu {int num_events; } ;



__attribute__((used)) static inline int FUNC_0(struct nds32_pmu *VAR_0, int VAR_1)
{
 return ((VAR_1 >= 0) && (VAR_1 < VAR_0->num_events));
}
