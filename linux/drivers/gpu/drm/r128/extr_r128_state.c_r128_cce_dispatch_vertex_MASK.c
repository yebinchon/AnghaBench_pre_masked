
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct drm_device {TYPE_2__* dev_private; } ;
struct drm_buf {int bus_address; int used; int pending; int idx; TYPE_3__* dev_private; } ;
struct TYPE_6__ {int vc_format; int nbox; int dirty; int last_dispatch; int * boxes; } ;
typedef TYPE_1__ drm_r128_sarea_t ;
struct TYPE_7__ {TYPE_1__* sarea_priv; } ;
typedef TYPE_2__ drm_r128_private_t ;
struct TYPE_8__ {int prim; int dispatched; int age; scalar_t__ discard; } ;
typedef TYPE_3__ drm_r128_buf_priv_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (TYPE_2__*,int *,int) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (char*,int) ;

__attribute__((used)) static void FUNC_9(struct drm_device *VAR_6, struct drm_buf *VAR_7)
{
 drm_r128_private_t *VAR_8 = VAR_6->dev_private;
 drm_r128_buf_priv_t *VAR_9 = VAR_7->dev_private;
 drm_r128_sarea_t *VAR_10 = VAR_8->sarea_priv;
 int VAR_11 = VAR_10->vc_format;
 int VAR_12 = VAR_7->bus_address;
 int VAR_13 = VAR_7->used;
 int VAR_14 = VAR_9->prim;
 int VAR_15 = 0;
 VAR_5;
 FUNC_4("buf=%d nbox=%d\n", VAR_7->idx, VAR_10->nbox);

 if (0)
  FUNC_8("dispatch_vertex", VAR_10->dirty);

 if (VAR_7->used) {
  VAR_9->dispatched = 1;

  if (VAR_10->dirty & ~VAR_4)
   FUNC_7(VAR_8);

  do {

   if (VAR_15 < VAR_10->nbox) {
    FUNC_6(VAR_8,
           &VAR_10->boxes[VAR_15],
           VAR_10->nbox - VAR_15);
   }


   FUNC_1(5);

   FUNC_5(FUNC_3(VAR_0, 3));
   FUNC_5(VAR_12);
   FUNC_5(VAR_13);
   FUNC_5(VAR_11);
   FUNC_5(VAR_14 | VAR_2 |
     (VAR_13 << VAR_1));

   FUNC_0();

   VAR_15 += 3;
  } while (VAR_15 < VAR_10->nbox);
 }

 if (VAR_9->discard) {
  VAR_9->age = VAR_8->sarea_priv->last_dispatch;


  FUNC_1(2);

  FUNC_5(FUNC_2(VAR_3, 0));
  FUNC_5(VAR_9->age);

  FUNC_0();

  VAR_7->pending = 1;
  VAR_7->used = 0;

  VAR_9->dispatched = 0;
 }

 VAR_8->sarea_priv->last_dispatch++;

 VAR_10->dirty &= ~VAR_4;
 VAR_10->nbox = 0;
}
