
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_file_private {int obj_list; } ;
struct drm_file {struct via_file_private* driver_priv; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct via_file_private* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_2, struct drm_file *VAR_3)
{
 struct via_file_private *VAR_4;

 FUNC_0("\n");
 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_3->driver_priv = VAR_4;

 FUNC_1(&VAR_4->obj_list);

 return 0;
}
