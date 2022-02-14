
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct qxl_surface {int dummy; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int bdev; } ;
struct qxl_device {TYPE_3__ ddev; TYPE_1__ mman; } ;
struct TYPE_5__ {int base; } ;
struct qxl_bo {int pin_count; int placement; TYPE_2__ tbo; struct qxl_surface surf; int list; scalar_t__ surface_id; int type; } ;
typedef enum ttm_bo_type { ____Placeholder_ttm_bo_type } ttm_bo_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,unsigned long,int ) ;
 int FUNC_2 (TYPE_3__*,int *,unsigned long) ;
 int FUNC_3 (struct qxl_bo*) ;
 struct qxl_bo* FUNC_4 (int,int ) ;
 int VAR_4 ;
 int FUNC_5 (struct qxl_bo*,int ,int) ;
 unsigned long FUNC_6 (unsigned long,int ) ;
 int FUNC_7 (int *,TYPE_2__*,unsigned long,int,int *,int ,int,unsigned long,int *,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(struct qxl_device *VAR_7,
    unsigned long VAR_8, bool VAR_9, bool VAR_10, u32 VAR_11,
    struct qxl_surface *VAR_12,
    struct qxl_bo **VAR_13)
{
 struct qxl_bo *VAR_14;
 enum ttm_bo_type VAR_15;
 int VAR_16;

 if (VAR_9)
  VAR_15 = VAR_6;
 else
  VAR_15 = VAR_5;
 *VAR_13 = ((void*)0);
 VAR_14 = FUNC_4(sizeof(struct qxl_bo), VAR_2);
 if (VAR_14 == ((void*)0))
  return -VAR_0;
 VAR_8 = FUNC_6(VAR_8, VAR_3);
 VAR_16 = FUNC_2(&VAR_7->ddev, &VAR_14->tbo.base, VAR_8);
 if (FUNC_8(VAR_16)) {
  FUNC_3(VAR_14);
  return VAR_16;
 }
 VAR_14->type = VAR_11;
 VAR_14->pin_count = VAR_10 ? 1 : 0;
 VAR_14->surface_id = 0;
 FUNC_0(&VAR_14->list);

 if (VAR_12)
  VAR_14->surf = *VAR_12;

 FUNC_5(VAR_14, VAR_11, VAR_10);

 VAR_16 = FUNC_7(&VAR_7->mman.bdev, &VAR_14->tbo, VAR_8, VAR_15,
   &VAR_14->placement, 0, !VAR_9, VAR_8,
   ((void*)0), ((void*)0), &VAR_4);
 if (FUNC_8(VAR_16 != 0)) {
  if (VAR_16 != -VAR_1)
   FUNC_1(VAR_7->ddev.dev,
    "object_init failed for (%lu, 0x%08X)\n",
    VAR_8, VAR_11);
  return VAR_16;
 }
 *VAR_13 = VAR_14;
 return 0;
}
