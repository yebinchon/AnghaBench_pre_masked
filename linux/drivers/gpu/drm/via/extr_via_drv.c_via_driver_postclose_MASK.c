
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_file_private {int dummy; } ;
struct drm_file {struct via_file_private* driver_priv; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct via_file_private*) ;

__attribute__((used)) static void FUNC_1(struct drm_device *VAR_0, struct drm_file *VAR_1)
{
 struct via_file_private *VAR_2 = VAR_1->driver_priv;

 FUNC_0(VAR_2);
}
