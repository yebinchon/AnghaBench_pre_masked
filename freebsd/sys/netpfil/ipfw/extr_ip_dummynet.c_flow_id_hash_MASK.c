
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ipfw_flow_id {int dst_port; int src_port; int extra; int proto; int flow_id6; int dst_ip; int src_ip; int src_ip6; int dst_ip6; } ;


 scalar_t__ FUNC_0 (struct ipfw_flow_id*) ;

__attribute__((used)) static uint32_t
FUNC_1(struct ipfw_flow_id *VAR_0)
{
    uint32_t VAR_1;

    if (FUNC_0(VAR_0)) {
 uint32_t *VAR_2 = (uint32_t *)&VAR_0->dst_ip6;
 uint32_t *VAR_3 = (uint32_t *)&VAR_0->src_ip6;
        VAR_1 = (VAR_2[0] ) ^ (VAR_2[1]) ^
            (VAR_2[2] ) ^ (VAR_2[3]) ^
            (VAR_2[0] >> 15) ^ (VAR_2[1] >> 15) ^
            (VAR_2[2] >> 15) ^ (VAR_2[3] >> 15) ^
            (VAR_3[0] << 1) ^ (VAR_3[1] << 1) ^
            (VAR_3[2] << 1) ^ (VAR_3[3] << 1) ^
            (VAR_3[0] << 16) ^ (VAR_3[1] << 16) ^
            (VAR_3[2] << 16) ^ (VAR_3[3] << 16) ^
            (VAR_0->dst_port << 1) ^ (VAR_0->src_port) ^
     (VAR_0->extra) ^
            (VAR_0->proto ) ^ (VAR_0->flow_id6);
    } else {
        VAR_1 = (VAR_0->dst_ip) ^ (VAR_0->dst_ip >> 15) ^
            (VAR_0->src_ip << 1) ^ (VAR_0->src_ip >> 16) ^
     (VAR_0->extra) ^
            (VAR_0->dst_port << 1) ^ (VAR_0->src_port) ^ (VAR_0->proto);
    }
    return VAR_1;
}
