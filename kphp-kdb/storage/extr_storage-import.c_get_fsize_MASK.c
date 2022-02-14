
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct stat {int st_size; int st_mtime; } ;


 scalar_t__ FUNC_0 (int,struct stat*) ;

__attribute__((used)) static int FUNC_1 (int VAR_0, time_t *VAR_1) {
  struct stat VAR_2;
  if (FUNC_0 (VAR_0, &VAR_2)) {
    return -1;
  }
  if (VAR_1) {
    *VAR_1 = VAR_2.st_mtime;
  }
  return VAR_2.st_size;
}
