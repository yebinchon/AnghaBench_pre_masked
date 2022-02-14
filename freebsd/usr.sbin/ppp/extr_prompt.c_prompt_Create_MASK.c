
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* passwd; } ;
struct server {TYPE_2__ cfg; } ;
struct TYPE_6__ {char* type; char* from; } ;
struct TYPE_4__ {int Write; int Read; int IsSet; int UpdateSet; int type; } ;
struct prompt {int fd_in; int fd_out; int nonewline; int needprompt; struct bundle* bundle; scalar_t__ readtilde; int * TermMode; TYPE_3__ src; void* auth; struct server* owner; int Term; int oldtio; TYPE_1__ desc; } ;
struct bundle {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct prompt*) ;
 int FUNC_2 (struct prompt*) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int,int *) ;
 char* FUNC_6 (int) ;

struct prompt *
FUNC_7(struct server *VAR_11, struct bundle *VAR_12, int VAR_13)
{
  struct prompt *VAR_14 = (struct prompt *)FUNC_3(sizeof(struct prompt));

  if (VAR_14 != ((void*)0)) {
    VAR_14->desc.type = VAR_2;
    VAR_14->desc.UpdateSet = VAR_8;
    VAR_14->desc.IsSet = VAR_6;
    VAR_14->desc.Read = VAR_7;
    VAR_14->desc.Write = VAR_9;

    if (VAR_13 == VAR_3) {
      char *VAR_15 = FUNC_6(VAR_4);

      if (!VAR_15) {
        FUNC_1(VAR_14);
        return ((void*)0);
      }
      VAR_14->fd_in = VAR_4;
      VAR_14->fd_out = VAR_5;
      VAR_14->Term = VAR_10;
      VAR_14->owner = ((void*)0);
      VAR_14->auth = VAR_0;
      VAR_14->src.type = "Controller";
      FUNC_4(VAR_14->src.from, VAR_15, sizeof VAR_14->src.from - 1);
      VAR_14->src.from[sizeof VAR_14->src.from - 1] = '\0';
      FUNC_5(VAR_14->fd_in, &VAR_14->oldtio);
    } else {
      VAR_14->fd_in = VAR_14->fd_out = VAR_13;
      VAR_14->Term = FUNC_0(VAR_13, "a+");
      VAR_14->owner = VAR_11;
      VAR_14->auth = *VAR_11->cfg.passwd ? VAR_1 : VAR_0;
      VAR_14->src.type = "unknown";
      *VAR_14->src.from = '\0';
    }
    VAR_14->TermMode = ((void*)0);
    VAR_14->nonewline = 1;
    VAR_14->needprompt = 1;
    VAR_14->readtilde = 0;
    VAR_14->bundle = VAR_12;
    FUNC_2(VAR_14);
  }

  return VAR_14;
}
