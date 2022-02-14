
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_hwmod {int flags; scalar_t__ _state; scalar_t__ clkdm; TYPE_1__* class; int name; int _int_flags; } ;
struct TYPE_4__ {int (* disable_module ) (struct omap_hwmod*) ;} ;
struct TYPE_3__ {scalar_t__ sysc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (struct omap_hwmod*) ;
 int FUNC_2 (struct omap_hwmod*,int ) ;
 int FUNC_3 (struct omap_hwmod*) ;
 int FUNC_4 (struct omap_hwmod*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,struct omap_hwmod*) ;
 int FUNC_8 (int) ;
 int VAR_7 ;
 int FUNC_9 (char*,int ) ;
 TYPE_2__ VAR_8 ;
 int FUNC_10 (struct omap_hwmod*) ;

__attribute__((used)) static int FUNC_11(struct omap_hwmod *VAR_9)
{
 if (VAR_9->flags & VAR_3) {
  VAR_9->_int_flags |= VAR_4;
  return 0;
 }

 FUNC_9("omap_hwmod: %s: idling\n", VAR_9->name);

 if (FUNC_1(VAR_9))
  return 0;

 if (VAR_9->_state != VAR_5) {
  FUNC_0(1, "omap_hwmod: %s: idle state can only be entered from enabled state\n",
   VAR_9->name);
  return -VAR_0;
 }

 if (VAR_9->class->sysc)
  FUNC_4(VAR_9);
 FUNC_2(VAR_9, VAR_7);






 if (VAR_9->clkdm && !(VAR_9->flags & VAR_2))
  FUNC_6(VAR_9->clkdm);

 if (VAR_9->flags & VAR_1)
  FUNC_8(0);
 if (VAR_8.disable_module)
  VAR_8.disable_module(VAR_9);







 FUNC_3(VAR_9);
 if (VAR_9->clkdm) {
  FUNC_5(VAR_9->clkdm);
  FUNC_7(VAR_9->clkdm, VAR_9);
 }

 VAR_9->_state = VAR_6;

 return 0;
}
