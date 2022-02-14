
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char const*) ;
 scalar_t__ FUNC_4 (int ,struct stat*) ;

FILE *FUNC_5(const char *VAR_2, const char *VAR_3)
{
 FILE *VAR_4;
 struct stat VAR_5;

 if (VAR_3[0] == 'w' || VAR_3[0] == 'a')
  return FUNC_3(VAR_2, VAR_3);

 if (!(VAR_4 = FUNC_3(VAR_2, VAR_3)))
  return ((void*)0);

 if (FUNC_4(FUNC_2(VAR_4), &VAR_5)) {
  FUNC_1(VAR_4);
  return ((void*)0);
 }

 if (FUNC_0(VAR_5.st_mode)) {
  FUNC_1(VAR_4);
  VAR_1 = VAR_0;
  return ((void*)0);
 }

 return VAR_4;
}
