
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ip_fw {scalar_t__ rulenum; scalar_t__ set; } ;
struct TYPE_3__ {int flags; scalar_t__ set; scalar_t__ start_rule; scalar_t__ end_rule; } ;
typedef TYPE_1__ ipfw_range_tlv ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

int
FUNC_0(struct ip_fw *VAR_6, ipfw_range_tlv *VAR_7)
{


 if (VAR_6->rulenum == VAR_0 &&
     (VAR_7->flags & VAR_2) == 0)
  return (0);


 if ((VAR_7->flags & VAR_1) != 0 && VAR_6->set == VAR_5)
  return (0);


 if ((VAR_7->flags & VAR_4) != 0 && VAR_6->set != VAR_7->set)
  return (0);

 if ((VAR_7->flags & VAR_3) != 0 &&
     (VAR_6->rulenum < VAR_7->start_rule || VAR_6->rulenum > VAR_7->end_rule))
  return (0);

 return (1);
}
