
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_opregion {int vbt_size; scalar_t__ vbt_firmware; scalar_t__ vbt; } ;
struct firmware {int size; int data; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct drm_i915_private {TYPE_2__ drm; struct intel_opregion opregion; } ;
struct TYPE_6__ {char* vbt_firmware; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct firmware const*) ;
 int FUNC_5 (struct firmware const**,char const*,int *) ;

__attribute__((used)) static int FUNC_6(struct drm_i915_private *VAR_5)
{
 struct intel_opregion *VAR_6 = &VAR_5->opregion;
 const struct firmware *VAR_7 = ((void*)0);
 const char *VAR_8 = VAR_4.vbt_firmware;
 int VAR_9;

 if (!VAR_8 || !*VAR_8)
  return -VAR_1;

 VAR_9 = FUNC_5(&VAR_7, VAR_8, &VAR_5->drm.pdev->dev);
 if (VAR_9) {
  FUNC_1("Requesting VBT firmware \"%s\" failed (%d)\n",
     VAR_8, VAR_9);
  return VAR_9;
 }

 if (FUNC_2(VAR_7->data, VAR_7->size)) {
  VAR_6->vbt_firmware = FUNC_3(VAR_7->data, VAR_7->size, VAR_3);
  if (VAR_6->vbt_firmware) {
   FUNC_0("Found valid VBT firmware \"%s\"\n", VAR_8);
   VAR_6->vbt = VAR_6->vbt_firmware;
   VAR_6->vbt_size = VAR_7->size;
   VAR_9 = 0;
  } else {
   VAR_9 = -VAR_2;
  }
 } else {
  FUNC_0("Invalid VBT firmware \"%s\"\n", VAR_8);
  VAR_9 = -VAR_0;
 }

 FUNC_4(VAR_7);

 return VAR_9;
}
