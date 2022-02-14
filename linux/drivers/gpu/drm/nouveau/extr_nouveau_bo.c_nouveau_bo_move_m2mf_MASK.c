
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ttm_mem_reg {int dummy; } ;
struct ttm_buffer_object {int mem; int bdev; } ;
struct nouveau_fence {int base; } ;
struct TYPE_10__ {int (* move ) (struct nouveau_channel*,struct ttm_buffer_object*,int *,struct ttm_mem_reg*) ;struct nouveau_channel* chan; } ;
struct TYPE_7__ {scalar_t__ family; } ;
struct TYPE_8__ {TYPE_2__ info; } ;
struct TYPE_9__ {TYPE_3__ device; } ;
struct nouveau_drm {TYPE_5__ ttm; TYPE_4__ client; } ;
struct nouveau_cli {int mutex; } ;
struct TYPE_6__ {scalar_t__ client; } ;
struct nouveau_channel {TYPE_1__ user; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 struct nouveau_drm* FUNC_2 (int ) ;
 int FUNC_3 (struct ttm_buffer_object*) ;
 int FUNC_4 (struct nouveau_drm*,struct ttm_buffer_object*,struct ttm_mem_reg*) ;
 int FUNC_5 (struct nouveau_channel*,int,struct nouveau_fence**) ;
 int FUNC_6 (int ,struct nouveau_channel*,int,int) ;
 int FUNC_7 (struct nouveau_fence**) ;
 int FUNC_8 (struct nouveau_channel*,struct ttm_buffer_object*,int *,struct ttm_mem_reg*) ;
 int FUNC_9 (struct ttm_buffer_object*,int *,int,struct ttm_mem_reg*) ;

__attribute__((used)) static int
FUNC_10(struct ttm_buffer_object *VAR_2, int VAR_3, bool VAR_4,
       bool VAR_5, struct ttm_mem_reg *VAR_6)
{
 struct nouveau_drm *VAR_7 = FUNC_2(VAR_2->bdev);
 struct nouveau_channel *VAR_8 = VAR_7->ttm.chan;
 struct nouveau_cli *VAR_9 = (void *)VAR_8->user.client;
 struct nouveau_fence *VAR_10;
 int VAR_11;





 if (VAR_7->client.device.info.family >= VAR_0) {
  VAR_11 = FUNC_4(VAR_7, VAR_2, VAR_6);
  if (VAR_11)
   return VAR_11;
 }

 FUNC_0(&VAR_9->mutex, VAR_1);
 VAR_11 = FUNC_6(FUNC_3(VAR_2), VAR_8, 1, VAR_4);
 if (VAR_11 == 0) {
  VAR_11 = VAR_7->ttm.move(VAR_8, VAR_2, &VAR_2->mem, VAR_6);
  if (VAR_11 == 0) {
   VAR_11 = FUNC_5(VAR_8, 0, &VAR_10);
   if (VAR_11 == 0) {
    VAR_11 = FUNC_9(VAR_2,
        &VAR_10->base,
        VAR_3,
        VAR_6);
    FUNC_7(&VAR_10);
   }
  }
 }
 FUNC_1(&VAR_9->mutex);
 return VAR_11;
}
