
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct stat {scalar_t__ st_dev; scalar_t__ st_ino; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*,int ,...) ;
 int FUNC_3 (int,struct stat*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (char*) ;

int
FUNC_6(void)
{
 int VAR_0[2];
 struct stat VAR_1, VAR_2;

 if (FUNC_4(VAR_0) == -1)
  FUNC_1(1, "FAIL: pipe");

 if (FUNC_3(VAR_0[0], &VAR_1) == -1)
  FUNC_1(1, "FAIL: fstat st1");
 if (FUNC_3(VAR_0[1], &VAR_2) == -1)
  FUNC_1(1, "FAIL: fstat st2");
 if (VAR_1 != VAR_2 || VAR_1 == 0 || VAR_2 == 0)
  FUNC_2(1, "FAIL: wrong dev number %ju %ju",
      (uintmax_t)VAR_1, (uintmax_t)VAR_2);
 if (VAR_1 == VAR_2)
  FUNC_2(1, "FAIL: inode numbers are equal: %ju",
      (uintmax_t)VAR_1);

 FUNC_0(VAR_0[0]);
 FUNC_0(VAR_0[1]);
 FUNC_5("PASS\n");

 return (0);
}
