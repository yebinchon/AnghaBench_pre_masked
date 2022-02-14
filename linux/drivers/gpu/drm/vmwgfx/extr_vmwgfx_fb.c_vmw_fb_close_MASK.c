
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {struct fb_info* fb_info; } ;
struct vmw_fb_par {int vmalloc; int bo_mutex; int local_work; } ;
struct fb_info {struct vmw_fb_par* par; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct fb_info*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct vmw_fb_par*,int,int) ;

int FUNC_8(struct vmw_private *VAR_0)
{
 struct fb_info *VAR_1;
 struct vmw_fb_par *VAR_2;

 if (!VAR_0->fb_info)
  return 0;

 VAR_1 = VAR_0->fb_info;
 VAR_2 = VAR_1->par;


 FUNC_1(VAR_1);
 FUNC_0(&VAR_2->local_work);
 FUNC_5(VAR_1);

 FUNC_3(&VAR_2->bo_mutex);
 (void) FUNC_7(VAR_2, 1, 1);
 FUNC_4(&VAR_2->bo_mutex);

 FUNC_6(VAR_2->vmalloc);
 FUNC_2(VAR_1);

 return 0;
}
