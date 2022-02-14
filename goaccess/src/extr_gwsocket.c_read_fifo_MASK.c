
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int fd_set ;
struct TYPE_5__ {int type; int size; char* data; int len; } ;
typedef TYPE_1__ WSPacket ;
struct TYPE_6__ {int fd; int* self_pipe; int hlen; char* hdr; TYPE_1__* packet; } ;
typedef TYPE_2__ GWSReader ;



 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_7 (int,int *,int *,int *,int *) ;
 int FUNC_8 (int) ;
 void FUNC_9 (int) ;
 int FUNC_10 (char*,int*) ;
 int FUNC_11 (int,char*,int*,int,int) ;
 void* FUNC_12 (int,int) ;

int
FUNC_13 (GWSReader * VAR_2, fd_set VAR_3, fd_set VAR_4, void (*VAR_5) (int))
{
  WSPacket **VAR_6 = &VAR_2->packet;
  char *VAR_7;
  int VAR_8 = 0, VAR_9 = 0, VAR_10 = 0, VAR_11 = VAR_2->fd, VAR_12 = 0;
  uint32_t VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;

  FUNC_3 (&VAR_3);
  FUNC_3 (&VAR_4);

  FUNC_2 (VAR_2->self_pipe[0], &VAR_3);

  FUNC_2 (VAR_11, &VAR_3);
  VAR_12 = FUNC_5 (VAR_11, VAR_2->self_pipe[0]);

  if (FUNC_7 (VAR_12 + 1, &VAR_3, &VAR_4, ((void*)0), ((void*)0)) == -1) {
    switch (VAR_1) {
    case 128:
      break;
    default:
      FUNC_0 ("Unable to select: %s.", FUNC_8 (VAR_1));
    }
  }

  if (FUNC_1 (VAR_2->self_pipe[0], &VAR_3))
    return 1;
  if (!FUNC_1 (VAR_11, &VAR_3)) {
    FUNC_4 (("No file descriptor set on read_message()\n"));
    return 0;
  }

  VAR_9 = VAR_2->hlen;
  VAR_10 = VAR_0 - VAR_9;
  if (VAR_10 > 0) {
    if ((VAR_8 =
         FUNC_11 (VAR_11, VAR_2->hdr, &VAR_2->hlen, VAR_9, VAR_10)) < 0)
      return 0;
    if (VAR_8 != VAR_10)
      return 0;
  }


  VAR_7 = VAR_2->hdr;
  VAR_7 += FUNC_10 (VAR_7, &VAR_13);
  VAR_7 += FUNC_10 (VAR_7, &VAR_14);
  VAR_7 += FUNC_10 (VAR_7, &VAR_15);

  if ((*VAR_6) == ((void*)0)) {
    (*VAR_6) = FUNC_12 (1, sizeof (WSPacket));
    (*VAR_6)->type = VAR_14;
    (*VAR_6)->size = VAR_15;
    (*VAR_6)->data = FUNC_12 (VAR_15, sizeof (char));
  }

  VAR_9 = (*VAR_6)->len;
  VAR_10 = (*VAR_6)->size - VAR_9;
  if (VAR_10 > 0) {
    if ((VAR_8 = FUNC_11 (VAR_11, (*VAR_6)->data, &(*VAR_6)->len, VAR_9, VAR_10)) < 0)
      return 0;
    if (VAR_8 != VAR_10)
      return 0;
  }
  FUNC_6 (VAR_2);

  (*VAR_5) (VAR_13);

  return 0;
}
