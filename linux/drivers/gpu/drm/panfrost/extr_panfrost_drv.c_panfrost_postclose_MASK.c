
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panfrost_file_priv {int mm; } ;
struct drm_file {struct panfrost_file_priv* driver_priv; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct panfrost_file_priv*) ;
 int FUNC_2 (struct panfrost_file_priv*) ;
 int FUNC_3 (struct panfrost_file_priv*) ;
 int FUNC_4 (struct panfrost_file_priv*) ;

__attribute__((used)) static void
FUNC_5(struct drm_device *VAR_0, struct drm_file *VAR_1)
{
 struct panfrost_file_priv *VAR_2 = VAR_1->driver_priv;

 FUNC_4(VAR_2);
 FUNC_2(VAR_2);

 FUNC_3(VAR_2);
 FUNC_0(&VAR_2->mm);
 FUNC_1(VAR_2);
}
