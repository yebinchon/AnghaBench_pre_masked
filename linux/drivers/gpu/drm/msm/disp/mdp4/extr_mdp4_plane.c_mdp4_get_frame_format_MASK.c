
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_framebuffer {scalar_t__ modifier; TYPE_1__* format; } ;
typedef enum mdp4_frame_format { ____Placeholder_mdp4_frame_format } mdp4_frame_format ;
struct TYPE_2__ {scalar_t__ format; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline
enum mdp4_frame_format FUNC_0(struct drm_framebuffer *VAR_4)
{
 bool VAR_5 = 0;

 if (VAR_4->modifier == VAR_0)
  VAR_5 = 1;

 if (VAR_4->format->format == VAR_1 && VAR_5)
  return VAR_3;

 return VAR_2;
}
