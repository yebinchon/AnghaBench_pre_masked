
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {long long st_size; int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (int,struct stat*) ;
 scalar_t__ FUNC_4 (int,long long) ;
 scalar_t__ FUNC_5 (int,int ) ;
 int FUNC_6 (char const*,int ) ;
 int VAR_2 ;
 long long FUNC_7 (char const*,char**,int ) ;
 int FUNC_8 () ;

int FUNC_9 (int VAR_3, const char *VAR_4[]) {
  char *VAR_5;
  struct stat VAR_6;
  int VAR_7;

  if (VAR_3 != 3) {
    FUNC_8();
    return 2;
  }
  long long VAR_8 = FUNC_7 (VAR_4[2], &VAR_5, 0);
  if (!VAR_5 || *VAR_5 || !*VAR_4[2]) {
    FUNC_8();
    return 2;
  }
  VAR_7 = FUNC_6 (VAR_4[1], VAR_1);
  if (VAR_7 < 0) {
    FUNC_2 (VAR_2, "cannot open file %s: %m\n", VAR_4[1]);
    return 1;
  }
  if (FUNC_3 (VAR_7, &VAR_6) < 0) {
    FUNC_2 (VAR_2, "cannot stat file %s: %m\n", VAR_4[1]);
    return 1;
  }
  if (!FUNC_0(VAR_6.st_mode)) {
    FUNC_2 (VAR_2, "%s is not a regular file\n", VAR_4[1]);
    return 1;
  }
  if (VAR_8 >= VAR_6.st_size) {
    FUNC_2 (VAR_2, "truncate position %lld after end of file\n", VAR_8);
    return 2;
  }
  if (VAR_8 < -VAR_6.st_size) {
    FUNC_2 (VAR_2, "truncate position %lld before start of file\n", VAR_8);
    return 2;
  }
  if (VAR_8 < 0) {
    VAR_8 += VAR_6.st_size;
  }
  if (FUNC_5 (VAR_7, VAR_0) <= 0) {
    return 1;
  }
  if (FUNC_4 (VAR_7, VAR_8) < 0) {
    FUNC_2 (VAR_2, "cannot truncate file %s at position %lld: %m\n", VAR_4[1], VAR_8);
  }
  FUNC_1 (VAR_7);
  return 0;
}
