
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
typedef int git_off_t ;
typedef int git_file ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,struct stat*) ;

git_off_t FUNC_2(git_file VAR_1)
{
 struct stat VAR_2;

 if (FUNC_1(VAR_1, &VAR_2)) {
  FUNC_0(VAR_0, "failed to stat file descriptor");
  return -1;
 }

 return VAR_2.st_size;
}
