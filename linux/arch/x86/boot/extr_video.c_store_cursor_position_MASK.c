
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct biosregs {int ah; int ch; int cl; int dh; int dl; } ;
struct TYPE_3__ {int flags; int orig_y; int orig_x; } ;
struct TYPE_4__ {TYPE_1__ screen_info; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (struct biosregs*) ;
 int FUNC_1 (int,struct biosregs*,struct biosregs*) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct biosregs VAR_2, VAR_3;

 FUNC_0(&VAR_2);
 VAR_2.ah = 0x03;
 FUNC_1(0x10, &VAR_2, &VAR_3);

 VAR_1.screen_info.orig_x = VAR_3.dl;
 VAR_1.screen_info.orig_y = VAR_3.dh;

 if (VAR_3.ch & 0x20)
  VAR_1.screen_info.flags |= VAR_0;

 if ((VAR_3.ch & 0x1f) > (VAR_3.cl & 0x1f))
  VAR_1.screen_info.flags |= VAR_0;
}
