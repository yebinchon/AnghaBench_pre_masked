
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_minor {int index; int kdev; } ;
struct drm_device {int dummy; } ;


 struct drm_minor** FUNC_0 (struct drm_device*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct drm_minor*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct drm_device *VAR_2, unsigned int VAR_3)
{
 struct drm_minor **VAR_4, *VAR_5;
 unsigned long VAR_6;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 VAR_5 = *VAR_4;
 if (!VAR_5)
  return;

 FUNC_3(VAR_5->kdev);

 FUNC_4(&VAR_0, VAR_6);
 FUNC_1(&VAR_1, VAR_5->index);
 FUNC_5(&VAR_0, VAR_6);

 FUNC_2(VAR_5);
 *VAR_4 = ((void*)0);
}
