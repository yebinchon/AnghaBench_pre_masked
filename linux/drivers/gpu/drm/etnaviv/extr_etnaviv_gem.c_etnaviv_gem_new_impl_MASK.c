
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct etnaviv_gem_ops {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct etnaviv_gem_object {int flags; struct drm_gem_object base; int vram_list; int lock; struct etnaviv_gem_ops const* ops; } ;
struct drm_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int) ;
 struct etnaviv_gem_object* FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct drm_device *VAR_4, u32 VAR_5, u32 VAR_6,
 const struct etnaviv_gem_ops *VAR_7, struct drm_gem_object **VAR_8)
{
 struct etnaviv_gem_object *VAR_9;
 unsigned VAR_10 = sizeof(*VAR_9);
 bool VAR_11 = 1;


 switch (VAR_6 & VAR_2) {
 case 129:
 case 130:
 case 128:
  break;
 default:
  VAR_11 = 0;
 }

 if (!VAR_11) {
  FUNC_1(VAR_4->dev, "invalid cache flag: %x\n",
   (VAR_6 & VAR_2));
  return -VAR_0;
 }

 VAR_9 = FUNC_2(VAR_10, VAR_3);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->flags = VAR_6;
 VAR_9->ops = VAR_7;

 FUNC_3(&VAR_9->lock);
 FUNC_0(&VAR_9->vram_list);

 *VAR_8 = &VAR_9->base;

 return 0;
}
