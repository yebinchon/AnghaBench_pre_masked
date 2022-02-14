
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {int dummy; } ;


 int FUNC_0 (char*,int,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;

void
FUNC_2(int VAR_1, int VAR_2, struct test *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, ((void*)0));
 if (VAR_1 && VAR_2)
  FUNC_0("priv_vfs_utimes_fowner_null(root, jail)", VAR_4, 0,
      0);
 if (VAR_1 && !VAR_2)
  FUNC_0("priv_vfs_utimes_fowner_null(root, !jail)", VAR_4, 0,
      0);
 if (!VAR_1 && VAR_2)
  FUNC_0("priv_vfs_utimes_fowner_null(!root, jail)", VAR_4, 0,
      0);
 if (!VAR_1 && !VAR_2)
  FUNC_0("priv_vfs_utimes_fowner_null(!root, !jail)", VAR_4, 0,
      0);
}
