
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_6__ {scalar_t__ family; } ;
struct TYPE_7__ {TYPE_1__ info; } ;
struct TYPE_8__ {TYPE_2__ device; } ;
struct nouveau_drm {TYPE_3__ client; int dev; } ;
struct nouveau_cli {struct nouveau_drm* drm; } ;
struct TYPE_10__ {int filp; } ;
struct TYPE_9__ {TYPE_5__ base; int persistent_swap_storage; } ;
struct nouveau_bo {int valid_domains; TYPE_4__ bo; } ;


 scalar_t__ FUNC_0 (struct nouveau_bo*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct nouveau_bo*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,TYPE_5__*,int ) ;
 struct nouveau_bo* FUNC_3 (struct nouveau_cli*,int *,int*,int ,int,int) ;
 int FUNC_4 (struct nouveau_bo*,int ,int,int ,int *,int *) ;
 int FUNC_5 (int *,struct nouveau_bo**) ;

int
FUNC_6(struct nouveau_cli *VAR_9, u64 VAR_10, int VAR_11, uint32_t VAR_12,
  uint32_t VAR_13, uint32_t VAR_14,
  struct nouveau_bo **VAR_15)
{
 struct nouveau_drm *VAR_16 = VAR_9->drm;
 struct nouveau_bo *VAR_17;
 u32 VAR_18 = 0;
 int VAR_19;

 if (VAR_12 & VAR_3)
  VAR_18 |= VAR_8;
 if (VAR_12 & VAR_2)
  VAR_18 |= VAR_6;
 if (!VAR_18 || VAR_12 & VAR_1)
  VAR_18 |= VAR_5;

 if (VAR_12 & VAR_0)
  VAR_18 |= VAR_7;

 VAR_17 = FUNC_3(VAR_9, &VAR_10, &VAR_11, VAR_18, VAR_13,
    VAR_14);
 if (FUNC_0(VAR_17))
  return FUNC_1(VAR_17);



 VAR_19 = FUNC_2(VAR_16->dev, &VAR_17->bo.base, VAR_10);
 if (VAR_19) {
  FUNC_5(((void*)0), &VAR_17);
  return VAR_19;
 }

 VAR_19 = FUNC_4(VAR_17, VAR_10, VAR_11, VAR_18, ((void*)0), ((void*)0));
 if (VAR_19) {
  FUNC_5(((void*)0), &VAR_17);
  return VAR_19;
 }





 VAR_17->valid_domains = VAR_3 |
         VAR_2;
 if (VAR_16->client.device.info.family >= VAR_4)
  VAR_17->valid_domains &= VAR_12;

 VAR_17->bo.persistent_swap_storage = VAR_17->bo.base.filp;
 *VAR_15 = VAR_17;
 return 0;
}
