
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
 int FUNC_0 (char*,int ,int,int,int ,int,int ) ;

void
FUNC_1(int VAR_8, int VAR_9, struct test *VAR_10)
{

 FUNC_0("priv_vfs_readwrite_fother(none, O_RDONLY)", VAR_4,
     VAR_8, VAR_9, VAR_1, VAR_8 ? 0 : -1, VAR_0);
 FUNC_0("priv_vfs_readwrite_fother(none, O_WRONLY)", VAR_4,
     VAR_8, VAR_9, VAR_3, VAR_8 ? 0 : -1, VAR_0);
 FUNC_0("priv_vfs_readwrite_fother(none, O_RDWR)", VAR_4,
     VAR_8, VAR_9, VAR_2, VAR_8 ? 0 : -1, VAR_0);

 FUNC_0("priv_vfs_readwrite_fother(read, O_RDONLY)", VAR_5,
     VAR_8, VAR_9, VAR_1, 0, 0);
 FUNC_0("priv_vfs_readwrite_fother(read, O_WRONLY)", VAR_5,
     VAR_8, VAR_9, VAR_3, VAR_8 ? 0 : -1, VAR_0);
 FUNC_0("priv_vfs_readwrite_fother(read, O_RDWR)", VAR_5,
     VAR_8, VAR_9, VAR_2, VAR_8 ? 0 : -1, VAR_0);

 FUNC_0("priv_vfs_readwrite_fother(write, O_RDONLY)", VAR_7,
     VAR_8, VAR_9, VAR_1, VAR_8 ? 0 : -1, VAR_0);
 FUNC_0("priv_vfs_readwrite_fother(write, O_WRONLY)", VAR_7,
     VAR_8, VAR_9, VAR_3, 0, 0);
 FUNC_0("priv_vfs_readwrite_fother(write, O_RDWR)", VAR_7,
     VAR_8, VAR_9, VAR_2, VAR_8 ? 0 : -1, VAR_0);

 FUNC_0("priv_vfs_readwrite_fother(write, O_RDONLY)", VAR_6,
     VAR_8, VAR_9, VAR_1, 0, 0);
 FUNC_0("priv_vfs_readwrite_fother(write, O_WRONLY)", VAR_6,
     VAR_8, VAR_9, VAR_3, 0, 0);
 FUNC_0("priv_vfs_readwrite_fother(write, O_RDWR)", VAR_6,
     VAR_8, VAR_9, VAR_2, 0, 0);
}
