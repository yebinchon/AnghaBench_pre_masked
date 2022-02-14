
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* obj; int base; } ;
struct udl_fbdev {TYPE_2__ ufb; int helper; } ;
struct drm_device {int dummy; } ;
struct TYPE_3__ {int base; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_0,
         struct udl_fbdev *VAR_1)
{
 FUNC_1(&VAR_1->helper);
 FUNC_0(&VAR_1->helper);
 if (VAR_1->ufb.obj) {
  FUNC_3(&VAR_1->ufb.base);
  FUNC_2(&VAR_1->ufb.base);
  FUNC_4(&VAR_1->ufb.obj->base);
 }
}
