
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int payloadsz; char* payload; int fragmented; scalar_t__ buflen; } ;
typedef TYPE_1__ WSMessage ;
struct TYPE_9__ {int payloadlen; int mask; int fin; } ;
typedef TYPE_2__ WSFrame ;
struct TYPE_10__ {int status; TYPE_1__* message; TYPE_2__* frame; } ;
typedef TYPE_3__ WSClient ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (char*,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ,int,int *) ;
 int FUNC_5 (TYPE_3__*,int ,char*,int) ;
 int FUNC_6 (char*,int,int ,int ) ;
 char* FUNC_7 (int,int) ;

__attribute__((used)) static void
FUNC_8 (WSClient * VAR_4)
{
  WSFrame **VAR_5 = &VAR_4->frame;
  WSMessage **VAR_6 = &VAR_4->message;
  char *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
  int VAR_9 = 0, VAR_10 = (*VAR_5)->payloadlen, VAR_11 = 0;



  if (!(*VAR_5)->fin) {
    FUNC_4 (VAR_4, VAR_1, VAR_2 | VAR_0, ((void*)0));
    return;
  }



  if ((*VAR_5)->payloadlen > 125) {
    FUNC_4 (VAR_4, VAR_1, VAR_2 | VAR_0, ((void*)0));
    return;
  }


  if (VAR_10 == 0) {
    FUNC_5 (VAR_4, VAR_3, ((void*)0), 0);
    return;
  }


  VAR_9 = (*VAR_6)->payloadsz - VAR_10;
  VAR_7 = FUNC_7 (VAR_10, sizeof (char));
  FUNC_1 (VAR_7, (*VAR_6)->payload + VAR_9, VAR_10);


  FUNC_6 (VAR_7, VAR_10, 0, (*VAR_5)->mask);


  VAR_11 = (*VAR_6)->payloadsz - VAR_10;
  VAR_8 = FUNC_2 ((*VAR_6)->payload, VAR_11);
  if (VAR_8 == ((void*)0) && VAR_11 > 0) {
    FUNC_0 ((*VAR_6)->payload);
    FUNC_0 (VAR_7);

    (*VAR_6)->payload = ((void*)0);
    VAR_4->status = VAR_2 | VAR_0;
    return;
  }

  (*VAR_6)->payload = VAR_8;
  (*VAR_6)->payloadsz -= VAR_10;

  FUNC_5 (VAR_4, VAR_3, VAR_7, VAR_10);

  (*VAR_6)->buflen = 0;

  if (!(*VAR_6)->fragmented) {
    FUNC_3 (VAR_4);
  }
  FUNC_0 (VAR_7);
}
