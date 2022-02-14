
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,struct stat*) ;

ssize_t FUNC_1(char *VAR_0)
{
 struct stat VAR_1;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, &VAR_1);
 if (VAR_2)
  return -1;

 return VAR_1.st_size;
}
