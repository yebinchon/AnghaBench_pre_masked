
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videomode {int flags; int vback_porch; int vfront_porch; int vsync_len; int hback_porch; int hfront_porch; int hsync_len; int pixelclock; int vactive; int hactive; } ;
struct dispc_device {int dummy; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dispc_device*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct dispc_device*,int,int ) ;
 int FUNC_2 (struct dispc_device*,int ,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct dispc_device *VAR_3,
       enum omap_channel VAR_4,
       const struct videomode *VAR_5)
{
 if (!FUNC_2(VAR_3, VAR_5->hactive, VAR_5->vactive))
  return VAR_1;

 if (!FUNC_1(VAR_3, VAR_4, VAR_5->pixelclock))
  return VAR_1;

 if (FUNC_3(VAR_4)) {

  if (VAR_5->flags & VAR_0)
   return VAR_1;

  if (!FUNC_0(VAR_3, VAR_5->hsync_len,
    VAR_5->hfront_porch, VAR_5->hback_porch,
    VAR_5->vsync_len, VAR_5->vfront_porch,
    VAR_5->vback_porch))
   return VAR_1;
 }

 return VAR_2;
}
