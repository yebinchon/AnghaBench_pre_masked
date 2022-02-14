
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_patch ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ git_diff_delta ;
typedef int git_diff ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,size_t) ;
 TYPE_1__* FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(git_diff *VAR_1, size_t VAR_2, int VAR_3)
{
 git_patch *VAR_4;
 const git_diff_delta *VAR_5;

 FUNC_1(FUNC_3(&VAR_4, VAR_1, VAR_2));
 VAR_5 = FUNC_4(VAR_4);
 FUNC_0((VAR_5->flags & VAR_0), VAR_3);
 FUNC_2(VAR_4);
}
