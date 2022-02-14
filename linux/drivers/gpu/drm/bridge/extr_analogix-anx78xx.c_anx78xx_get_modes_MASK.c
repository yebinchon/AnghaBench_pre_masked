
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_connector {int dummy; } ;
struct TYPE_2__ {int ddc; } ;
struct anx78xx {int lock; scalar_t__ edid; TYPE_1__ aux; int powered; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct anx78xx*) ;
 struct anx78xx* FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (struct drm_connector*,scalar_t__) ;
 int FUNC_5 (struct drm_connector*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct drm_connector*,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct drm_connector *VAR_0)
{
 struct anx78xx *VAR_1 = FUNC_3(VAR_0);
 int VAR_2, VAR_3 = 0;

 if (FUNC_1(!VAR_1->powered))
  return 0;

 if (VAR_1->edid)
  return FUNC_4(VAR_0, VAR_1->edid);

 FUNC_7(&VAR_1->lock);

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  FUNC_0("Failed to get downstream info: %d\n", VAR_2);
  goto unlock;
 }

 VAR_1->edid = FUNC_6(VAR_0, &VAR_1->aux.ddc);
 if (!VAR_1->edid) {
  FUNC_0("Failed to read EDID\n");
  goto unlock;
 }

 VAR_2 = FUNC_5(VAR_0,
       VAR_1->edid);
 if (VAR_2) {
  FUNC_0("Failed to update EDID property: %d\n", VAR_2);
  goto unlock;
 }

 VAR_3 = FUNC_4(VAR_0, VAR_1->edid);

unlock:
 FUNC_8(&VAR_1->lock);

 return VAR_3;
}
