
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwmbt_version {int hw_variant; int hw_revision; int fw_revision; } ;
struct iwmbt_boot_params {int dev_revid; } ;


 int FUNC_0 (char**,char*,char const*,int ,int ,char const*,...) ;
 int FUNC_1 (int) ;

char *
FUNC_2(struct iwmbt_version *VAR_0, struct iwmbt_boot_params *VAR_1,
    const char *VAR_2, const char *VAR_3)
{
 char *VAR_4;

 switch (VAR_0->hw_variant) {
 case 0x0b:
 case 0x0c:
  FUNC_0(&VAR_4, "%s/ibt-%u-%u.%s",
      VAR_2,
      FUNC_1(VAR_0->hw_variant),
      FUNC_1(VAR_1->dev_revid),
      VAR_3);
  break;

 case 0x11:
 case 0x12:
 case 0x13:
 case 0x14:
  FUNC_0(&VAR_4, "%s/ibt-%u-%u-%s.%s",
      VAR_2,
      FUNC_1(VAR_0->hw_variant),
      FUNC_1(VAR_0->hw_revision),
      FUNC_1(VAR_0->fw_revision),
      VAR_3);
  break;

 default:
  VAR_4 = ((void*)0);
 }

 return (VAR_4);
}
