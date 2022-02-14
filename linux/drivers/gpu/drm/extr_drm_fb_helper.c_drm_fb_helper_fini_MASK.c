
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ len; } ;
struct fb_info {TYPE_2__ cmap; } ;
struct TYPE_6__ {int funcs; } ;
struct drm_fb_helper {TYPE_3__ client; int lock; int kernel_fb_list; struct fb_info* fbdev; int dirty_work; int resume_work; TYPE_1__* dev; } ;
struct TYPE_4__ {int * fb_helper; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct fb_info*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;
 int FUNC_9 (char,int *) ;

void FUNC_10(struct drm_fb_helper *VAR_4)
{
 struct fb_info *VAR_5;

 if (!VAR_4)
  return;

 VAR_4->dev->fb_helper = ((void*)0);

 if (!VAR_0)
  return;

 FUNC_0(&VAR_4->resume_work);
 FUNC_0(&VAR_4->dirty_work);

 VAR_5 = VAR_4->fbdev;
 if (VAR_5) {
  if (VAR_5->cmap.len)
   FUNC_2(&VAR_5->cmap);
  FUNC_3(VAR_5);
 }
 VAR_4->fbdev = ((void*)0);

 FUNC_7(&VAR_2);
 if (!FUNC_5(&VAR_4->kernel_fb_list)) {
  FUNC_4(&VAR_4->kernel_fb_list);
  if (FUNC_5(&VAR_1))
   FUNC_9('v', &VAR_3);
 }
 FUNC_8(&VAR_2);

 FUNC_6(&VAR_4->lock);

 if (!VAR_4->client.funcs)
  FUNC_1(&VAR_4->client);
}
