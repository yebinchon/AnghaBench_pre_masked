
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mga_crtc* crtc; } ;
struct mga_device {TYPE_1__ mode_info; int dev; } ;
struct mga_crtc {int base; } ;
struct drm_connector {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int *,int ) ;
 struct mga_crtc* FUNC_3 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(struct mga_device *VAR_5)
{
 struct mga_crtc *VAR_6;

 VAR_6 = FUNC_3(sizeof(struct mga_crtc) +
         (VAR_1 * sizeof(struct drm_connector *)),
         VAR_0);

 if (VAR_6 == ((void*)0))
  return;

 FUNC_1(VAR_5->dev, &VAR_6->base, &VAR_3);

 FUNC_2(&VAR_6->base, VAR_2);
 VAR_5->mode_info.crtc = VAR_6;

 FUNC_0(&VAR_6->base, &VAR_4);
}
