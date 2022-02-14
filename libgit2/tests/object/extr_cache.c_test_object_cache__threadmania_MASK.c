
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_thread ;
struct TYPE_2__ {int * sha; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 TYPE_1__* VAR_2 ;
 int * VAR_3 ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int ) ;
 int FUNC_10 (int *,void* (*) (void*),void*) ;
 int FUNC_11 (int *,void**) ;

void FUNC_12(void)
{
 int VAR_4, VAR_5, VAR_6;
 void *VAR_7;
 void *(*VAR_8)(void *);





 for (VAR_6 = 0; VAR_2[VAR_6].sha != ((void*)0); ++VAR_6)
                ;

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {

  FUNC_5(FUNC_9(&VAR_3, FUNC_4("testrepo.git")));

  for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
   VAR_7 = FUNC_7(2 * sizeof(int));

   ((int *)VAR_7)[0] = VAR_5;
   ((int *)VAR_7)[1] = VAR_5 % VAR_6;

   VAR_8 = (VAR_5 & 1) ? FUNC_0 : FUNC_1;




   FUNC_2(VAR_8(VAR_7) == VAR_7);
   FUNC_6(VAR_7);

  }
  FUNC_8(VAR_3);
  VAR_3 = ((void*)0);
 }
}
