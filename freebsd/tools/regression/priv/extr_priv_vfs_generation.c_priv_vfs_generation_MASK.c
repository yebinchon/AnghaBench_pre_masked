
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {int dummy; } ;
struct stat {scalar_t__ st_gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,struct stat*) ;
 int FUNC_2 (char*) ;

void
FUNC_3(int VAR_3, int VAR_4, struct test *VAR_5)
{
 struct stat VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2, &VAR_6);
 if (VAR_7 < 0)
  FUNC_2("priv_vfs_generation(asroot, injail) stat");

 if (VAR_6.st_gen == 0) {
  VAR_7 = -1;
  VAR_1 = VAR_0;
 } else
  VAR_7 = 0;
 if (VAR_3 && VAR_4)
  FUNC_0("priv_vfs_generation(asroot, injail)", VAR_7, -1,
      VAR_0);
 if (VAR_3 && !VAR_4)
  FUNC_0("priv_vfs_generation(asroot, !injail)", VAR_7, 0, 0);
 if (!VAR_3 && VAR_4)
  FUNC_0("priv_vfs_generation(!asroot, injail)", VAR_7, -1,
      VAR_0);
 if (!VAR_3 && !VAR_4)
  FUNC_0("priv_vfs_generation(!asroot, !injail)", VAR_7, -1,
      VAR_0);
}
