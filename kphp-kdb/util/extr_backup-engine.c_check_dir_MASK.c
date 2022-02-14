
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_dev; int st_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (char*,struct stat*) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4 (char *VAR_4, struct stat *VAR_5, int VAR_6) {
  if (FUNC_2 (VAR_4, VAR_5) < 0) {
    if (VAR_3 != VAR_0 || !VAR_6) {
      return -1;
    }
    if (FUNC_1 (VAR_4, 0750) < 0) {
      return -1;
    }
    if (FUNC_2 (VAR_4, VAR_5) < 0) {
      return -1;
    }
  }
  if (!FUNC_0 (VAR_5->st_mode) || FUNC_3 (VAR_4) > VAR_2) {
    VAR_3 = VAR_1;
    return -1;
  }
  return VAR_5->st_dev;
}
