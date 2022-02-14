
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct drm_syncobj {int dummy; } ;


 scalar_t__ FUNC_0 (struct file*) ;
 int VAR_0 ;
 int FUNC_1 (struct file*) ;
 struct file* FUNC_2 (char*,int *,struct drm_syncobj*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct drm_syncobj*) ;
 int FUNC_4 (int,struct file*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;

int FUNC_7(struct drm_syncobj *VAR_2, int *VAR_3)
{
 struct file *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_5(VAR_0);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4 = FUNC_2("syncobj_file",
      &VAR_1,
      VAR_2, 0);
 if (FUNC_0(VAR_4)) {
  FUNC_6(VAR_5);
  return FUNC_1(VAR_4);
 }

 FUNC_3(VAR_2);
 FUNC_4(VAR_5, VAR_4);

 *VAR_3 = VAR_5;
 return 0;
}
