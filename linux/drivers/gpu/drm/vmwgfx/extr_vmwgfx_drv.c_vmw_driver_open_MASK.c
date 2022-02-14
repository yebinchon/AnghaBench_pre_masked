
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {int tdev; } ;
struct vmw_fpriv {int * tfile; } ;
struct drm_file {struct vmw_fpriv* driver_priv; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vmw_fpriv*) ;
 struct vmw_fpriv* FUNC_1 (int,int ) ;
 int * FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int) ;
 struct vmw_private* FUNC_4 (struct drm_device*) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_2, struct drm_file *VAR_3)
{
 struct vmw_private *VAR_4 = FUNC_4(VAR_2);
 struct vmw_fpriv *VAR_5;
 int VAR_6 = -VAR_0;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (FUNC_3(!VAR_5))
  return VAR_6;

 VAR_5->tfile = FUNC_2(VAR_4->tdev, 10);
 if (FUNC_3(VAR_5->tfile == ((void*)0)))
  goto out_no_tfile;

 VAR_3->driver_priv = VAR_5;

 return 0;

out_no_tfile:
 FUNC_0(VAR_5);
 return VAR_6;
}
