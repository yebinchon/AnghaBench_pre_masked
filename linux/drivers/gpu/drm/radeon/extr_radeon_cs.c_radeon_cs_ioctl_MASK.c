
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int exclusive_lock; int family; int dev; scalar_t__ in_reset; int accel_working; } ;
struct radeon_cs_parser {int family; int dev; struct radeon_device* rdev; struct drm_file* filp; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct radeon_cs_parser*,int ,int) ;
 int FUNC_3 (struct radeon_device*,int) ;
 int FUNC_4 (struct radeon_device*,struct radeon_cs_parser*) ;
 int FUNC_5 (struct radeon_device*,struct radeon_cs_parser*) ;
 int FUNC_6 (struct radeon_device*,struct radeon_cs_parser*) ;
 int FUNC_7 (struct radeon_cs_parser*,int,int) ;
 int FUNC_8 (struct radeon_cs_parser*,void*) ;
 int FUNC_9 (struct radeon_cs_parser*) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_cs_parser*) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct drm_device *VAR_3, void *VAR_4, struct drm_file *VAR_5)
{
 struct radeon_device *VAR_6 = VAR_3->dev_private;
 struct radeon_cs_parser VAR_7;
 int VAR_8;

 FUNC_1(&VAR_6->exclusive_lock);
 if (!VAR_6->accel_working) {
  FUNC_12(&VAR_6->exclusive_lock);
  return -VAR_1;
 }
 if (VAR_6->in_reset) {
  FUNC_12(&VAR_6->exclusive_lock);
  VAR_8 = FUNC_10(VAR_6);
  if (!VAR_8)
   VAR_8 = -VAR_0;
  return VAR_8;
 }

 FUNC_2(&VAR_7, 0, sizeof(struct radeon_cs_parser));
 VAR_7.filp = VAR_5;
 VAR_7.rdev = VAR_6;
 VAR_7.dev = VAR_6->dev;
 VAR_7.family = VAR_6->family;
 VAR_8 = FUNC_8(&VAR_7, VAR_4);
 if (VAR_8) {
  FUNC_0("Failed to initialize parser !\n");
  FUNC_7(&VAR_7, VAR_8, 0);
  FUNC_12(&VAR_6->exclusive_lock);
  VAR_8 = FUNC_3(VAR_6, VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_5(VAR_6, &VAR_7);
 if (!VAR_8) {
  VAR_8 = FUNC_9(&VAR_7);
  if (VAR_8 && VAR_8 != -VAR_2)
   FUNC_0("Failed to parse relocation %d!\n", VAR_8);
 }

 if (VAR_8) {
  FUNC_7(&VAR_7, VAR_8, 0);
  FUNC_12(&VAR_6->exclusive_lock);
  VAR_8 = FUNC_3(VAR_6, VAR_8);
  return VAR_8;
 }

 FUNC_11(&VAR_7);

 VAR_8 = FUNC_4(VAR_6, &VAR_7);
 if (VAR_8) {
  goto out;
 }
 VAR_8 = FUNC_6(VAR_6, &VAR_7);
 if (VAR_8) {
  goto out;
 }
out:
 FUNC_7(&VAR_7, VAR_8, 1);
 FUNC_12(&VAR_6->exclusive_lock);
 VAR_8 = FUNC_3(VAR_6, VAR_8);
 return VAR_8;
}
