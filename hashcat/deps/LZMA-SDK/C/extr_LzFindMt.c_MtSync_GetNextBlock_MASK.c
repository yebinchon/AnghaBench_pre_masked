
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numProcessedBlocks; void* csWasEntered; int cs; int filledSemaphore; int freeSemaphore; int wasStarted; int canStart; int wasStopped; void* exit; void* stopWriting; void* needStart; } ;
typedef TYPE_1__ CMtSync ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 void* VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 void* VAR_1 ;

__attribute__((used)) static void FUNC_7(CMtSync *VAR_2)
{
  if (VAR_2->needStart)
  {
    VAR_2->numProcessedBlocks = 1;
    VAR_2->needStart = VAR_0;
    VAR_2->stopWriting = VAR_0;
    VAR_2->exit = VAR_0;
    FUNC_2(&VAR_2->wasStarted);
    FUNC_2(&VAR_2->wasStopped);

    FUNC_3(&VAR_2->canStart);
    FUNC_4(&VAR_2->wasStarted);


  }
  else
  {
    FUNC_1(&VAR_2->cs);
    VAR_2->csWasEntered = VAR_0;
    VAR_2->numProcessedBlocks++;
    FUNC_5(&VAR_2->freeSemaphore);
  }
  FUNC_6(&VAR_2->filledSemaphore);
  FUNC_0(&VAR_2->cs);
  VAR_2->csWasEntered = VAR_1;
}
