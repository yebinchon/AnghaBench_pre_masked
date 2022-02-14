
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,int ,int ,int ,int) ;

int
FUNC_1(int VAR_10, int VAR_11, struct test *VAR_12)
{

 FUNC_0("priv_vfs_readwrite_fother_setup: fpath_none", VAR_2,
     VAR_1, VAR_0, 0000);
 VAR_3 = 1;
 FUNC_0("priv_vfs_readwrite_fother_setup: fpath_read", VAR_4,
     VAR_1, VAR_0, 0004);
 VAR_5 = 1;
 FUNC_0("priv_vfs_readwrite_fother_setup: fpath_write",
     VAR_8, VAR_1, VAR_0, 0002);
 VAR_9 = 1;
 FUNC_0("priv_vfs_readwrite_fother_setup: fpath_readwrite",
     VAR_6, VAR_1, VAR_0, 0006);
 VAR_7 = 1;
 return (0);
}
