
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_dp {int link_trained; int link_rate; int link_mst; int lane_count; } ;



void FUNC_0(struct intel_dp *VAR_0,
         int VAR_1, u8 VAR_2,
         bool VAR_3)
{
 VAR_0->link_trained = 0;
 VAR_0->link_rate = VAR_1;
 VAR_0->lane_count = VAR_2;
 VAR_0->link_mst = VAR_3;
}
