
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct drm_framebuffer {int modifier; TYPE_2__* format; TYPE_1__* dev; } ;
struct komeda_fb {struct drm_framebuffer base; } ;
struct komeda_dev {int fmt_tbl; } ;
struct TYPE_4__ {int format; } ;
struct TYPE_3__ {struct komeda_dev* dev_private; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;

bool FUNC_3(struct komeda_fb *VAR_0, u32 VAR_1,
      u32 VAR_2)
{
 struct drm_framebuffer *VAR_3 = &VAR_0->base;
 struct komeda_dev *VAR_4 = VAR_3->dev->dev_private;
 u32 VAR_5 = VAR_3->format->format;
 u64 VAR_6 = VAR_3->modifier;
 bool VAR_7;

 VAR_7 = FUNC_1(&VAR_4->fmt_tbl, VAR_1,
      VAR_5, VAR_6, VAR_2);
 if (!VAR_7)
  FUNC_0("Layer TYPE: %d doesn't support fb FMT: %s.\n",
   VAR_1, FUNC_2(VAR_5, VAR_6));

 return VAR_7;
}
