
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_crtc {struct device* dev; } ;
struct ipu_client_platformdata {int dummy; } ;
struct drm_device {int dummy; } ;
struct device {struct ipu_client_platformdata* platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,struct ipu_crtc*) ;
 struct ipu_crtc* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (struct ipu_crtc*,struct ipu_client_platformdata*,struct drm_device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, struct device *VAR_3, void *VAR_4)
{
 struct ipu_client_platformdata *VAR_5 = VAR_2->platform_data;
 struct drm_device *VAR_6 = VAR_4;
 struct ipu_crtc *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_2, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->dev = VAR_2;

 VAR_8 = FUNC_2(VAR_7, VAR_5, VAR_6);
 if (VAR_8)
  return VAR_8;

 FUNC_0(VAR_2, VAR_7);

 return 0;
}
