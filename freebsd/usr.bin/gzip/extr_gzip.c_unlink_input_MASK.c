
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_dev; scalar_t__ st_ino; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const*,struct stat*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_1, const struct stat *VAR_2)
{
 struct stat VAR_3;

 if (VAR_0)
  return;
 if (FUNC_0(VAR_1, &VAR_3) != 0)

  return;
 if (VAR_3.st_dev != VAR_2->st_dev || VAR_3.st_ino != VAR_2->st_ino)

  return;
 FUNC_1(VAR_1);
}
