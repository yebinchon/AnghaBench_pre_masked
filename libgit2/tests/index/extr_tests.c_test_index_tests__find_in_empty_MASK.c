
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_index ;
struct TYPE_3__ {int path; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,char*) ;
 TYPE_1__* VAR_1 ;

void FUNC_6(void)
{
   git_index *VAR_2;
   unsigned int VAR_3;

   FUNC_2(FUNC_5(&VAR_2, "fake-index"));

   for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); ++VAR_3) {
  FUNC_1(VAR_0 == FUNC_3(((void*)0), VAR_2, VAR_1[VAR_3].path));
   }

   FUNC_4(VAR_2);
}
