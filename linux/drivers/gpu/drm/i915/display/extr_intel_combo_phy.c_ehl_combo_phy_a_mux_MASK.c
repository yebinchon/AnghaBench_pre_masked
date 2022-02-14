
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* ddi_port_info; } ;
struct drm_i915_private {TYPE_2__ vbt; } ;
struct TYPE_3__ {int * child; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (struct drm_i915_private*,int *) ;

__attribute__((used)) static u32 FUNC_2(struct drm_i915_private *VAR_3, u32 VAR_4)
{
 bool VAR_5 = VAR_3->vbt.ddi_port_info[VAR_1].child != ((void*)0);
 bool VAR_6 = VAR_3->vbt.ddi_port_info[VAR_2].child != ((void*)0);
 bool VAR_7 = FUNC_1(VAR_3, ((void*)0));







 if (VAR_6 && !VAR_5 && !VAR_7)
  return VAR_4 | VAR_0;






 if (VAR_6)
  FUNC_0("VBT claims to have both internal and external displays on PHY A.  Configuring for internal.\n");

 return VAR_4 & ~VAR_0;
}
