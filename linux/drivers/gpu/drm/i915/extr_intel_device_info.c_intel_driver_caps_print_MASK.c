
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_driver_caps {int scheduler; int has_logical_contexts; } ;
struct drm_printer {int dummy; } ;


 int FUNC_0 (struct drm_printer*,char*,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(const struct intel_driver_caps *VAR_0,
        struct drm_printer *VAR_1)
{
 FUNC_0(VAR_1, "Has logical contexts? %s\n",
     FUNC_1(VAR_0->has_logical_contexts));
 FUNC_0(VAR_1, "scheduler: %x\n", VAR_0->scheduler);
}
