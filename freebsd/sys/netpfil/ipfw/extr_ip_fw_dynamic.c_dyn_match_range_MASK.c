
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_3__ {int flags; scalar_t__ set; scalar_t__ start_rule; scalar_t__ end_rule; } ;
typedef TYPE_1__ ipfw_range_tlv ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(uint16_t VAR_4, uint8_t VAR_5, const ipfw_range_tlv *VAR_6)
{

 FUNC_0(VAR_6 != ((void*)0));

 if (VAR_6->flags & VAR_0) {
  if (VAR_6->flags & VAR_1)
   return (2);
  return (1);
 }
 if ((VAR_6->flags & VAR_3) != 0 && VAR_5 != VAR_6->set)
  return (0);
 if ((VAR_6->flags & VAR_2) != 0 &&
     (VAR_4 < VAR_6->start_rule || VAR_4 > VAR_6->end_rule))
  return (0);
 if (VAR_6->flags & VAR_1)
  return (2);
 return (1);
}
