
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *,unsigned int) ;
 int FUNC_6 (int **,int ) ;

void FUNC_7(void)
{
 git_index *VAR_1;
 unsigned int VAR_2;
 static bool VAR_3[6] = { 0, 1, 0, 1, 0, 1 };

 FUNC_2(FUNC_6(&VAR_1, VAR_0));
 FUNC_1(6, (int)FUNC_3(VAR_1));

 for (VAR_2 = 0; VAR_2 < 6; ++VAR_2) {
  const git_index_entry *VAR_4 = FUNC_5(VAR_1, VAR_2);
  FUNC_0(VAR_4 != ((void*)0));
  FUNC_0(((VAR_4->mode & 0100) ? 1 : 0) == VAR_3[VAR_2]);
 }

 FUNC_4(VAR_1);
}
