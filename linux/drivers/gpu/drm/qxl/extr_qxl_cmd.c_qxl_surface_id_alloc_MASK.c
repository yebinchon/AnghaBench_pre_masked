
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint32_t ;
struct qxl_device {int surf_id_idr_lock; void* last_alloced_surf_id; int surf_id_idr; TYPE_1__* rom; } ;
struct qxl_bo {void* surface_id; } ;
struct TYPE_2__ {void* n_surfaces; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,void*) ;
 int FUNC_4 (struct qxl_device*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct qxl_device *VAR_2,
        struct qxl_bo *VAR_3)
{
 uint32_t VAR_4;
 int VAR_5;
 int VAR_6 = 0;
again:
 FUNC_1(VAR_0);
 FUNC_5(&VAR_2->surf_id_idr_lock);
 VAR_5 = FUNC_0(&VAR_2->surf_id_idr, ((void*)0), 1, 0, VAR_1);
 FUNC_6(&VAR_2->surf_id_idr_lock);
 FUNC_2();
 if (VAR_5 < 0)
  return VAR_5;
 VAR_4 = VAR_5;

 if (VAR_4 >= VAR_2->rom->n_surfaces) {
  VAR_6++;
  FUNC_5(&VAR_2->surf_id_idr_lock);
  FUNC_3(&VAR_2->surf_id_idr, VAR_4);
  FUNC_6(&VAR_2->surf_id_idr_lock);
  FUNC_4(VAR_2, 2);
  goto again;
 }
 VAR_3->surface_id = VAR_4;

 FUNC_5(&VAR_2->surf_id_idr_lock);
 VAR_2->last_alloced_surf_id = VAR_4;
 FUNC_6(&VAR_2->surf_id_idr_lock);
 return 0;
}
