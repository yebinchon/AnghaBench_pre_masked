
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timing_generator {TYPE_1__* funcs; } ;
struct crtc_position {scalar_t__ horizontal_count; scalar_t__ vertical_count; } ;
struct TYPE_2__ {int (* get_position ) (struct timing_generator*,struct crtc_position*) ;} ;


 int FUNC_0 (struct timing_generator*,struct crtc_position*) ;
 int FUNC_1 (struct timing_generator*,struct crtc_position*) ;

bool FUNC_2(struct timing_generator *VAR_0)
{
 struct crtc_position VAR_1, VAR_2;

 VAR_0->funcs->get_position(VAR_0, &VAR_1);
 VAR_0->funcs->get_position(VAR_0, &VAR_2);

 if (VAR_1 == VAR_2 &&
  VAR_1 == VAR_2)
  return 0;
 else
  return 1;
}
