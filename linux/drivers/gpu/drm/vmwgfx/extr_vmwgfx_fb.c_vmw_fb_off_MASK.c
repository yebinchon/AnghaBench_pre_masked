
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_private {struct fb_info* fb_info; } ;
struct TYPE_2__ {int active; int lock; } ;
struct vmw_fb_par {int local_work; TYPE_1__ dirty; } ;
struct fb_info {int deferred_work; struct vmw_fb_par* par; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct vmw_private *VAR_1)
{
 struct fb_info *VAR_2;
 struct vmw_fb_par *VAR_3;
 unsigned long VAR_4;

 if (!VAR_1->fb_info)
  return -VAR_0;

 VAR_2 = VAR_1->fb_info;
 VAR_3 = VAR_2->par;

 FUNC_1(&VAR_3->dirty.lock, VAR_4);
 VAR_3->dirty.active = 0;
 FUNC_2(&VAR_3->dirty.lock, VAR_4);

 FUNC_0(&VAR_2->deferred_work);
 FUNC_0(&VAR_3->local_work);

 return 0;
}
