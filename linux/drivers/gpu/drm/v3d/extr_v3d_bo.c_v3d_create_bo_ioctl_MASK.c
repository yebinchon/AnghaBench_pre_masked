
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int base; } ;
struct TYPE_3__ {int start; } ;
struct v3d_bo {TYPE_2__ base; TYPE_1__ node; } ;
struct drm_v3d_create_bo {scalar_t__ flags; int offset; int handle; int size; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct v3d_bo*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct v3d_bo*) ;
 int FUNC_4 (struct drm_file*,int *,int *) ;
 int FUNC_5 (int *) ;
 struct v3d_bo* FUNC_6 (struct drm_device*,struct drm_file*,int ) ;

int FUNC_7(struct drm_device *VAR_2, void *VAR_3,
   struct drm_file *VAR_4)
{
 struct drm_v3d_create_bo *VAR_5 = VAR_3;
 struct v3d_bo *VAR_6 = ((void*)0);
 int VAR_7;

 if (VAR_5->flags != 0) {
  FUNC_0("unknown create_bo flags: %d\n", VAR_5->flags);
  return -VAR_0;
 }

 VAR_6 = FUNC_6(VAR_2, VAR_4, FUNC_2(VAR_5->size));
 if (FUNC_1(VAR_6))
  return FUNC_3(VAR_6);

 VAR_5->offset = VAR_6->node.start << VAR_1;

 VAR_7 = FUNC_4(VAR_4, &VAR_6->base.base, &VAR_5->handle);
 FUNC_5(&VAR_6->base.base);

 return VAR_7;
}
