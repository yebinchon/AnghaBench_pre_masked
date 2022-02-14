
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct drm_gem_cma_object {scalar_t__ paddr; } ;
struct drm_framebuffer {int dummy; } ;
struct TYPE_7__ {struct drm_framebuffer* fb; } ;
struct atmel_hlcdc_plane_state {int nplanes; int * pstride; int * xstride; TYPE_2__** dscrs; scalar_t__* offsets; TYPE_1__ base; } ;
struct TYPE_10__ {struct atmel_hlcdc_layer_desc* desc; } ;
struct atmel_hlcdc_plane {TYPE_4__ layer; } ;
struct TYPE_9__ {scalar_t__* pstride; scalar_t__* xstride; } ;
struct atmel_hlcdc_layer_desc {TYPE_3__ layout; } ;
struct TYPE_8__ {scalar_t__ self; scalar_t__ ctrl; scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_4__*,scalar_t__,int ) ;
 int FUNC_6 (TYPE_4__*,int ,scalar_t__) ;
 struct drm_gem_cma_object* FUNC_7 (struct drm_framebuffer*,int) ;

__attribute__((used)) static void FUNC_8(struct atmel_hlcdc_plane *VAR_2,
     struct atmel_hlcdc_plane_state *VAR_3)
{
 const struct atmel_hlcdc_layer_desc *VAR_4 = VAR_2->layer.desc;
 struct drm_framebuffer *VAR_5 = VAR_3->base.fb;
 u32 VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(&VAR_2->layer, VAR_0);

 for (VAR_7 = 0; VAR_7 < VAR_3->nplanes; VAR_7++) {
  struct drm_gem_cma_object *VAR_8 = FUNC_7(VAR_5, VAR_7);

  VAR_3->dscrs[VAR_7]->addr = VAR_8->paddr + VAR_3->offsets[VAR_7];

  FUNC_6(&VAR_2->layer,
         FUNC_2(VAR_7),
         VAR_3->dscrs[VAR_7]->self);

  if (!(VAR_6 & VAR_1)) {
   FUNC_6(&VAR_2->layer,
     FUNC_0(VAR_7),
     VAR_3->dscrs[VAR_7]->addr);
   FUNC_6(&VAR_2->layer,
     FUNC_1(VAR_7),
     VAR_3->dscrs[VAR_7]->ctrl);
   FUNC_6(&VAR_2->layer,
     FUNC_3(VAR_7),
     VAR_3->dscrs[VAR_7]->self);
  }

  if (VAR_4->layout.xstride[VAR_7])
   FUNC_5(&VAR_2->layer,
          VAR_4->layout.xstride[VAR_7],
          VAR_3->xstride[VAR_7]);

  if (VAR_4->layout.pstride[VAR_7])
   FUNC_5(&VAR_2->layer,
          VAR_4->layout.pstride[VAR_7],
          VAR_3->pstride[VAR_7]);
 }
}
