
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v3d_file_priv {int * sched_entity; } ;
struct drm_file {struct v3d_file_priv* driver_priv; } ;
struct drm_device {int dummy; } ;
typedef enum v3d_queue { ____Placeholder_v3d_queue } v3d_queue ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct v3d_file_priv*) ;

__attribute__((used)) static void
FUNC_2(struct drm_device *VAR_1, struct drm_file *VAR_2)
{
 struct v3d_file_priv *VAR_3 = VAR_2->driver_priv;
 enum v3d_queue VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_0(&VAR_3->sched_entity[VAR_4]);
 }

 FUNC_1(VAR_3);
}
