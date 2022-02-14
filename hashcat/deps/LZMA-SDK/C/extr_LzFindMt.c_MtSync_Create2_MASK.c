
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_3__ {void* wasCreated; int thread; void* needStart; int filledSemaphore; int freeSemaphore; int wasStopped; int wasStarted; int canStart; void* csWasInitialized; int cs; } ;
typedef int THREAD_FUNC_TYPE ;
typedef int SRes ;
typedef TYPE_1__ CMtSync ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,void*) ;
 void* VAR_1 ;

__attribute__((used)) static SRes FUNC_5(CMtSync *VAR_2, THREAD_FUNC_TYPE VAR_3, void *VAR_4, UInt32 VAR_5)
{
  if (VAR_2->wasCreated)
    return VAR_0;

  FUNC_2(FUNC_1(&VAR_2->cs));
  VAR_2->csWasInitialized = VAR_1;

  FUNC_2(FUNC_0(&VAR_2->canStart));
  FUNC_2(FUNC_0(&VAR_2->wasStarted));
  FUNC_2(FUNC_0(&VAR_2->wasStopped));

  FUNC_2(FUNC_3(&VAR_2->freeSemaphore, VAR_5, VAR_5));
  FUNC_2(FUNC_3(&VAR_2->filledSemaphore, 0, VAR_5));

  VAR_2->needStart = VAR_1;

  FUNC_2(FUNC_4(&VAR_2->thread, VAR_3, VAR_4));
  VAR_2->wasCreated = VAR_1;
  return VAR_0;
}
