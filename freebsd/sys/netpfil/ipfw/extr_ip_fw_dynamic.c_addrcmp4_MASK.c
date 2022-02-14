
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipfw_flow_id {scalar_t__ src_ip; scalar_t__ dst_ip; scalar_t__ src_port; scalar_t__ dst_port; } ;



__attribute__((used)) static __inline int
FUNC_0(const struct ipfw_flow_id *VAR_0)
{

 if (VAR_0->src_ip < VAR_0->dst_ip)
  return (0);
 if (VAR_0->src_ip > VAR_0->dst_ip)
  return (1);
 if (VAR_0->src_port <= VAR_0->dst_port)
  return (0);
 return (1);
}
