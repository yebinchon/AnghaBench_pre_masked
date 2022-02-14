
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; } ;
struct TYPE_5__ {scalar_t__ start_rule; scalar_t__ end_rule; scalar_t__ set; scalar_t__ new_set; int flags; TYPE_1__ head; } ;
typedef TYPE_2__ ipfw_range_tlv ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(ipfw_range_tlv *VAR_2)
{

 if (VAR_2->head.length != sizeof(*VAR_2))
  return (1);
 if (VAR_2->start_rule > VAR_2->end_rule)
  return (1);
 if (VAR_2->set >= VAR_0 || VAR_2->new_set >= VAR_0)
  return (1);

 if ((VAR_2->flags & VAR_1) != VAR_2->flags)
  return (1);

 return (0);
}
