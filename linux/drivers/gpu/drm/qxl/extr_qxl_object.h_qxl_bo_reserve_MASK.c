
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct drm_device* dev; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct qxl_bo {TYPE_2__ tbo; } ;
struct drm_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct qxl_bo*) ;
 int FUNC_1 (TYPE_2__*,int,int,int *) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline int FUNC_3(struct qxl_bo *VAR_1, bool VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_1->tbo, 1, VAR_2, ((void*)0));
 if (FUNC_2(VAR_3 != 0)) {
  if (VAR_3 != -VAR_0) {
   struct drm_device *VAR_4 = VAR_1->tbo.base.dev;

   FUNC_0(VAR_4->dev, "%p reserve failed\n", VAR_1);
  }
  return VAR_3;
 }
 return 0;
}
