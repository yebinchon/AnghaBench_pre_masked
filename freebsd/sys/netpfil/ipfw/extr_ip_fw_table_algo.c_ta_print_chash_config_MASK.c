
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_info {int dummy; } ;
struct chash_cfg {int mask4; int mask6; } ;


 int FUNC_0 (char*,size_t,char*,char*,...) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, struct table_info *VAR_1, char *VAR_2,
    size_t VAR_3)
{
 struct chash_cfg *VAR_4;

 VAR_4 = (struct chash_cfg *)VAR_0;

 if (VAR_4->mask4 != 32 || VAR_4->mask6 != 128)
  FUNC_0(VAR_2, VAR_3, "%s masks=/%d,/%d", "addr:hash",
      VAR_4->mask4, VAR_4->mask6);
 else
  FUNC_0(VAR_2, VAR_3, "%s", "addr:hash");
}
