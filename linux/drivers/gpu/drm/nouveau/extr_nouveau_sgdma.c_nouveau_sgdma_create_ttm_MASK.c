
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct ttm_tt {int * func; } ;
struct ttm_buffer_object {int bdev; } ;
struct TYPE_8__ {struct ttm_tt ttm; } ;
struct nouveau_sgdma_be {TYPE_4__ ttm; } ;
struct TYPE_6__ {scalar_t__ family; } ;
struct TYPE_5__ {TYPE_2__ info; } ;
struct TYPE_7__ {TYPE_1__ device; } ;
struct nouveau_drm {TYPE_3__ client; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct nouveau_sgdma_be* FUNC_0 (int,int ) ;
 struct nouveau_drm* FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_4__*,struct ttm_buffer_object*,int ) ;

struct ttm_tt *
FUNC_3(struct ttm_buffer_object *VAR_4, uint32_t VAR_5)
{
 struct nouveau_drm *VAR_6 = FUNC_1(VAR_4->bdev);
 struct nouveau_sgdma_be *VAR_7;

 VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return ((void*)0);

 if (VAR_6->client.device.info.family < VAR_1)
  VAR_7->ttm.ttm.func = &VAR_2;
 else
  VAR_7->ttm.ttm.func = &VAR_3;

 if (FUNC_2(&VAR_7->ttm, VAR_4, VAR_5))





  return ((void*)0);
 return &VAR_7->ttm.ttm;
}
