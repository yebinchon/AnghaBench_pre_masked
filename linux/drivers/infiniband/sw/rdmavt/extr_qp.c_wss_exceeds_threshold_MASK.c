
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_wss {scalar_t__ threshold; int total_count; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline bool FUNC_1(struct rvt_wss *VAR_0)
{
 return FUNC_0(&VAR_0->total_count) >= VAR_0->threshold;
}
