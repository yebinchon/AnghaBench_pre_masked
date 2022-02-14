
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_crtc {int dummy; } ;
struct TYPE_2__ {int frame_pending; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct drm_crtc*) ;

__attribute__((used)) static inline int FUNC_2(struct drm_crtc *VAR_1)
{
 return VAR_1 ? FUNC_0(&FUNC_1(VAR_1)->frame_pending) : -VAR_0;
}
