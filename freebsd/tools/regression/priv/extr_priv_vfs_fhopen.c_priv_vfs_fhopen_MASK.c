
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (char*,int,int,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;

void
FUNC_3(int VAR_4, int VAR_5, struct test *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;

 VAR_9 = FUNC_2(&VAR_3, VAR_1);
 if (VAR_9 >= 0) {
  VAR_8 = 0;
  VAR_7 = VAR_2;
  FUNC_0(VAR_9);
  VAR_2 = VAR_7;
 } else
  VAR_8 = -1;
 if (VAR_4 && VAR_5)
  FUNC_1("priv_vfs_fhopen(asroot, injail)", VAR_8, -1, VAR_0);
 if (VAR_4 && !VAR_5)
  FUNC_1("priv_vfs_fhopen(asroot, !injail)", VAR_8, 0, 0);
 if (!VAR_4 && VAR_5)
  FUNC_1("priv_vfs_fhopen(!asroot, injail)", VAR_8, -1, VAR_0);
 if (!VAR_4 && !VAR_5)
  FUNC_1("priv_vfs_fhopen(!asroot, !injail)", VAR_8, -1, VAR_0);
}
