
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_plane {int dummy; } ;
typedef enum dpu_sspp { ____Placeholder_dpu_sspp } dpu_sspp ;
struct TYPE_2__ {int pipe; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct drm_plane*) ;

enum dpu_sspp FUNC_1(struct drm_plane *VAR_1)
{
 return VAR_1 ? FUNC_0(VAR_1)->pipe : VAR_0;
}
