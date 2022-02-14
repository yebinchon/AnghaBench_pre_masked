
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_master {scalar_t__ lessee_id; scalar_t__ lessor; int lessee_list; int lessees; struct drm_device* dev; } ;
struct TYPE_3__ {int idr_mutex; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct TYPE_4__ {int lessee_idr; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (struct drm_master*) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct drm_master *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;

 FUNC_8(&VAR_1->mode_config.idr_mutex);

 FUNC_0("drm_lease_destroy %d\n", VAR_0->lessee_id);




 FUNC_1(!FUNC_7(&VAR_0->lessees));


 if (VAR_0->lessee_id != 0) {
  FUNC_0("remove master %d from device list of lessees\n", VAR_0->lessee_id);
  FUNC_5(&(FUNC_2(VAR_0)->lessee_idr), VAR_0->lessee_id);
 }


 FUNC_6(&VAR_0->lessee_list);

 FUNC_9(&VAR_1->mode_config.idr_mutex);

 if (VAR_0->lessor) {

  FUNC_4(VAR_1);
  FUNC_3(&VAR_0->lessor);
 }

 FUNC_0("drm_lease_destroy done %d\n", VAR_0->lessee_id);
}
