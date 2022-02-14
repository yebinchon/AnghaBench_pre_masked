
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char const* const) ;
 scalar_t__ FUNC_3 (char const* const,struct stat*) ;

__attribute__((used)) static void FUNC_4 (const char *const VAR_0) {
  struct stat VAR_1;
  if (FUNC_3 (VAR_0, &VAR_1) || !FUNC_0 (VAR_1.st_mode)) {
    FUNC_2 ("Directory %s doesn't exist\n", VAR_0);
    FUNC_1 (1);
  }
}
