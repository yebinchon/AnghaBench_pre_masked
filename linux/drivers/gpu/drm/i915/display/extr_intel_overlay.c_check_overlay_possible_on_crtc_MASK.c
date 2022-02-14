
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_overlay {int dummy; } ;
struct intel_crtc {TYPE_1__* config; int active; } ;
struct TYPE_2__ {scalar_t__ double_wide; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct intel_overlay *VAR_1,
       struct intel_crtc *VAR_2)
{
 if (!VAR_2->active)
  return -VAR_0;


 if (VAR_2->config->double_wide)
  return -VAR_0;

 return 0;
}
