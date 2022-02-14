
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_index ;
struct TYPE_3__ {size_t index; int path; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (size_t*,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ) ;
 TYPE_1__* VAR_1 ;

void FUNC_6(void)
{
   git_index *VAR_2;
   unsigned int VAR_3;

   FUNC_2(FUNC_5(&VAR_2, VAR_0));

   for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); ++VAR_3) {
  size_t VAR_4;

  FUNC_1(!FUNC_3(&VAR_4, VAR_2, VAR_1[VAR_3].path));
  FUNC_1(VAR_4 == VAR_1[VAR_3].index);
   }

   FUNC_4(VAR_2);
}
