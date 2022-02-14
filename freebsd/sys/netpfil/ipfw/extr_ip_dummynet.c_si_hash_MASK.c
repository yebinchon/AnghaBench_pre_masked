
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ipfw_flow_id {int dummy; } ;
struct TYPE_2__ {struct ipfw_flow_id fid; } ;
struct dn_sch_inst {TYPE_1__ ni; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipfw_flow_id*) ;

__attribute__((used)) static uint32_t
FUNC_1(uintptr_t VAR_1, int VAR_2, void *VAR_3)
{

 struct ipfw_flow_id *VAR_4 = (VAR_2 & VAR_0) ?
  &((struct dn_sch_inst *)VAR_1)->ni.fid :
  (struct ipfw_flow_id *)VAR_1;

 return FUNC_0(VAR_4);
}
