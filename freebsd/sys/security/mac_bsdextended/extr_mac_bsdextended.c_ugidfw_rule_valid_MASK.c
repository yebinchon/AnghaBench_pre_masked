
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mbo_flags; int mbo_neg; int mbo_type; } ;
struct TYPE_3__ {int mbs_flags; int mbs_neg; } ;
struct mac_bsdextended_rule {int mbr_mode; TYPE_2__ mbr_object; TYPE_1__ mbr_subject; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_0(struct mac_bsdextended_rule *VAR_6)
{

 if ((VAR_6->mbr_subject.mbs_flags | VAR_5) != VAR_5)
  return (VAR_0);
 if ((VAR_6->mbr_subject.mbs_neg | VAR_5) != VAR_5)
  return (VAR_0);
 if ((VAR_6->mbr_object.mbo_flags | VAR_2) != VAR_2)
  return (VAR_0);
 if ((VAR_6->mbr_object.mbo_neg | VAR_2) != VAR_2)
  return (VAR_0);
 if (((VAR_6->mbr_object.mbo_flags & VAR_4) != 0) &&
     (VAR_6->mbr_object.mbo_type | VAR_3) != VAR_3)
  return (VAR_0);
 if ((VAR_6->mbr_mode | VAR_1) != VAR_1)
  return (VAR_0);
 return (0);
}
