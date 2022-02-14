
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
 int VAR_10 ;
 int FUNC_0 (char*,int ,int ,int ,int) ;

int
FUNC_1(int VAR_11, int VAR_12, struct test *VAR_13)
{

 FUNC_0("priv_vfs_readwrite_fowner_setup: fpath_none", VAR_3,
     VAR_11 ? VAR_2 : VAR_1, VAR_0, 0000);
 VAR_4 = 1;
 FUNC_0("priv_vfs_readwrite_fowner_setup: fpath_read", VAR_5,
     VAR_11 ? VAR_2 : VAR_1, VAR_0, 0400);
 VAR_6 = 1;
 FUNC_0("priv_vfs_readwrite_fowner_setup: fpath_write",
     VAR_9, VAR_11 ? VAR_2 : VAR_1, VAR_0, 0200);
 VAR_10 = 1;
 FUNC_0("priv_vfs_readwrite_fowner_setup: fpath_readwrite",
     VAR_7, VAR_11 ? VAR_2 : VAR_1, VAR_0, 0600);
 VAR_8 = 1;
 return (0);
}
