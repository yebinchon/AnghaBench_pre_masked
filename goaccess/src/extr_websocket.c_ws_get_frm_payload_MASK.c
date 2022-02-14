
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int WSServer ;
struct TYPE_13__ {int buflen; scalar_t__ payloadsz; scalar_t__ mask_offset; int * payload; } ;
typedef TYPE_1__ WSMessage ;
struct TYPE_14__ {int payloadlen; } ;
typedef TYPE_2__ WSFrame ;
struct TYPE_15__ {TYPE_1__* message; TYPE_2__* frame; } ;
typedef TYPE_3__ WSClient ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_3__*,TYPE_1__*,scalar_t__,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_3__*,int,int) ;
 int * FUNC_6 (int,int) ;

__attribute__((used)) static int
FUNC_7 (WSClient * VAR_3, WSServer * VAR_4)
{
  WSFrame **VAR_5 = ((void*)0);
  WSMessage **VAR_6 = ((void*)0);
  int VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;

  if (VAR_3->message == ((void*)0))
    VAR_3->message = FUNC_0 ();

  VAR_5 = &VAR_3->frame;
  VAR_6 = &VAR_3->message;


  if ((*VAR_6)->payload == ((void*)0) && (*VAR_5)->payloadlen)
    (*VAR_6)->payload = FUNC_6 ((*VAR_5)->payloadlen, sizeof (char));

  else if ((*VAR_6)->buflen == 0 && (*VAR_5)->payloadlen) {
    if (FUNC_4 ((*VAR_5), (*VAR_6)) == 1)
      return FUNC_5 (VAR_3, VAR_1 | VAR_0, 0);
  }

  VAR_8 = (*VAR_6)->buflen;
  VAR_9 = (*VAR_5)->payloadlen - VAR_8;
  if (VAR_9 > 0) {
    if ((VAR_7 = FUNC_3 (VAR_3, (*VAR_6), (*VAR_6)->payloadsz, VAR_9)) < 0)
      return VAR_7;
    if (VAR_7 != VAR_9)
      return FUNC_5 (VAR_3, VAR_2, VAR_7);
  }

  (*VAR_6)->mask_offset = (*VAR_6)->payloadsz - (*VAR_6)->buflen;

  FUNC_2 (VAR_3, VAR_4);
  FUNC_1 (VAR_3);

  return VAR_7;
}
