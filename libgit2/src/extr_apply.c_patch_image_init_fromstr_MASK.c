
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lines; int pool; } ;
typedef TYPE_1__ patch_image ;
typedef int git_diff_line ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 char* FUNC_4 (char const*,char,size_t) ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 int FUNC_6 (int *,char const*,int,int) ;

__attribute__((used)) static int FUNC_7(
 patch_image *VAR_0, const char *VAR_1, size_t VAR_2)
{
 git_diff_line *VAR_3;
 const char *VAR_4, *VAR_5;

 FUNC_5(VAR_0, 0x0, sizeof(patch_image));

 FUNC_1(&VAR_0->pool, sizeof(git_diff_line));

 for (VAR_4 = VAR_1; VAR_4 < VAR_1 + VAR_2; VAR_4 = VAR_5) {
  VAR_5 = FUNC_4(VAR_4, '\n', VAR_2 - (VAR_4 - VAR_1));

  if (VAR_5 == ((void*)0))
   VAR_5 = VAR_1 + VAR_2;

  else if (VAR_5 < VAR_1 + VAR_2)
   VAR_5++;

  VAR_3 = FUNC_2(&VAR_0->pool, 1);
  FUNC_0(VAR_3);

  if (FUNC_3(&VAR_0->lines, VAR_3) < 0)
   return -1;

  FUNC_6(VAR_3, VAR_4, (VAR_5 - VAR_4), (VAR_4 - VAR_1));
 }

 return 0;
}
