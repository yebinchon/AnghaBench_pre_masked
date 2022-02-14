
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct stat {int st_size; int st_mode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,struct stat*) ;
 scalar_t__ FUNC_2 (int,int ,int *) ;

uint64_t
FUNC_3(void *VAR_1)
{
 struct stat VAR_2;
 int VAR_3;

 VAR_3 = *(int *)VAR_1;
 if (FUNC_1(VAR_3, &VAR_2) != 0)
  return (0);
 if (FUNC_0(VAR_2.st_mode) && FUNC_2(VAR_3, VAR_0, &VAR_2.st_size) != 0)
  return (0);
 return (VAR_2.st_size);
}
