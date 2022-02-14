
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct qxl_release {int dummy; } ;
struct qxl_rect {int dummy; } ;
struct TYPE_5__ {int type; } ;
struct TYPE_4__ {scalar_t__ right; scalar_t__ bottom; scalar_t__ left; scalar_t__ top; } ;
struct qxl_drawable {int surface_id; int* surfaces_dest; int release_info; int mm_time; struct qxl_rect bbox; TYPE_2__ clip; TYPE_1__ self_bitmap_area; scalar_t__ self_bitmap; int effect; int type; } ;
struct qxl_device {TYPE_3__* rom; } ;
struct TYPE_6__ {int mm_clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct qxl_device*,struct qxl_release*) ;
 int FUNC_1 (struct qxl_device*,struct qxl_release*,int *) ;

__attribute__((used)) static int
FUNC_2(struct qxl_device *VAR_3, int VAR_4, uint8_t VAR_5,
       const struct qxl_rect *VAR_6,
       struct qxl_release *VAR_7)
{
 struct qxl_drawable *VAR_8;
 int VAR_9;

 VAR_8 = (struct qxl_drawable *)FUNC_0(VAR_3, VAR_7);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->type = VAR_5;

 VAR_8->surface_id = VAR_4;
 VAR_8->effect = VAR_1;
 VAR_8->self_bitmap = 0;
 VAR_8->self_bitmap_area.top = 0;
 VAR_8->self_bitmap_area.left = 0;
 VAR_8->self_bitmap_area.bottom = 0;
 VAR_8->self_bitmap_area.right = 0;

 VAR_8->clip.type = VAR_2;







 for (VAR_9 = 0; VAR_9 < 3; ++VAR_9)
  VAR_8->surfaces_dest[VAR_9] = -1;

 if (VAR_6)
  VAR_8->bbox = *VAR_6;

 VAR_8->mm_time = VAR_3->rom->mm_clock;
 FUNC_1(VAR_3, VAR_7, &VAR_8->release_info);
 return 0;
}
