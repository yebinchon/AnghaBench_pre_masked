
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mce {int status; int misc; } ;
struct TYPE_2__ {scalar_t__ x86_vendor; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;

int FUNC_2(struct mce *VAR_6)
{
 if (!(VAR_6->status & VAR_1))
  return 0;


 if (VAR_5.x86_vendor != VAR_4)
  return 1;

 if (!(VAR_6->status & VAR_2))
  return 0;

 if (FUNC_0(VAR_6->misc) > VAR_3)
  return 0;

 if (FUNC_1(VAR_6->misc) != VAR_0)
  return 0;

 return 1;
}
