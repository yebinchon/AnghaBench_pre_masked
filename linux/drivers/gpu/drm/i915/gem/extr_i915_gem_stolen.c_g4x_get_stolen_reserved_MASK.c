
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int end; } ;
struct drm_i915_private {TYPE_1__ dsm; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_5,
        resource_size_t *VAR_6,
        resource_size_t *VAR_7)
{
 u32 VAR_8 = FUNC_1(FUNC_3(VAR_5) ?
    VAR_0 :
    VAR_1);
 resource_size_t VAR_9 = VAR_5->dsm.end + 1;

 FUNC_0("%s_STOLEN_RESERVED = %08x\n",
    FUNC_3(VAR_5) ? "CTG" : "ELK", VAR_8);

 if ((VAR_8 & VAR_4) == 0)
  return;





 FUNC_4(FUNC_2(VAR_5, 5), "ILK stolen reserved found? 0x%08x\n",
      VAR_8);

 if (!(VAR_8 & VAR_3))
  return;

 *VAR_6 = (VAR_8 & VAR_3) << 16;
 FUNC_5((VAR_8 & VAR_2) < *VAR_6);

 *VAR_7 = VAR_9 - *VAR_6;
}
