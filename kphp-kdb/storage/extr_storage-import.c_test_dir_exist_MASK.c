
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char const* const) ;
 scalar_t__ FUNC_3 (char const* const,struct stat*) ;
 int FUNC_4 (char const* const) ;

__attribute__((used)) static void FUNC_5 (const char *const VAR_1) {
  if (FUNC_4 (VAR_1) > (VAR_0 - 256)) {
    FUNC_2 ("%s too long\n", VAR_1);
    FUNC_1 (1);
  }
  struct stat VAR_2;
  if (FUNC_3 (VAR_1, &VAR_2) || !FUNC_0 (VAR_2.st_mode)) {
    FUNC_2 ("Directory %s doesn't exist\n", VAR_1);
    FUNC_1 (1);
  }
}
