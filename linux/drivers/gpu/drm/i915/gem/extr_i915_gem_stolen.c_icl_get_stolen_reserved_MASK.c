
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct drm_i915_private {int uncore; } ;
typedef int resource_size_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_3,
        resource_size_t *VAR_4,
        resource_size_t *VAR_5)
{
 u64 VAR_6 = FUNC_2(&VAR_3->uncore, VAR_1);

 FUNC_0("GEN6_STOLEN_RESERVED = 0x%016llx\n", VAR_6);

 *VAR_4 = VAR_6 & VAR_0;

 switch (VAR_6 & VAR_2) {
 case 131:
  *VAR_5 = 1024 * 1024;
  break;
 case 130:
  *VAR_5 = 2 * 1024 * 1024;
  break;
 case 129:
  *VAR_5 = 4 * 1024 * 1024;
  break;
 case 128:
  *VAR_5 = 8 * 1024 * 1024;
  break;
 default:
  *VAR_5 = 8 * 1024 * 1024;
  FUNC_1(VAR_6 & VAR_2);
 }
}
