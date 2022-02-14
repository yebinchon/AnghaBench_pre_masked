
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vega20_dpm_state {int soft_min_level; int hard_min_level; void* hard_max_level; void* soft_max_level; } ;


 void* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct vega20_dpm_state *VAR_1)
{
 VAR_1->soft_min_level = 0x0;
 VAR_1->soft_max_level = VAR_0;
 VAR_1->hard_min_level = 0x0;
 VAR_1->hard_max_level = VAR_0;
}
