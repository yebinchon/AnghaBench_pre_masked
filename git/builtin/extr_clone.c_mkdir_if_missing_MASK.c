
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int mode_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,char const*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char const*,int ) ;
 scalar_t__ FUNC_5 (char const*,struct stat*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_2, mode_t VAR_3)
{
 struct stat VAR_4;

 if (!FUNC_4(VAR_2, VAR_3))
  return;

 if (VAR_1 != VAR_0)
  FUNC_3(FUNC_1("failed to create directory '%s'"), VAR_2);
 else if (FUNC_5(VAR_2, &VAR_4))
  FUNC_3(FUNC_1("failed to stat '%s'"), VAR_2);
 else if (!FUNC_0(VAR_4.st_mode))
  FUNC_2(FUNC_1("%s exists and is not a directory"), VAR_2);
}
