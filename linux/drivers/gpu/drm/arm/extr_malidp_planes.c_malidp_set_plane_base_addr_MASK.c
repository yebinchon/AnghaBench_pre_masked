
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct drm_plane {int state; } ;
struct malidp_plane {int hwdev; TYPE_1__* layer; struct drm_plane base; } ;
struct drm_gem_cma_object {int paddr; } ;
struct drm_framebuffer {scalar_t__ modifier; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {scalar_t__ ptr; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_framebuffer*,int ,int) ;
 struct drm_gem_cma_object* FUNC_2 (struct drm_framebuffer*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct drm_framebuffer *VAR_0,
           struct malidp_plane *VAR_1,
           int VAR_2)
{
 dma_addr_t VAR_3;
 u16 VAR_4;
 struct drm_plane *VAR_5 = &VAR_1->base;
 bool VAR_6 = VAR_0->modifier ? 1 : 0;

 VAR_4 = VAR_1->layer->ptr + (VAR_2 << 4);
 if (!VAR_6) {
  VAR_3 = FUNC_1(VAR_0, VAR_5->state,
      VAR_2);
 } else {
  struct drm_gem_cma_object *VAR_7;

  VAR_7 = FUNC_2(VAR_0, VAR_2);

  if (FUNC_0(!VAR_7))
   return;
  VAR_3 = VAR_7->paddr;
 }

 FUNC_4(VAR_1->hwdev, FUNC_3(VAR_3), VAR_4);
 FUNC_4(VAR_1->hwdev, FUNC_5(VAR_3), VAR_4 + 4);
}
