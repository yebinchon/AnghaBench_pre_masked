
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_file {int driver_priv; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct drm_device *VAR_0, void *VAR_1,
  struct drm_file *VAR_2)
{
 u32 VAR_3 = *(u32 *) VAR_1;

 return FUNC_0(VAR_2->driver_priv, VAR_3);
}
