
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct picolcd_fb_data {int force; int lock; struct picolcd_data* picolcd; int vbitmap; int bpp; int bitmap; int ready; } ;
struct picolcd_data {int hdev; } ;
struct fb_info {int lock; struct picolcd_fb_data* par; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct picolcd_data*,int ) ;
 scalar_t__ FUNC_4 (struct picolcd_data*,int ,int,int) ;
 int FUNC_5 (int ,int ,int ,int,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct fb_info *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 unsigned long VAR_5;
 struct picolcd_fb_data *VAR_6 = VAR_1->par;
 struct picolcd_data *VAR_7;

 FUNC_1(&VAR_1->lock);

 FUNC_6(&VAR_6->lock, VAR_5);
 if (!VAR_6->ready && VAR_6->picolcd)
  FUNC_3(VAR_6->picolcd, 0);
 FUNC_7(&VAR_6->lock, VAR_5);
 VAR_4 = 0;
 for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
  for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
   if (!VAR_6->force && !FUNC_5(
     VAR_6->vbitmap, VAR_6->bitmap,
     VAR_6->bpp, VAR_2, VAR_3))
    continue;
   VAR_4 += 2;
   if (VAR_4 >= VAR_0 / 2) {
    FUNC_6(&VAR_6->lock, VAR_5);
    VAR_7 = VAR_6->picolcd;
    FUNC_7(&VAR_6->lock, VAR_5);
    FUNC_2(&VAR_1->lock);
    if (!VAR_7)
     return;
    FUNC_0(VAR_7->hdev);
    FUNC_1(&VAR_1->lock);
    VAR_4 = 0;
   }
   FUNC_6(&VAR_6->lock, VAR_5);
   VAR_7 = VAR_6->picolcd;
   FUNC_7(&VAR_6->lock, VAR_5);
   if (!VAR_7 || FUNC_4(VAR_7,
     VAR_6->vbitmap, VAR_2, VAR_3))
    goto out;
  }
 VAR_6->force = 0;
 if (VAR_4) {
  FUNC_6(&VAR_6->lock, VAR_5);
  VAR_7 = VAR_6->picolcd;
  FUNC_7(&VAR_6->lock, VAR_5);
  FUNC_2(&VAR_1->lock);
  if (VAR_7)
   FUNC_0(VAR_7->hdev);
  return;
 }
out:
 FUNC_2(&VAR_1->lock);
}
