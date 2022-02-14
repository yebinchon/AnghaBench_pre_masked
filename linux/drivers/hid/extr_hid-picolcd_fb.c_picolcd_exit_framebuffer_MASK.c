
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct picolcd_fb_data {int lock; int * picolcd; } ;
struct picolcd_data {struct fb_info* fb_info; TYPE_1__* hdev; } ;
struct fb_info {int deferred_work; struct picolcd_fb_data* par; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct fb_info*) ;

void FUNC_5(struct picolcd_data *VAR_1)
{
 struct fb_info *VAR_2 = VAR_1->fb_info;
 struct picolcd_fb_data *VAR_3;
 unsigned long VAR_4;

 if (!VAR_2)
  return;

 FUNC_0(&VAR_1->hdev->dev, &VAR_0);
 VAR_3 = VAR_2->par;


 FUNC_2(&VAR_3->lock, VAR_4);
 VAR_3->picolcd = ((void*)0);
 FUNC_3(&VAR_3->lock, VAR_4);




 FUNC_1(&VAR_2->deferred_work);

 VAR_1->fb_info = ((void*)0);
 FUNC_4(VAR_2);
}
