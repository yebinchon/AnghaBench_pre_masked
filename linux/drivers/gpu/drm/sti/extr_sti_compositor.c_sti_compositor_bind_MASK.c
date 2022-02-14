
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sti_private {struct sti_compositor* compo; } ;
struct sti_compositor_subdev_descriptor {int type; scalar_t__ offset; int id; } ;
struct TYPE_2__ {unsigned int nb_subdev; struct sti_compositor_subdev_descriptor* subdev_desc; } ;
struct sti_compositor {int * mixer; scalar_t__ regs; int dev; int * vid; TYPE_1__ data; } ;
struct drm_plane {int dummy; } ;
struct drm_device {int irq_enabled; struct sti_private* dev_private; } ;
struct device {int dummy; } ;
typedef enum drm_plane_type { ____Placeholder_drm_plane_type } drm_plane_type ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;





 struct sti_compositor* FUNC_1 (struct device*) ;
 int FUNC_2 (struct drm_device*,unsigned int) ;
 int FUNC_3 (struct drm_device*,int ,struct drm_plane*,struct drm_plane*) ;
 struct drm_plane* FUNC_4 (struct drm_device*,int ,int ,scalar_t__,int) ;
 struct drm_plane* FUNC_5 (struct drm_device*,int ,int ,scalar_t__,int,int) ;
 int FUNC_6 (int ,struct drm_device*,int ,scalar_t__) ;
 int FUNC_7 (int ,struct drm_device*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_2,
          struct device *VAR_3,
          void *VAR_4)
{
 struct sti_compositor *VAR_5 = FUNC_1(VAR_2);
 struct drm_device *VAR_6 = VAR_4;
 unsigned int VAR_7, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
 struct sti_private *VAR_11 = VAR_6->dev_private;
 struct drm_plane *VAR_12 = ((void*)0);
 struct drm_plane *VAR_13 = ((void*)0);
 struct sti_compositor_subdev_descriptor *VAR_14 = VAR_5->data.subdev_desc;
 unsigned int VAR_15 = VAR_5->data.nb_subdev;

 VAR_11->compo = VAR_5;


 for (VAR_7 = 0; VAR_7 < VAR_15; VAR_7++) {
  switch (VAR_14[VAR_7].type) {
  case 128:
   VAR_5->vid[VAR_9++] =
       FUNC_7(VAR_5->dev, VAR_6, VAR_14[VAR_7].id,
        VAR_5->regs + VAR_14[VAR_7].offset);
   break;
  case 129:
  case 130:
   VAR_5->mixer[VAR_8++] =
       FUNC_6(VAR_5->dev, VAR_6, VAR_14[VAR_7].id,
          VAR_5->regs + VAR_14[VAR_7].offset);
   break;
  case 131:
  case 132:

   break;
  default:
   FUNC_0("Unknown subdev component type\n");
   return 1;
  }
 }


 for (VAR_7 = 0; VAR_7 < VAR_15; VAR_7++) {
  enum drm_plane_type VAR_16 = VAR_0;

  if (VAR_10 < VAR_8)
   VAR_16 = VAR_1;

  switch (VAR_14[VAR_7].type) {
  case 129:
  case 130:
  case 128:

   break;
  case 132:
   VAR_12 = FUNC_4(VAR_6, VAR_5->dev,
         VAR_14[VAR_7].id,
         VAR_5->regs + VAR_14[VAR_7].offset,
         1);
   if (!VAR_12) {
    FUNC_0("Can't create CURSOR plane\n");
    break;
   }
   break;
  case 131:
   VAR_13 = FUNC_5(VAR_6, VAR_5->dev,
       VAR_14[VAR_7].id,
       VAR_5->regs + VAR_14[VAR_7].offset,
       (1 << VAR_8) - 1,
       VAR_16);
   if (!VAR_13) {
    FUNC_0("Can't create GDP plane\n");
    break;
   }
   break;
  default:
   FUNC_0("Unknown subdev component type\n");
   return 1;
  }


  if (VAR_10 < VAR_8 && VAR_13) {
   FUNC_3(VAR_6, VAR_5->mixer[VAR_10],
          VAR_13, VAR_12);
   VAR_10++;
   VAR_12 = ((void*)0);
   VAR_13 = ((void*)0);
  }
 }

 FUNC_2(VAR_6, VAR_10);

 VAR_6->irq_enabled = 1;

 return 0;
}
