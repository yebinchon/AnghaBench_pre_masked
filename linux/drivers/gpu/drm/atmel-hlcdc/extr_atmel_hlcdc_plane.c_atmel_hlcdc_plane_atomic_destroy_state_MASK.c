
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_plane_state {scalar_t__ fb; } ;
struct drm_plane {TYPE_1__* dev; } ;
struct atmel_hlcdc_plane_state {TYPE_2__** dscrs; } ;
struct atmel_hlcdc_dc {int dscrpool; } ;
struct TYPE_5__ {int self; } ;
struct TYPE_4__ {struct atmel_hlcdc_dc* dev_private; } ;


 int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (int ,TYPE_2__*,int ) ;
 int FUNC_2 (scalar_t__) ;
 struct atmel_hlcdc_plane_state* FUNC_3 (struct drm_plane_state*) ;
 int FUNC_4 (struct atmel_hlcdc_plane_state*) ;

__attribute__((used)) static void FUNC_5(struct drm_plane *VAR_0,
         struct drm_plane_state *VAR_1)
{
 struct atmel_hlcdc_plane_state *VAR_2 =
   FUNC_3(VAR_1);
 struct atmel_hlcdc_dc *VAR_3 = VAR_0->dev->dev_private;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2->dscrs); VAR_4++) {
  FUNC_1(VAR_3->dscrpool, VAR_2->dscrs[VAR_4],
         VAR_2->dscrs[VAR_4]->self);
 }

 if (VAR_1->fb)
  FUNC_2(VAR_1->fb);

 FUNC_4(VAR_2);
}
