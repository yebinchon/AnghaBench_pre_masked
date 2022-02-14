
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qxl_surface_cmd {int surface_id; int release_info; int type; } ;
struct qxl_release {int surface_release_id; } ;
struct qxl_device {int surf_id_idr_lock; int surf_id_idr; } ;
struct qxl_bo {int hw_surf_alloc; int surface_id; int * surf_create; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct qxl_device*,int ,int *,struct qxl_release**) ;
 int FUNC_2 (struct qxl_device*,struct qxl_release*,int ,int) ;
 int FUNC_3 (struct qxl_release*) ;
 scalar_t__ FUNC_4 (struct qxl_device*,struct qxl_release*) ;
 int FUNC_5 (struct qxl_device*,struct qxl_release*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct qxl_device *VAR_2,
      struct qxl_bo *VAR_3)
{
 struct qxl_surface_cmd *VAR_4;
 struct qxl_release *VAR_5;
 int VAR_6;
 int VAR_7;

 if (!VAR_3->hw_surf_alloc)
  return 0;

 VAR_6 = FUNC_1(VAR_2, VAR_1,
       VAR_3->surf_create,
       &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_3->surf_create = ((void*)0);

 FUNC_6(&VAR_2->surf_id_idr_lock);
 FUNC_0(&VAR_2->surf_id_idr, ((void*)0), VAR_3->surface_id);
 FUNC_7(&VAR_2->surf_id_idr_lock);
 VAR_3->hw_surf_alloc = 0;

 VAR_7 = VAR_3->surface_id;
 VAR_3->surface_id = 0;

 VAR_5->surface_release_id = VAR_7;
 VAR_4 = (struct qxl_surface_cmd *)FUNC_4(VAR_2, VAR_5);
 VAR_4->type = VAR_1;
 VAR_4->surface_id = VAR_7;
 FUNC_5(VAR_2, VAR_5, &VAR_4->release_info);

 FUNC_2(VAR_2, VAR_5, VAR_0, 0);

 FUNC_3(VAR_5);

 return 0;
}
