
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct test {int dummy; } ;


 int FUNC_0 (char*,int,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct timeval*) ;

void
FUNC_2(int VAR_1, int VAR_2, struct test *VAR_3)
{
 struct timeval VAR_4[2];
 int VAR_5;

 VAR_4[0].tv_sec = 0;
 VAR_4[0].tv_usec = 0;
 VAR_4[1].tv_sec = 0;
 VAR_4[1].tv_usec = 0;
 VAR_5 = FUNC_1(VAR_0, VAR_4);
 if (VAR_1 && VAR_2)
  FUNC_0("priv_vfs_utimes_fowner(root, jail)", VAR_5, 0, 0);
 if (VAR_1 && !VAR_2)
  FUNC_0("priv_vfs_utimes_fowner(root, !jail)", VAR_5, 0, 0);
 if (!VAR_1 && VAR_2)
  FUNC_0("priv_vfs_utimes_fowner(!root, jail)", VAR_5, 0, 0);
 if (!VAR_1 && !VAR_2)
  FUNC_0("priv_vfs_utimes_fowner(!root, !jail)", VAR_5, 0, 0);
}
