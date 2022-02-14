
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct cdn_dp_device {int event_work; int connected; int lock; int dev; scalar_t__ active; } ;


 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (struct cdn_dp_device*) ;
 int FUNC_2 (struct cdn_dp_device*) ;
 struct cdn_dp_device* FUNC_3 (struct drm_encoder*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct drm_encoder *VAR_0)
{
 struct cdn_dp_device *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 FUNC_4(&VAR_1->lock);
 if (VAR_1->active) {
  VAR_2 = FUNC_2(VAR_1);
  if (VAR_2) {
   FUNC_0(VAR_1->dev, "Failed to disable encoder %d\n",
          VAR_2);
  }
 }
 FUNC_5(&VAR_1->lock);
 if (!VAR_1->connected && FUNC_1(VAR_1))
  FUNC_6(&VAR_1->event_work);
}
