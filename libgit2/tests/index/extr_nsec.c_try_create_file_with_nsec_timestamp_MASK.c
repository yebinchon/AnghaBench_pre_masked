
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_mtime_nsec; scalar_t__ st_ctime_nsec; } ;


 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,struct stat*) ;

__attribute__((used)) static bool FUNC_3(const char *VAR_0)
{
 struct stat VAR_1;
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < 3; VAR_2++) {
  FUNC_0(VAR_0, "This is hopefully a file with nanoseconds!");

  FUNC_1(FUNC_2(VAR_0, &VAR_1));

  if (VAR_1.st_ctime_nsec && VAR_1.st_mtime_nsec)
   return 1;
 }

 return 0;
}
