
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct physical {int dummy; } ;
struct TYPE_2__ {int Write; int Read; int IsSet; int UpdateSet; int type; } ;
struct chat {char* script; int arg; int timeout; int pause; int buf; int bufend; int bufstart; int * nargptr; int * argptr; scalar_t__ argc; struct physical* physical; TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char,int) ;

void
FUNC_1(struct chat *VAR_5, struct physical *VAR_6)
{
  VAR_5->desc.type = VAR_0;
  VAR_5->desc.UpdateSet = VAR_3;
  VAR_5->desc.IsSet = VAR_1;
  VAR_5->desc.Read = VAR_2;
  VAR_5->desc.Write = VAR_4;
  VAR_5->physical = VAR_6;
  *VAR_5->script = '\0';
  VAR_5->argc = 0;
  VAR_5->arg = -1;
  VAR_5->argptr = ((void*)0);
  VAR_5->nargptr = ((void*)0);
  VAR_5->bufstart = VAR_5->bufend = VAR_5->buf;

  FUNC_0(&VAR_5->pause, '\0', sizeof VAR_5->pause);
  FUNC_0(&VAR_5->timeout, '\0', sizeof VAR_5->timeout);
}
