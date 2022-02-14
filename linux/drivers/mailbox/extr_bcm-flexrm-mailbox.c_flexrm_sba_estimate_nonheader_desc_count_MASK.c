
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {size_t cmds_count; TYPE_1__* cmds; } ;
struct brcm_message {TYPE_2__ sba; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u32 FUNC_0(struct brcm_message *VAR_4)
{
 u32 VAR_5, VAR_6;

 VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_4->sba.cmds_count; VAR_5++) {
  VAR_6++;

  if ((VAR_4->sba.cmds[VAR_5].flags & VAR_2) ||
      (VAR_4->sba.cmds[VAR_5].flags & VAR_3))
   VAR_6++;

  if (VAR_4->sba.cmds[VAR_5].flags & VAR_1)
   VAR_6++;

  if (VAR_4->sba.cmds[VAR_5].flags & VAR_0)
   VAR_6++;
 }

 return VAR_6;
}
