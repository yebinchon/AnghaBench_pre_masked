
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* permutation; int follower_chunks; } ;
typedef TYPE_1__ pattern_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int,int) ;

__attribute__((used)) static void*
FUNC_5(void* VAR_5)
{
  int VAR_6;
  pattern_t* VAR_7 = (pattern_t*)VAR_5;

  for(VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  {
    int VAR_8 = VAR_7->permutation[VAR_6];
    if (VAR_6 == VAR_0 / 2 && VAR_4 == VAR_2){

      FUNC_1(VAR_3);
    }

    if ( (1 << VAR_8) & VAR_7->follower_chunks){
      FUNC_4(VAR_7, VAR_8, 1);
    }
  }
  return 0;
}
