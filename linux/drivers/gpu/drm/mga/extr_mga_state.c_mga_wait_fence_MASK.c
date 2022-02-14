
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_file {int dummy; } ;
struct drm_device {int * dev_private; } ;
typedef int drm_mga_private_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct drm_device*,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct drm_device *VAR_2, void *VAR_3, struct drm_file *
VAR_4)
{
 drm_mga_private_t *VAR_5 = VAR_2->dev_private;
 u32 *VAR_6 = VAR_3;

 if (!VAR_5) {
  FUNC_1("called with no initialization\n");
  return -VAR_0;
 }

 FUNC_0("pid=%d\n", FUNC_3(VAR_1));

 FUNC_2(VAR_2, VAR_6);
 return 0;
}
