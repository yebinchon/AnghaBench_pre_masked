
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int t4 ;
struct ipfw_flow_id {int src_port; int dst_port; int src_ip; int dst_ip; } ;
typedef int in_addr_t ;


 scalar_t__ FUNC_0 (struct ipfw_flow_id const*) ;
 scalar_t__ FUNC_1 (struct ipfw_flow_id const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct ipfw_flow_id const*) ;
 int FUNC_3 (struct ipfw_flow_id const*) ;
 int FUNC_4 (int const*,int,int ) ;

__attribute__((used)) static __inline uint32_t
FUNC_5(const struct ipfw_flow_id *VAR_1)
{
 struct tuple4 {
  in_addr_t addr[2];
  uint16_t port[2];
 } VAR_2;

 if (FUNC_0(VAR_1)) {

  if (FUNC_2(VAR_1) == 0) {
   VAR_2[0] = VAR_1->src_ip;
   VAR_2[1] = VAR_1->dst_ip;
   VAR_2[0] = VAR_1->src_port;
   VAR_2[1] = VAR_1->dst_port;
  } else {
   VAR_2[0] = VAR_1->dst_ip;
   VAR_2[1] = VAR_1->src_ip;
   VAR_2[0] = VAR_1->dst_port;
   VAR_2[1] = VAR_1->src_port;
  }
  return (FUNC_4((const uint32_t *)&VAR_2,
      sizeof(VAR_2) / sizeof(uint32_t), VAR_0));
 } else




 return (0);
}
