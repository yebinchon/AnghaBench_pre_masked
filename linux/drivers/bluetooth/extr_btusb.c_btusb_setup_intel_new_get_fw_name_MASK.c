
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_version {int hw_variant; int hw_revision; int fw_revision; } ;
struct intel_boot_params {int dev_revid; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,size_t,char*,int,int,...) ;

__attribute__((used)) static bool FUNC_2(struct intel_version *VAR_0,
          struct intel_boot_params *VAR_1,
          char *VAR_2, size_t VAR_3,
          const char *VAR_4)
{
 switch (VAR_0->hw_variant) {
 case 0x0b:
 case 0x0c:
  FUNC_1(VAR_2, VAR_3, "intel/ibt-%u-%u.%s",
   FUNC_0(VAR_0->hw_variant),
   FUNC_0(VAR_1->dev_revid),
   VAR_4);
  break;
 case 0x11:
 case 0x12:
 case 0x13:
 case 0x14:
  FUNC_1(VAR_2, VAR_3, "intel/ibt-%u-%u-%u.%s",
   FUNC_0(VAR_0->hw_variant),
   FUNC_0(VAR_0->hw_revision),
   FUNC_0(VAR_0->fw_revision),
   VAR_4);
  break;
 default:
  return 0;
 }
 return 1;
}
