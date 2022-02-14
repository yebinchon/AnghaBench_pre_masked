
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qxl_device {int dummy; } ;
struct qxl_bo {int is_primary; TYPE_1__* shadow; } ;
struct drm_framebuffer {TYPE_2__* dev; int height; int width; int * obj; } ;
struct drm_file {int dummy; } ;
struct drm_clip_rect {int y2; int x2; scalar_t__ y1; scalar_t__ x1; } ;
struct TYPE_5__ {struct qxl_device* dev_private; } ;
struct TYPE_4__ {int is_primary; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 struct qxl_bo* FUNC_2 (int ) ;
 int FUNC_3 (struct qxl_device*,struct drm_framebuffer*,struct qxl_bo*,unsigned int,unsigned int,struct drm_clip_rect*,unsigned int,int,int ) ;

__attribute__((used)) static int FUNC_4(struct drm_framebuffer *VAR_1,
      struct drm_file *VAR_2,
      unsigned int VAR_3, unsigned int VAR_4,
      struct drm_clip_rect *VAR_5,
      unsigned int VAR_6)
{

 struct qxl_device *VAR_7 = VAR_1->dev->dev_private;
 struct drm_clip_rect VAR_8;
 struct qxl_bo *VAR_9;
 bool VAR_10;
 int VAR_11 = 1;

 FUNC_0(VAR_1->dev);

 VAR_9 = FUNC_2(VAR_1->obj[0]);

 VAR_10 = VAR_9->shadow ? VAR_9->shadow->is_primary : VAR_9->is_primary;
 if (!VAR_10) {
  FUNC_1(VAR_1->dev);
  return 0;
 }

 if (!VAR_6) {
  VAR_6 = 1;
  VAR_5 = &VAR_8;
  VAR_8.x1 = VAR_8.y1 = 0;
  VAR_8.x2 = VAR_1->width;
  VAR_8.y2 = VAR_1->height;
 } else if (VAR_3 & VAR_0) {
  VAR_6 /= 2;
  VAR_11 = 2;
 }

 FUNC_3(VAR_7, VAR_1, VAR_9, VAR_3, VAR_4,
     VAR_5, VAR_6, VAR_11, 0);

 FUNC_1(VAR_1->dev);

 return 0;
}
