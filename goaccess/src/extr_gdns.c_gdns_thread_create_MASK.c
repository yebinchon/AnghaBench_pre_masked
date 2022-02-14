
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int thread; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int *,int *,void*,int *) ;
 int FUNC_2 (int ) ;

void
FUNC_3 (void)
{
  int VAR_3;

  VAR_0 = 1;
  VAR_3 = FUNC_1 (&(VAR_2.thread), ((void*)0), (void *) &VAR_1, ((void*)0));
  if (VAR_3)
    FUNC_0 ("Return code from pthread_create(): %d", VAR_3);
  FUNC_2 (VAR_2.thread);
}
