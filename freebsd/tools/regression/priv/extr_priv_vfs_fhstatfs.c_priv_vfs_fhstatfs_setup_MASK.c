
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
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,int ,int ,int ,int) ;
 int FUNC_2 (char*,int ) ;

int
FUNC_3(int VAR_5, int VAR_6, struct test *VAR_7)
{

 FUNC_1("priv_vfs_fhstatfs_setup: fpath", VAR_3, VAR_1,
     VAR_0, 0644);
 VAR_4 = 1;
 if (FUNC_0(VAR_3, &VAR_2) < 0) {
  FUNC_2("priv_vfs_fhstatfs_setup: getfh(%s)", VAR_3);
  return (-1);
 }
 return (0);
}
