
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {scalar_t__ dev_private; } ;
typedef int drm_via_sarea_t ;
struct TYPE_3__ {int * decoder_queue; int * sarea_priv; } ;
typedef TYPE_1__ drm_via_private_t ;
struct TYPE_4__ {size_t lock; int func; int ms; int volatile val; } ;
typedef TYPE_2__ drm_via_futex_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;


 size_t VAR_2 ;
 int FUNC_1 (int,int ,int,int) ;
 scalar_t__ FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct drm_device *VAR_3, void *VAR_4, struct drm_file *VAR_5)
{
 drm_via_futex_t *VAR_6 = VAR_4;
 volatile int *VAR_7;
 drm_via_private_t *VAR_8 = (drm_via_private_t *) VAR_3->dev_private;
 drm_via_sarea_t *VAR_9 = VAR_8->sarea_priv;
 int VAR_10 = 0;

 FUNC_0("\n");

 if (VAR_6->lock >= VAR_2)
  return -VAR_0;

 VAR_7 = (volatile int *)FUNC_2(VAR_9, VAR_6->lock);

 switch (VAR_6->func) {
 case 129:
  FUNC_1(VAR_10, VAR_8->decoder_queue[VAR_6->lock],
       (VAR_6->ms / 10) * (VAR_1 / 100), *VAR_7 != VAR_6->val);
  return VAR_10;
 case 128:
  FUNC_3(&(VAR_8->decoder_queue[VAR_6->lock]));
  return 0;
 }
 return 0;
}
