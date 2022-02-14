
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int pthread_t ;
struct TYPE_6__ {int thread; int * server; int mutex; } ;
typedef TYPE_1__ GWSWriter ;
typedef TYPE_1__ GWSReader ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int *,void*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_3 (char*,char*,int ) ;

int
FUNC_4 (GWSWriter * VAR_3, GWSReader * VAR_4)
{
  int VAR_5;
  pthread_t *VAR_6;

  if (FUNC_2 (&VAR_3->mutex, ((void*)0)))
    FUNC_0 ("Failed init gwswriter mutex");
  if (FUNC_2 (&VAR_4->mutex, ((void*)0)))
    FUNC_0 ("Failed init gwsreader mutex");


  VAR_6 = &VAR_3->thread;


  if ((VAR_3->server = FUNC_3 ("0.0.0.0", "7890", VAR_1)) == ((void*)0))
    FUNC_0 ("Failed init websocket");

  VAR_5 = FUNC_1 (&(*VAR_6), ((void*)0), (void *) &VAR_2, VAR_3);
  if (VAR_5)
    FUNC_0 ("Return code from pthread_create(): %d", VAR_5);


  VAR_6 = &VAR_4->thread;
  VAR_5 = FUNC_1 (&(*VAR_6), ((void*)0), (void *) &VAR_0, VAR_4);
  if (VAR_5)
    FUNC_0 ("Return code from pthread_create(): %d", VAR_5);

  return 0;
}
