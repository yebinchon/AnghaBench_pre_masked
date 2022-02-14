
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int origin; } ;
typedef TYPE_1__ git_diff_line ;
typedef int git_diff_hunk ;
typedef int git_diff_delta ;
 int * VAR_0 ;
 int FUNC_0 (int const*,int const*,TYPE_1__ const*,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(
 const git_diff_delta *VAR_2,
 const git_diff_hunk *VAR_3,
 const git_diff_line *VAR_4,
 void *VAR_5)
{
 int *VAR_6 = VAR_5, VAR_7 = 0;

 (void)VAR_2; (void)VAR_3;

 if (*VAR_6 >= 0) {
  switch (VAR_4->origin) {
  case 133: VAR_7 = 3; break;
  case 131: VAR_7 = 2; break;
  case 132: VAR_7 = 3; break;
  case 130: VAR_7 = 2; break;
  case 129: VAR_7 = 1; break;
  case 128: VAR_7 = 4; break;
  default: break;
  }

  if (VAR_7 != *VAR_6) {
   if (*VAR_6 == 1 || VAR_7 == 1)
    FUNC_1(VAR_0[0], VAR_1);
   FUNC_1(VAR_0[VAR_7], VAR_1);
   *VAR_6 = VAR_7;
  }
 }

 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_1);
}
