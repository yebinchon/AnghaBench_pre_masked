
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qxl_device {int release_ring; TYPE_1__* ram_header; } ;
struct drm_device {struct qxl_device* dev_private; } ;
struct TYPE_2__ {int int_mask; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct qxl_device*) ;
 int FUNC_2 (struct qxl_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct drm_device *VAR_1, bool VAR_2)
{
 struct qxl_device *VAR_3 = VAR_1->dev_private;

 VAR_3->ram_header->int_mask = VAR_0;
 if (!VAR_2) {
  FUNC_2(VAR_3);
  FUNC_3(VAR_3->release_ring);
 }

 FUNC_1(VAR_3);
 return FUNC_0(VAR_1);
}
