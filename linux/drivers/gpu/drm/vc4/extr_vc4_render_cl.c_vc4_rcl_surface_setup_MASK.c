
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct vc4_exec_info {TYPE_1__* args; int rcl_write_bo_count; struct drm_gem_cma_object** rcl_write_bo; } ;
struct drm_vc4_submit_rcl_surface {int bits; int flags; int offset; int hindex; } ;
struct drm_gem_cma_object {int dummy; } ;
struct TYPE_2__ {int height; int width; struct drm_vc4_submit_rcl_surface zs_write; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,int ) ;


 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (struct vc4_exec_info*,struct drm_gem_cma_object*,int,scalar_t__,int ,int ,int) ;
 int FUNC_3 (struct vc4_exec_info*,struct drm_gem_cma_object*,struct drm_vc4_submit_rcl_surface*) ;
 struct drm_gem_cma_object* FUNC_4 (struct vc4_exec_info*,int ) ;

__attribute__((used)) static int FUNC_5(struct vc4_exec_info *VAR_11,
     struct drm_gem_cma_object **VAR_12,
     struct drm_vc4_submit_rcl_surface *VAR_13,
     bool VAR_14)
{
 uint8_t VAR_15 = FUNC_1(VAR_13->bits,
           VAR_6);
 uint8_t VAR_16 = FUNC_1(VAR_13->bits,
           VAR_1);
 uint8_t VAR_17 = FUNC_1(VAR_13->bits,
           VAR_4);
 int VAR_18;
 int VAR_19;

 if (VAR_13->flags & ~VAR_9) {
  FUNC_0("Extra flags set\n");
  return -VAR_0;
 }

 if (VAR_13->hindex == ~0)
  return 0;

 *VAR_12 = FUNC_4(VAR_11, VAR_13->hindex);
 if (!*VAR_12)
  return -VAR_0;

 if (VAR_14)
  VAR_11->rcl_write_bo[VAR_11->rcl_write_bo_count++] = *VAR_12;

 if (VAR_13->flags & VAR_9) {
  if (VAR_13 == &VAR_11->args->zs_write) {
   FUNC_0("general zs write may not be a full-res.\n");
   return -VAR_0;
  }

  if (VAR_13->bits != 0) {
   FUNC_0("load/store general bits set with "
      "full res load/store.\n");
   return -VAR_0;
  }

  VAR_19 = FUNC_3(VAR_11, *VAR_12, VAR_13);
  if (VAR_19)
   return VAR_19;

  return 0;
 }

 if (VAR_13->bits & ~(VAR_7 |
      VAR_2 |
      VAR_5)) {
  FUNC_0("Unknown bits in load/store: 0x%04x\n",
     VAR_13->bits);
  return -VAR_0;
 }

 if (VAR_15 > VAR_10) {
  FUNC_0("Bad tiling format\n");
  return -VAR_0;
 }

 if (VAR_16 == VAR_8) {
  if (VAR_17 != 0) {
   FUNC_0("No color format should be set for ZS\n");
   return -VAR_0;
  }
  VAR_18 = 4;
 } else if (VAR_16 == VAR_3) {
  switch (VAR_17) {
  case 130:
  case 129:
   VAR_18 = 2;
   break;
  case 128:
   VAR_18 = 4;
   break;
  default:
   FUNC_0("Bad tile buffer format\n");
   return -VAR_0;
  }
 } else {
  FUNC_0("Bad load/store buffer %d.\n", VAR_16);
  return -VAR_0;
 }

 if (VAR_13->offset & 0xf) {
  FUNC_0("load/store buffer must be 16b aligned.\n");
  return -VAR_0;
 }

 if (!FUNC_2(VAR_11, *VAR_12, VAR_13->offset, VAR_15,
    VAR_11->args->width, VAR_11->args->height, VAR_18)) {
  return -VAR_0;
 }

 return 0;
}
