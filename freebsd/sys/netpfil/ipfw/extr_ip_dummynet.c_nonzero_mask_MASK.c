
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__* __u6_addr32; } ;
struct TYPE_8__ {TYPE_3__ __u6_addr; } ;
struct TYPE_5__ {scalar_t__* __u6_addr32; } ;
struct TYPE_6__ {TYPE_1__ __u6_addr; } ;
struct ipfw_flow_id {scalar_t__ src_ip; scalar_t__ dst_ip; scalar_t__ flow_id6; TYPE_4__ src_ip6; TYPE_2__ dst_ip6; scalar_t__ extra; scalar_t__ proto; scalar_t__ src_port; scalar_t__ dst_port; } ;


 scalar_t__ FUNC_0 (struct ipfw_flow_id*) ;

__attribute__((used)) static int
FUNC_1(struct ipfw_flow_id *VAR_0)
{
 if (VAR_0->dst_port || VAR_0->src_port || VAR_0->proto || VAR_0->extra)
  return 1;
 if (FUNC_0(VAR_0)) {
  return
   VAR_0->dst_ip6.__u6_addr.__u6_addr32[0] ||
   VAR_0->dst_ip6.__u6_addr.__u6_addr32[1] ||
   VAR_0->dst_ip6.__u6_addr.__u6_addr32[2] ||
   VAR_0->dst_ip6.__u6_addr.__u6_addr32[3] ||
   VAR_0->src_ip6.__u6_addr.__u6_addr32[0] ||
   VAR_0->src_ip6.__u6_addr.__u6_addr32[1] ||
   VAR_0->src_ip6.__u6_addr.__u6_addr32[2] ||
   VAR_0->src_ip6.__u6_addr.__u6_addr32[3] ||
   VAR_0->flow_id6;
 } else {
  return VAR_0->dst_ip || VAR_0->src_ip;
 }
}
