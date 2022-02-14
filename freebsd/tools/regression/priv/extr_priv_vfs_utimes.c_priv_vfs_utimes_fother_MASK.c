
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct test {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct timeval*) ;

void
FUNC_2(int VAR_2, int VAR_3, struct test *VAR_4)
{
 struct timeval VAR_5[2];
 int VAR_6;

 VAR_5[0].tv_sec = 0;
 VAR_5[0].tv_usec = 0;
 VAR_5[1].tv_sec = 0;
 VAR_5[1].tv_usec = 0;
 VAR_6 = FUNC_1(VAR_1, VAR_5);
 if (VAR_2 && VAR_3)
  FUNC_0("priv_vfs_utimes_fother(root, jail)", VAR_6, 0, 0);
 if (VAR_2 && !VAR_3)
  FUNC_0("priv_vfs_utimes_fother(root, !jail)", VAR_6, 0, 0);
 if (!VAR_2 && VAR_3)
  FUNC_0("priv_vfs_utimes_fother(!root, jail)", VAR_6, -1,
      VAR_0);
 if (!VAR_2 && !VAR_3)
  FUNC_0("priv_vfs_utimes_fother(!root, !jail)", VAR_6, -1,
      VAR_0);
}
