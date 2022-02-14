
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int end; } ;
struct drm_i915_private {TYPE_1__ dsm; } ;
typedef int resource_size_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_3,
        resource_size_t *VAR_4,
        resource_size_t *VAR_5)
{
 u32 VAR_6 = FUNC_1(VAR_0);
 resource_size_t VAR_7 = VAR_3->dsm.end + 1;

 FUNC_0("GEN6_STOLEN_RESERVED = %08x\n", VAR_6);

 if (!(VAR_6 & VAR_1))
  return;

 switch (VAR_6 & VAR_2) {
 default:
  FUNC_2(VAR_6 & VAR_2);

 case 128:
  *VAR_5 = 1024 * 1024;
  break;
 }





 *VAR_4 = VAR_7 - *VAR_5;
}
