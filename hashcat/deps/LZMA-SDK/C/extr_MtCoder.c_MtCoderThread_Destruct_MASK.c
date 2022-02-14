
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int stop; int * inBuf; TYPE_1__* mtCoder; int startEvent; int thread; } ;
struct TYPE_4__ {int allocBig; } ;
typedef TYPE_2__ CMtCoderThread ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(CMtCoderThread *VAR_0)
{
  if (FUNC_5(&VAR_0->thread))
  {
    VAR_0->stop = 1;
    FUNC_1(&VAR_0->startEvent);
    FUNC_4(&VAR_0->thread);
    FUNC_3(&VAR_0->thread);
  }

  FUNC_0(&VAR_0->startEvent);

  if (VAR_0->inBuf)
  {
    FUNC_2(VAR_0->mtCoder->allocBig, VAR_0->inBuf);
    VAR_0->inBuf = ((void*)0);
  }
}
