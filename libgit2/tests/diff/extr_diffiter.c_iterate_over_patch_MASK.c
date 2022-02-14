
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_patch ;
struct TYPE_3__ {int hunks; int lines; int files; } ;
typedef TYPE_1__ diff_expects ;


 size_t FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,size_t) ;

__attribute__((used)) static void FUNC_2(git_patch *VAR_0, diff_expects *VAR_1)
{
 size_t VAR_2, VAR_3 = FUNC_0(VAR_0), VAR_4;

 VAR_1->files++;
 VAR_1->hunks += (int)VAR_3;


 for (VAR_2 = 1, VAR_4 = 0; VAR_2 <= VAR_3; ++VAR_2)
  VAR_4 += FUNC_1(VAR_0, VAR_3 - VAR_2);

 VAR_1->lines += (int)VAR_4;
}
