
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_fpriv {int tfile; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct vmw_fpriv*) ;
 int FUNC_1 (int *) ;
 struct vmw_fpriv* FUNC_2 (struct drm_file*) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_0,
    struct drm_file *VAR_1)
{
 struct vmw_fpriv *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(&VAR_2->tfile);
 FUNC_0(VAR_2);
}
