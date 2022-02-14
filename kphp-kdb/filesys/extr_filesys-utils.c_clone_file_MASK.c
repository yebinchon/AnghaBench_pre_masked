
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int FUNC_0 (char const* const,char const* const,char*,struct stat*) ;
 scalar_t__ FUNC_1 (char const* const,struct stat*) ;

int FUNC_2 (const char *const VAR_0, const char *const VAR_1) {
  struct stat VAR_2;
  if (FUNC_1 (VAR_0, &VAR_2)) {
    return -1;
  }
  return FUNC_0 (VAR_0, VAR_1, "", &VAR_2);
}
