
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_10__ {int colist; TYPE_2__* pipein; } ;
typedef TYPE_1__ WSServer ;
struct TYPE_11__ {int hlen; char* hdr; int fd; TYPE_3__* packet; } ;
typedef TYPE_2__ WSPipeIn ;
struct TYPE_12__ {int size; char* data; int len; scalar_t__ type; } ;
typedef TYPE_3__ WSPacket ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,TYPE_3__*) ;
 int FUNC_4 (char*,scalar_t__*) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,char*,int*,int,int) ;
 int FUNC_8 (TYPE_1__*,scalar_t__,TYPE_3__*) ;
 void* FUNC_9 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_10 (WSServer * VAR_2)
{
  WSPipeIn *VAR_3 = VAR_2->pipein;
  WSPacket **VAR_4 = &VAR_3->packet;
  int VAR_5 = 0, VAR_6 = 0, VAR_7 = 0;

  char *VAR_8 = ((void*)0);
  uint32_t VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;

  VAR_6 = VAR_3->hlen;
  VAR_7 = VAR_0 - VAR_6;
  if (VAR_7 > 0) {
    if ((VAR_5 = FUNC_7 (VAR_3->fd, VAR_3->hdr, &VAR_3->hlen, VAR_6, VAR_7)) < 0)
      return;
    if (VAR_5 != VAR_7)
      return;
  }


  VAR_8 = VAR_3->hdr;
  VAR_8 += FUNC_4 (VAR_8, &VAR_9);
  VAR_8 += FUNC_4 (VAR_8, &VAR_10);
  VAR_8 += FUNC_4 (VAR_8, &VAR_11);

  if (FUNC_5 (VAR_9, VAR_10, VAR_11) == 1) {
    FUNC_1 (VAR_3->fd);
    FUNC_0 (VAR_3);
    FUNC_6 (VAR_3);
    return;
  }

  if ((*VAR_4) == ((void*)0)) {
    (*VAR_4) = FUNC_9 (1, sizeof (WSPacket));
    (*VAR_4)->type = VAR_10;
    (*VAR_4)->size = VAR_11;
    (*VAR_4)->data = FUNC_9 (VAR_11, sizeof (char));
  }

  VAR_6 = (*VAR_4)->len;
  VAR_7 = (*VAR_4)->size - VAR_6;
  if (VAR_7 > 0) {
    if ((VAR_5 =
         FUNC_7 (VAR_3->fd, (*VAR_4)->data, &(*VAR_4)->len, VAR_6, VAR_7)) < 0)
      return;
    if (VAR_5 != VAR_7)
      return;
  }


  if (FUNC_2 (VAR_2->colist) == 0) {
    FUNC_0 (VAR_3);
    return;
  }



  if (VAR_9 != 0)
    FUNC_8 (VAR_2, VAR_9, *VAR_4);
  else
    FUNC_3 (VAR_2->colist, VAR_1, *VAR_4);
  FUNC_0 (VAR_3);
}
