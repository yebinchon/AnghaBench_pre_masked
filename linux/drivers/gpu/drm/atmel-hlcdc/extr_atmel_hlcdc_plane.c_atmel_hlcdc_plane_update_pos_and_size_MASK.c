
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct atmel_hlcdc_plane_state {int crtc_y; int crtc_x; int src_h; int src_w; int crtc_h; int crtc_w; } ;
struct TYPE_4__ {struct atmel_hlcdc_layer_desc* desc; } ;
struct atmel_hlcdc_plane {TYPE_2__ layer; } ;
struct TYPE_3__ {scalar_t__ pos; scalar_t__ memsize; scalar_t__ size; } ;
struct atmel_hlcdc_layer_desc {TYPE_1__ layout; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_3 (struct atmel_hlcdc_plane*,struct atmel_hlcdc_plane_state*) ;

__attribute__((used)) static void
FUNC_4(struct atmel_hlcdc_plane *VAR_0,
          struct atmel_hlcdc_plane_state *VAR_1)
{
 const struct atmel_hlcdc_layer_desc *VAR_2 = VAR_0->layer.desc;

 if (VAR_2->layout.size)
  FUNC_2(&VAR_0->layer, VAR_2->layout.size,
     FUNC_1(VAR_1->crtc_w,
              VAR_1->crtc_h));

 if (VAR_2->layout.memsize)
  FUNC_2(&VAR_0->layer,
     VAR_2->layout.memsize,
     FUNC_1(VAR_1->src_w,
              VAR_1->src_h));

 if (VAR_2->layout.pos)
  FUNC_2(&VAR_0->layer, VAR_2->layout.pos,
     FUNC_0(VAR_1->crtc_x,
             VAR_1->crtc_y));

 FUNC_3(VAR_0, VAR_1);
}
