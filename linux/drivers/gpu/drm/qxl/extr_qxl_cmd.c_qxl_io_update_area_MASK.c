
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct qxl_rect {scalar_t__ left; scalar_t__ top; scalar_t__ right; scalar_t__ bottom; } ;
struct qxl_device {int update_area_mutex; TYPE_2__* ram_header; } ;
struct TYPE_3__ {scalar_t__ width; scalar_t__ height; } ;
struct qxl_bo {int surface_id; TYPE_1__ surf; scalar_t__ is_primary; int hw_surf_alloc; } ;
struct TYPE_4__ {int update_surface; struct qxl_rect update_area; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct qxl_device*,int ,int ,int) ;

int FUNC_4(struct qxl_device *VAR_2, struct qxl_bo *VAR_3,
   const struct qxl_rect *VAR_4)
{
 int VAR_5;
 uint32_t VAR_6, VAR_7;
 int VAR_8;

 if (!VAR_3->hw_surf_alloc)
  FUNC_0("got io update area with no hw surface\n");

 if (VAR_3->is_primary)
  VAR_5 = 0;
 else
  VAR_5 = VAR_3->surface_id;
 VAR_6 = VAR_3->surf.width;
 VAR_7 = VAR_3->surf.height;

 if (VAR_4->left < 0 || VAR_4->top < 0 ||
     VAR_4->right > VAR_6 || VAR_4->bottom > VAR_7)
  return -VAR_0;

 FUNC_1(&VAR_2->update_area_mutex);
 VAR_2->ram_header->update_area = *VAR_4;
 VAR_2->ram_header->update_surface = VAR_5;
 VAR_8 = FUNC_3(VAR_2, 0, VAR_1, 1);
 FUNC_2(&VAR_2->update_area_mutex);
 return VAR_8;
}
