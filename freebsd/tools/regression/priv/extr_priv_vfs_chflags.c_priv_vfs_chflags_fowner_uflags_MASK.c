
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct test {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

void
FUNC_3(int VAR_2, int VAR_3,
    struct test *VAR_4)
{
 u_long VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_1);
 VAR_5 |= VAR_0;
 VAR_6 = FUNC_0(VAR_1, VAR_5);
 if (VAR_2 && VAR_3)
  FUNC_1("priv_vfs_chflags_fowner_uflags(asroot, injail)",
      VAR_6, 0, 0);
 if (VAR_2 && !VAR_3)
  FUNC_1("priv_vfs_chflags_fowner_uflags(asroot, !injail)",
      VAR_6, 0, 0);
 if (!VAR_2 && VAR_3)
  FUNC_1("priv_vfs_chflags_fowner_uflags(!asroot, injail)",
      VAR_6, 0, 0);
 if (!VAR_2 && !VAR_3)
  FUNC_1("priv_vfs_chflags_fowner_uflags(!asroot, !injail)",
      VAR_6, 0, 0);
}
