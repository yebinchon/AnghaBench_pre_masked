
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int thread_num; TYPE_2__* pat; } ;
typedef TYPE_1__ thread_data_t ;
struct TYPE_4__ {int* permutation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int ** VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int,int) ;

__attribute__((used)) static void*
FUNC_6(void* VAR_4)
{
  int VAR_5, VAR_6;
  thread_data_t* VAR_7;

  VAR_7 = (thread_data_t*)VAR_4;
  VAR_6 = VAR_7->thread_num;

  for(VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  {
    int VAR_8 = VAR_7->pat->permutation[VAR_5];

    if (VAR_6 > 0) {
      if (-1 == FUNC_4(&VAR_2[VAR_6 - 1][VAR_8])){
        FUNC_2("sem_wait");
        FUNC_0(1);
      }
    }

    FUNC_5(VAR_7->pat, VAR_8, VAR_6);

    if ((VAR_6 % 2) == 0)
      FUNC_1(VAR_3);

    if (VAR_6 < VAR_1 - 1) {
      if (FUNC_3(&VAR_2[VAR_6][VAR_8]) == -1){
        FUNC_2("sem_post");
        FUNC_0(1);
      }
    }
  }
  return 0;
}
