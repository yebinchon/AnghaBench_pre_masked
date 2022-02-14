
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct komeda_kms_dev {int base; } ;
struct drm_crtc {int port; } ;
struct komeda_crtc {TYPE_1__* master; struct drm_crtc base; } ;
struct TYPE_2__ {int of_output_port; } ;


 int FUNC_0 (struct drm_crtc*,int *) ;
 int FUNC_1 (int *,struct drm_crtc*,int ,int *,int *,int *) ;
 int FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct komeda_kms_dev*,struct komeda_crtc*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct komeda_kms_dev *VAR_2,
      struct komeda_crtc *VAR_3)
{
 struct drm_crtc *VAR_4 = &VAR_3->base;
 int VAR_5;

 VAR_5 = FUNC_1(&VAR_2->base, VAR_4,
     FUNC_3(VAR_2, VAR_3), ((void*)0),
     &VAR_0, ((void*)0));
 if (VAR_5)
  return VAR_5;

 FUNC_0(VAR_4, &VAR_1);
 FUNC_2(VAR_4);

 VAR_4->port = VAR_3->master->of_output_port;

 return VAR_5;
}
