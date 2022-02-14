
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arcturus_dpm_state {int soft_min_level; int soft_max_level; int hard_min_level; int hard_max_level; } ;



__attribute__((used)) static void FUNC_0(struct arcturus_dpm_state *VAR_0)
{
 VAR_0->soft_min_level = 0x0;
 VAR_0->soft_max_level = 0xffff;
        VAR_0->hard_min_level = 0x0;
        VAR_0->hard_max_level = 0xffff;
}
