
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct drm_connector {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_crtc*,int *) ;
 int FUNC_1 (struct drm_device*,struct drm_crtc*,int *) ;
 struct drm_crtc* FUNC_2 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_4)
{
 struct drm_crtc *VAR_5;

 VAR_5 = FUNC_2(sizeof(struct drm_crtc) + sizeof(struct drm_connector *), VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 FUNC_1(VAR_4, VAR_5, &VAR_2);
 FUNC_0(VAR_5, &VAR_3);

 return 0;
}
