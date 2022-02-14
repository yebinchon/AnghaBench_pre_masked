
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int file_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const* const,int **,int ,int) ;
 int FUNC_4 (char*,char const* const,...) ;
 scalar_t__ FUNC_5 (char const* const,struct stat*) ;
 int FUNC_6 (int,char*,char const* const) ;

__attribute__((used)) static int FUNC_7 (const char *const VAR_0, struct stat *VAR_1) {
  if (FUNC_5 (VAR_0, VAR_1) || !FUNC_0 (VAR_1->st_mode)) {
    FUNC_4 ("Directory %s doesn't exist\n", VAR_0);
    FUNC_1 (1);
  }

  file_t *VAR_2;
  int VAR_3 = FUNC_3 (VAR_0, &VAR_2, 0, 1);
  FUNC_2 (VAR_2);
  if (VAR_3 < 0) {
    FUNC_4 ("getdir (%s) returns error code %d.\n", VAR_0, VAR_3);
    FUNC_1 (1);
  }
  if (VAR_3 > 0) {
    FUNC_6 (1, "%s isn't empty directory!\n", VAR_0);
    return 0;
  }
  return 1;
}
