
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct drm_crtc {int gamma_size; TYPE_1__* funcs; int * gamma_store; } ;
struct TYPE_2__ {int (* gamma_set ) (struct drm_crtc*,int *,int *,int *,int,int *) ;} ;


 int FUNC_0 (struct drm_crtc*,int *,int *,int *,int,int *) ;

__attribute__((used)) static void FUNC_1(struct drm_crtc *VAR_0)
{
 uint16_t *VAR_1, *VAR_2, *VAR_3;

 if (VAR_0->funcs->gamma_set == ((void*)0))
  return;

 VAR_1 = VAR_0->gamma_store;
 VAR_2 = VAR_1 + VAR_0->gamma_size;
 VAR_3 = VAR_2 + VAR_0->gamma_size;

 VAR_0->funcs->gamma_set(VAR_0, VAR_1, VAR_2, VAR_3,
          VAR_0->gamma_size, ((void*)0));
}
