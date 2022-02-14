
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fb_arg; int gc; int (* fb_render_cb ) (int ,int ) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,int ) ;

void
FUNC_1(void)
{
 if (VAR_0.fb_render_cb)
  (*VAR_0.fb_render_cb)(VAR_0.gc, VAR_0.fb_arg);
}
