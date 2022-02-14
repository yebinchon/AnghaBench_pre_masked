
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qxl_device {int last_alloced_surf_id; int surf_evict_mutex; int surf_id_idr_lock; int surf_id_idr; TYPE_1__* rom; } ;
struct TYPE_2__ {int n_surfaces; } ;


 void* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct qxl_device*,int) ;
 int FUNC_4 (struct qxl_device*,void*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct qxl_device *VAR_0, int VAR_1)
{
 int VAR_2 = 0;
 int VAR_3, VAR_4;
 bool VAR_5 = 0;
 int VAR_6 = 0;

 FUNC_1(&VAR_0->surf_evict_mutex);
again:

 FUNC_5(&VAR_0->surf_id_idr_lock);
 VAR_6 = VAR_0->last_alloced_surf_id + 1;
 FUNC_6(&VAR_0->surf_id_idr_lock);

 for (VAR_3 = VAR_6; VAR_3 < VAR_6 + VAR_0->rom->n_surfaces; VAR_3++) {
  void *VAR_7;
  int VAR_8 = VAR_3 % VAR_0->rom->n_surfaces;




  FUNC_5(&VAR_0->surf_id_idr_lock);
  VAR_7 = FUNC_0(&VAR_0->surf_id_idr, VAR_8);
  FUNC_6(&VAR_0->surf_id_idr_lock);

  if (!VAR_7)
   continue;

  VAR_4 = FUNC_4(VAR_0, VAR_7, VAR_5);
  if (VAR_4 == 0)
   VAR_2++;
  if (VAR_2 >= VAR_1)
   break;
 }
 if (VAR_2 == 0 && VAR_5 == 0) {
  VAR_5 = 1;
  goto again;
 }

 FUNC_2(&VAR_0->surf_evict_mutex);
 if (VAR_2) {
  FUNC_7(500, 1000);
  FUNC_3(VAR_0, 1);
 }

 return 0;
}
