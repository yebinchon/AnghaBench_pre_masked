
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ xres; scalar_t__ yres; } ;
struct fb_info {TYPE_3__* fbops; int screen_base; TYPE_1__ var; } ;
struct TYPE_10__ {struct fb_info* host_fbinfo; int metromem; } ;
struct TYPE_9__ {TYPE_2__* modes; } ;
struct TYPE_8__ {int owner; } ;
struct TYPE_7__ {scalar_t__ xres; scalar_t__ yres; } ;


 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_3)
{

 if ((VAR_3->var.xres != VAR_2.modes->xres)
  || (VAR_3->var.yres != VAR_2.modes->yres))
  return 0;


 VAR_1.metromem = VAR_3->screen_base;
 VAR_1.host_fbinfo = VAR_3;


 if (!FUNC_0(VAR_3->fbops->owner))
  return -VAR_0;

 return 0;
}
