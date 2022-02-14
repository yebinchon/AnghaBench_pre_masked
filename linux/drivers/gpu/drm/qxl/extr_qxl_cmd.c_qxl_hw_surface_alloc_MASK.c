
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int data; int stride; int height; int width; int format; } ;
struct TYPE_6__ {TYPE_2__ surface_create; } ;
struct qxl_surface_cmd {int release_info; int surface_id; TYPE_3__ u; int flags; int type; } ;
struct qxl_release {int dummy; } ;
struct qxl_device {int surf_id_idr_lock; int surf_id_idr; } ;
struct TYPE_4__ {int stride; int height; int width; int format; } ;
struct qxl_bo {int hw_surf_alloc; int surface_id; struct qxl_release* surf_create; TYPE_1__ surf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct qxl_bo*,int ) ;
 int FUNC_1 (struct qxl_device*,int ,int *,struct qxl_release**) ;
 int FUNC_2 (struct qxl_device*,struct qxl_bo*,int ) ;
 int FUNC_3 (struct qxl_device*,struct qxl_release*,int ,int) ;
 int FUNC_4 (struct qxl_release*) ;
 scalar_t__ FUNC_5 (struct qxl_device*,struct qxl_release*) ;
 int FUNC_6 (struct qxl_release*,int) ;
 int FUNC_7 (struct qxl_device*,struct qxl_release*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct qxl_device *VAR_3,
    struct qxl_bo *VAR_4)
{
 struct qxl_surface_cmd *VAR_5;
 struct qxl_release *VAR_6;
 int VAR_7;

 if (VAR_4->hw_surf_alloc)
  return 0;

 VAR_7 = FUNC_1(VAR_3, VAR_1,
       ((void*)0),
       &VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_6(VAR_6, 1);
 if (VAR_7)
  return VAR_7;

 VAR_5 = (struct qxl_surface_cmd *)FUNC_5(VAR_3, VAR_6);
 VAR_5->type = VAR_1;
 VAR_5->flags = VAR_2;
 VAR_5->u.surface_create.format = VAR_4->surf.format;
 VAR_5->u.surface_create.width = VAR_4->surf.width;
 VAR_5->u.surface_create.height = VAR_4->surf.height;
 VAR_5->u.surface_create.stride = VAR_4->surf.stride;
 VAR_5->u.surface_create.data = FUNC_2(VAR_3, VAR_4, 0);
 VAR_5->surface_id = VAR_4->surface_id;
 FUNC_7(VAR_3, VAR_6, &VAR_5->release_info);

 VAR_4->surf_create = VAR_6;




 FUNC_3(VAR_3, VAR_6, VAR_0, 0);
 FUNC_4(VAR_6);

 VAR_4->hw_surf_alloc = 1;
 FUNC_8(&VAR_3->surf_id_idr_lock);
 FUNC_0(&VAR_3->surf_id_idr, VAR_4, VAR_4->surface_id);
 FUNC_9(&VAR_3->surf_id_idr_lock);
 return 0;
}
