
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int *) ;
 scalar_t__ FUNC_2 (int *,struct stat*) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_3 (void) {
  if (VAR_0 == ((void*)0)) {
    return -1;
  }
  struct stat VAR_1;
  if (FUNC_2 (VAR_0, &VAR_1) < 0) {
    FUNC_1 ("lstat for path '%s' failed. %m\n", VAR_0);
    return -1;
  }
  if (!FUNC_0 (VAR_1.st_mode)) {
    FUNC_1 ("'%s' isn't directory.\n", VAR_0);
    return -1;
  }
  return 0;
}
