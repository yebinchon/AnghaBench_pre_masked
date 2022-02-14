
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {int dummy; } ;
struct stat {scalar_t__ st_gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,int ,int ,int) ;
 scalar_t__ FUNC_1 (int ,struct stat*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;

int
FUNC_5(int VAR_5, int VAR_6, struct test *VAR_7)
{
 struct stat VAR_8;
 int VAR_9;







 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  FUNC_0("priv_vfs_generation_setup: fpath", VAR_3,
      VAR_2, VAR_0, 0644);
  if (FUNC_1(VAR_3, &VAR_8) < 0) {
   FUNC_3("priv_vfs_generation_setup: fstat(%s)", VAR_3);
   (void)FUNC_2(VAR_3);
   return (-1);
  }
  if (VAR_8.st_gen != 0) {
   VAR_4 = 1;
   return (0);
  }
 }
 FUNC_4("priv_vfs_generation_setup: unable to create gen file");
 return (-1);
}
