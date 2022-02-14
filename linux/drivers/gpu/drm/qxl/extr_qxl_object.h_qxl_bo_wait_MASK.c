
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int mem_type; } ;
struct TYPE_6__ {struct drm_device* dev; } ;
struct TYPE_8__ {TYPE_2__ mem; TYPE_1__ base; } ;
struct qxl_bo {TYPE_3__ tbo; } ;
struct drm_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct qxl_bo*) ;
 int FUNC_1 (TYPE_3__*,int,int,int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline int FUNC_5(struct qxl_bo *VAR_1, u32 *VAR_2,
         bool VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(&VAR_1->tbo, 1, VAR_3, ((void*)0));
 if (FUNC_4(VAR_4 != 0)) {
  if (VAR_4 != -VAR_0) {
   struct drm_device *VAR_5 = VAR_1->tbo.base.dev;

   FUNC_0(VAR_5->dev, "%p reserve failed for wait\n",
    VAR_1);
  }
  return VAR_4;
 }
 if (VAR_2)
  *VAR_2 = VAR_1->tbo.mem.mem_type;

 VAR_4 = FUNC_3(&VAR_1->tbo, 1, VAR_3);
 FUNC_2(&VAR_1->tbo);
 return VAR_4;
}
