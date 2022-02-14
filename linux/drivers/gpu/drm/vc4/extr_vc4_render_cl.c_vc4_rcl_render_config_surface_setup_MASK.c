
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct vc4_rcl_setup {int dummy; } ;
struct vc4_exec_info {TYPE_1__* args; int rcl_write_bo_count; struct drm_gem_cma_object** rcl_write_bo; } ;
struct drm_vc4_submit_rcl_surface {int bits; scalar_t__ flags; int offset; int hindex; } ;
struct drm_gem_cma_object {int dummy; } ;
struct TYPE_2__ {int height; int width; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct vc4_exec_info*,struct drm_gem_cma_object*,int ,scalar_t__,int ,int ,int) ;
 struct drm_gem_cma_object* FUNC_3 (struct vc4_exec_info*,int ) ;

__attribute__((used)) static int
FUNC_4(struct vc4_exec_info *VAR_8,
        struct vc4_rcl_setup *VAR_9,
        struct drm_gem_cma_object **VAR_10,
        struct drm_vc4_submit_rcl_surface *VAR_11)
{
 uint8_t VAR_12 = FUNC_1(VAR_11->bits,
           VAR_4);
 uint8_t VAR_13 = FUNC_1(VAR_11->bits,
           VAR_2);
 int VAR_14;

 if (VAR_11->flags != 0) {
  FUNC_0("No flags supported on render config.\n");
  return -VAR_0;
 }

 if (VAR_11->bits & ~(VAR_5 |
      VAR_3 |
      VAR_6 |
      VAR_1)) {
  FUNC_0("Unknown bits in render config: 0x%04x\n",
     VAR_11->bits);
  return -VAR_0;
 }

 if (VAR_11->hindex == ~0)
  return 0;

 *VAR_10 = FUNC_3(VAR_8, VAR_11->hindex);
 if (!*VAR_10)
  return -VAR_0;

 VAR_8->rcl_write_bo[VAR_8->rcl_write_bo_count++] = *VAR_10;

 if (VAR_12 > VAR_7) {
  FUNC_0("Bad tiling format\n");
  return -VAR_0;
 }

 switch (VAR_13) {
 case 129:
 case 130:
  VAR_14 = 2;
  break;
 case 128:
  VAR_14 = 4;
  break;
 default:
  FUNC_0("Bad tile buffer format\n");
  return -VAR_0;
 }

 if (!FUNC_2(VAR_8, *VAR_10, VAR_11->offset, VAR_12,
    VAR_8->args->width, VAR_8->args->height, VAR_14)) {
  return -VAR_0;
 }

 return 0;
}
