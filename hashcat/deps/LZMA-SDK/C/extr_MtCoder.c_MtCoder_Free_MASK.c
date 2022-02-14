
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int finishedEvent; int * writeEvents; int blocksSemaphore; int readEvent; int * threads; } ;
typedef TYPE_1__ CMtCoder ;


 int FUNC_0 (int *) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(CMtCoder *VAR_2)
{
  unsigned VAR_3;







  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
    FUNC_1(&VAR_2->threads[VAR_3]);

  FUNC_0(&VAR_2->readEvent);
  FUNC_2(&VAR_2->blocksSemaphore);





    FUNC_0(&VAR_2->finishedEvent);

}
