
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int deferred_work; int par; } ;
struct fb_copyarea {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct fb_info*,struct fb_copyarea const*) ;

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_0,
  const struct fb_copyarea *VAR_1)
{
 if (!VAR_0->par)
  return;
 FUNC_1(VAR_0, VAR_1);

 FUNC_0(&VAR_0->deferred_work, 0);
}
