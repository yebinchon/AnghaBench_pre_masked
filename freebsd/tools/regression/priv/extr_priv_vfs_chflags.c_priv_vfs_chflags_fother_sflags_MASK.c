
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct test {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int,int,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;

void
FUNC_3(int VAR_3, int VAR_4,
    struct test *VAR_5)
{
 u_long VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_2);
 VAR_6 |= VAR_1;
 VAR_7 = FUNC_0(VAR_2, VAR_6);
 if (VAR_3 && VAR_4)
  FUNC_1("priv_vfs_chflags_fother_sflags(asroot, injail)",
      VAR_7, -1, VAR_0);
 if (VAR_3 && !VAR_4)
  FUNC_1("priv_vfs_chflags_fother_sflags(asroot, !injail)",
      VAR_7, 0, 0);
 if (!VAR_3 && VAR_4)
  FUNC_1("priv_vfs_chflags_fother_sflags(!asroot, injail)",
      VAR_7, -1, VAR_0);
 if (!VAR_3 && !VAR_4)
  FUNC_1("priv_vfs_chflags_fother_sflags(!asroot, !injail)",
      VAR_7, -1, VAR_0);
}
