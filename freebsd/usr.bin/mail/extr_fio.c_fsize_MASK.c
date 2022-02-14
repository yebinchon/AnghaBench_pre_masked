
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
typedef int off_t ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,struct stat*) ;

off_t
FUNC_2(FILE *VAR_0)
{
 struct stat VAR_1;

 if (FUNC_1(FUNC_0(VAR_0), &VAR_1) < 0)
  return (0);
 return (VAR_1.st_size);
}
