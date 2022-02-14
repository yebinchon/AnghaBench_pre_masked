
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct drm_framebuffer {size_t* pitches; struct drm_format_info* format; int height; struct drm_gem_object** obj; int width; } ;
struct komeda_fb {struct drm_framebuffer base; } ;
struct TYPE_3__ {size_t bus_width; } ;
struct komeda_dev {TYPE_1__ chip; } ;
struct drm_mode_fb_cmd2 {int * handles; } ;
struct drm_gem_object {scalar_t__ size; } ;
struct drm_format_info {size_t num_planes; } ;
struct drm_file {int dummy; } ;
struct TYPE_4__ {scalar_t__ paddr; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (struct drm_format_info const*,size_t) ;
 struct drm_gem_object* FUNC_2 (struct drm_file*,int ) ;
 scalar_t__ FUNC_3 (struct komeda_fb*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct komeda_fb*,int ,int ,size_t) ;
 TYPE_2__* FUNC_5 (struct drm_gem_object*) ;

__attribute__((used)) static int
FUNC_6(struct komeda_dev *VAR_2, struct komeda_fb *VAR_3,
          struct drm_file *VAR_4,
          const struct drm_mode_fb_cmd2 *VAR_5)
{
 struct drm_framebuffer *VAR_6 = &VAR_3->base;
 const struct drm_format_info *VAR_7 = VAR_6->format;
 struct drm_gem_object *VAR_8;
 u32 VAR_9, VAR_10;
 u64 VAR_11;

 if (FUNC_3(VAR_3, 0, 0, VAR_6->width, VAR_6->height))
  return -VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_7->num_planes; VAR_9++) {
  VAR_8 = FUNC_2(VAR_4, VAR_5->handles[VAR_9]);
  if (!VAR_8) {
   FUNC_0("Failed to lookup GEM object\n");
   return -VAR_1;
  }
  VAR_6->obj[VAR_9] = VAR_8;

  VAR_10 = FUNC_1(VAR_7, VAR_9);
  if ((VAR_6->pitches[VAR_9] * VAR_10) % VAR_2->chip.bus_width) {
   FUNC_0("Pitch[%d]: 0x%x doesn't align to 0x%x\n",
          VAR_9, VAR_6->pitches[VAR_9], VAR_2->chip.bus_width);
   return -VAR_0;
  }

  VAR_11 = FUNC_4(VAR_3, 0, VAR_6->height, VAR_9)
    - FUNC_5(VAR_8)->paddr;
  if (VAR_8->size < VAR_11) {
   FUNC_0("The fb->obj[%d] size: 0x%zx lower than the minimum requirement: 0x%llx.\n",
          VAR_9, VAR_8->size, VAR_11);
   return -VAR_0;
  }
 }

 if (VAR_6->format->num_planes == 3) {
  if (VAR_6->pitches[1] != VAR_6->pitches[2]) {
   FUNC_0("The pitch[1] and [2] are not same\n");
   return -VAR_0;
  }
 }

 return 0;
}
