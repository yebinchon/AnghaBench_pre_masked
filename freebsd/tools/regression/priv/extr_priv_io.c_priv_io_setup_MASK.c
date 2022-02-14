
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {int dummy; } ;
struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,struct stat*) ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 (char*,int,int) ;

int
FUNC_4(int VAR_6, int VAR_7, struct test *VAR_8)
{
 struct stat VAR_9;

 if (FUNC_1(VAR_1, &VAR_9) < 0) {
  FUNC_2("priv_io_setup: stat(%s)", VAR_1);
  return (-1);
 }
 VAR_5 = VAR_9.st_mode & VAR_0;
 if (VAR_5 != VAR_2) {
  FUNC_3("priv_io_setup: perms = 0%o; expected 0%o",
      VAR_5, VAR_2);
  return (-1);
 }
 if (FUNC_0(VAR_1, VAR_3) < 0) {
  FUNC_2("priv_io_setup: chmod(%s, 0%o)", VAR_1, VAR_3);
  return (-1);
 }
 VAR_4 = 1;
 return (0);
}
