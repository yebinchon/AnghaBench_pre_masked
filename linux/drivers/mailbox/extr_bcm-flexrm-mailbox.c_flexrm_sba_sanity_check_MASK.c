
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {size_t cmds_count; TYPE_1__* cmds; } ;
struct brcm_message {TYPE_2__ sba; } ;
struct TYPE_3__ {int flags; scalar_t__ data_len; scalar_t__ resp_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static bool FUNC_0(struct brcm_message *VAR_6)
{
 u32 VAR_7;

 if (!VAR_6->sba.cmds || !VAR_6->sba.cmds_count)
  return 0;

 for (VAR_7 = 0; VAR_7 < VAR_6->sba.cmds_count; VAR_7++) {
  if (((VAR_6->sba.cmds[VAR_7].flags & VAR_2) ||
       (VAR_6->sba.cmds[VAR_7].flags & VAR_3)) &&
      (VAR_6->sba.cmds[VAR_7].flags & VAR_0))
   return 0;
  if ((VAR_6->sba.cmds[VAR_7].flags & VAR_2) &&
      (VAR_6->sba.cmds[VAR_7].data_len > VAR_5))
   return 0;
  if ((VAR_6->sba.cmds[VAR_7].flags & VAR_3) &&
      (VAR_6->sba.cmds[VAR_7].data_len > VAR_5))
   return 0;
  if ((VAR_6->sba.cmds[VAR_7].flags & VAR_1) &&
      (VAR_6->sba.cmds[VAR_7].resp_len > VAR_4))
   return 0;
  if ((VAR_6->sba.cmds[VAR_7].flags & VAR_0) &&
      (VAR_6->sba.cmds[VAR_7].data_len > VAR_4))
   return 0;
 }

 return 1;
}
