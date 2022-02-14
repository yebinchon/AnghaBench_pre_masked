
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_minor {int kdev; int index; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_minor*) ;
 struct drm_minor** FUNC_4 (struct drm_device*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct drm_device *VAR_2, unsigned int VAR_3)
{
 struct drm_minor *VAR_4;
 unsigned long VAR_5;

 VAR_4 = *FUNC_4(VAR_2, VAR_3);
 if (!VAR_4 || !FUNC_2(VAR_4->kdev))
  return;


 FUNC_6(&VAR_0, VAR_5);
 FUNC_5(&VAR_1, ((void*)0), VAR_4->index);
 FUNC_7(&VAR_0, VAR_5);

 FUNC_1(VAR_4->kdev);
 FUNC_0(VAR_4->kdev, ((void*)0));
 FUNC_3(VAR_4);
}
