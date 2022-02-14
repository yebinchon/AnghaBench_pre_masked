
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
struct stat {int st_size; int st_mode; } ;
typedef int off_t ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int FUNC_1 (int ,struct stat*) ;
 int FUNC_2 (int ,int const,int *) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(void *VAR_4, int VAR_5, u_long VAR_6, void *VAR_7)
{
 struct stat VAR_8;

 if (VAR_5 < 0 || VAR_5 >= VAR_3)
  return (VAR_0);

 switch (VAR_6) {
 case 128:
  *(u_int *)VAR_7 = 512;
  break;
 case 129:
  if (FUNC_1(VAR_2[VAR_5], &VAR_8) != 0)
   return (VAR_1);
  if (FUNC_0(VAR_8.st_mode) &&
      FUNC_2(VAR_2[VAR_5], 129, &VAR_8.st_size) != 0)
    return (VAR_1);
  *(off_t *)VAR_7 = VAR_8.st_size;
  break;
 default:
  return (VAR_1);
 }

 return (0);
}
