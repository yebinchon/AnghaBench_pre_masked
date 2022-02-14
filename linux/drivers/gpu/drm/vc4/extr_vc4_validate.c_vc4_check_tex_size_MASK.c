
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct vc4_exec_info {int dummy; } ;
struct TYPE_2__ {int size; } ;
struct drm_gem_cma_object {TYPE_1__ base; } ;


 int FUNC_0 (char*,int,...) ;



 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

bool
FUNC_4(struct vc4_exec_info *VAR_0, struct drm_gem_cma_object *VAR_1,
     uint32_t VAR_2, uint8_t VAR_3,
     uint32_t VAR_4, uint32_t VAR_5, uint8_t VAR_6)
{
 uint32_t VAR_7, VAR_8, VAR_9, VAR_10;
 uint32_t VAR_11 = FUNC_3(VAR_6);
 uint32_t VAR_12 = FUNC_2(VAR_6);
 if (VAR_4 > 4096 || VAR_5 > 4096) {
  FUNC_0("Surface dimensions (%d,%d) too large",
     VAR_4, VAR_5);
  return 0;
 }

 switch (VAR_3) {
 case 130:
  VAR_7 = FUNC_1(VAR_4, VAR_11);
  VAR_8 = VAR_5;
  break;
 case 128:
  VAR_7 = FUNC_1(VAR_4, VAR_11 * 8);
  VAR_8 = FUNC_1(VAR_5, VAR_12 * 8);
  break;
 case 129:
  VAR_7 = FUNC_1(VAR_4, VAR_11);
  VAR_8 = FUNC_1(VAR_5, VAR_12);
  break;
 default:
  FUNC_0("buffer tiling %d unsupported\n", VAR_3);
  return 0;
 }

 VAR_9 = VAR_7 * VAR_6;
 VAR_10 = VAR_9 * VAR_8;

 if (VAR_10 + VAR_2 < VAR_10 ||
     VAR_10 + VAR_2 > VAR_1->base.size) {
  FUNC_0("Overflow in %dx%d (%dx%d) fbo size (%d + %d > %zd)\n",
     VAR_4, VAR_5,
     VAR_7, VAR_8,
     VAR_10, VAR_2, VAR_1->base.size);
  return 0;
 }

 return 1;
}
