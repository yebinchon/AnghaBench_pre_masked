
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union ib_flow_spec {scalar_t__ type; } ;
struct TYPE_4__ {int dst_ip; } ;
struct ib_flow_spec_ipv4 {TYPE_1__ val; } ;
struct TYPE_6__ {int dst_mac; } ;
struct TYPE_5__ {int dst_mac; } ;
struct ib_flow_spec_eth {TYPE_3__ val; TYPE_2__ mask; } ;
struct ib_flow_attr {scalar_t__ type; int num_of_specs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(const struct ib_flow_attr *VAR_3)
{
 union ib_flow_spec *VAR_4;

 if (VAR_3->type != VAR_0 ||
     VAR_3->num_of_specs < 1)
  return 0;

 VAR_4 = (union ib_flow_spec *)(VAR_3 + 1);
 if (VAR_4->type == VAR_2) {
  struct ib_flow_spec_ipv4 *VAR_5;

  VAR_5 = (struct ib_flow_spec_ipv4 *)VAR_4;
  if (FUNC_0(VAR_5->val.dst_ip))
   return 1;

  return 0;
 }

 if (VAR_4->type == VAR_1) {
  struct ib_flow_spec_eth *VAR_6;

  VAR_6 = (struct ib_flow_spec_eth *)VAR_4;
  return FUNC_1(VAR_6->mask.dst_mac) &&
         FUNC_1(VAR_6->val.dst_mac);
 }

 return 0;
}
