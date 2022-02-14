
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipfw_flow_id {int dummy; } ;
struct TYPE_2__ {struct ipfw_flow_id fid; } ;
struct dn_queue {TYPE_1__ ni; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ipfw_flow_id*,struct ipfw_flow_id*) ;

__attribute__((used)) static int
FUNC_1(void *VAR_1, uintptr_t VAR_2, int VAR_3, void *VAR_4)
{
 struct dn_queue *VAR_5 = (struct dn_queue *)VAR_1;
 struct ipfw_flow_id *VAR_6;

 if (VAR_3 & VAR_0) {

  VAR_6 = &((struct dn_queue *)VAR_2)->ni.fid;
 } else {
  VAR_6 = (struct ipfw_flow_id *)VAR_2;
 }
 return (0 == FUNC_0(&VAR_5->ni.fid, VAR_6));
}
