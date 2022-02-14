
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct vc4_exec_info {TYPE_1__* args; } ;
struct drm_vc4_submit_rcl_surface {scalar_t__ offset; } ;
struct drm_gem_cma_object {scalar_t__ paddr; } ;
struct TYPE_2__ {int width; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;

__attribute__((used)) static uint32_t FUNC_1(struct vc4_exec_info *VAR_1,
        struct drm_gem_cma_object *VAR_2,
        struct drm_vc4_submit_rcl_surface *VAR_3,
        uint8_t VAR_4, uint8_t VAR_5)
{
 return VAR_2->paddr + VAR_3->offset + VAR_0 *
  (FUNC_0(VAR_1->args->width, 32) * VAR_5 + VAR_4);
}
