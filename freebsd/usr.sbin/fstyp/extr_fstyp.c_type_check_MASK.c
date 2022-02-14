
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int off_t ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (int,char*,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,struct stat*) ;
 int FUNC_5 (int,int ,int *) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_1, FILE *VAR_2)
{
 int VAR_3, VAR_4;
 off_t VAR_5;
 struct stat VAR_6;

 VAR_4 = FUNC_3(VAR_2);

 VAR_3 = FUNC_4(VAR_4, &VAR_6);
 if (VAR_3 != 0)
  FUNC_1(1, "%s: fstat", VAR_1);

 if (FUNC_0(VAR_6.st_mode))
  return;

 VAR_3 = FUNC_5(VAR_4, VAR_0, &VAR_5);
 if (VAR_3 != 0)
  FUNC_2(1, "%s: not a disk", VAR_1);
}
