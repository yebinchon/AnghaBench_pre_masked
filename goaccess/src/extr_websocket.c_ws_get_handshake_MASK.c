
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int colist; int pipeout; int (* onopen ) (int ,TYPE_2__*) ;} ;
typedef TYPE_1__ WSServer ;
struct TYPE_18__ {int status; int end_proc; TYPE_4__* headers; } ;
typedef TYPE_2__ WSClient ;
struct TYPE_20__ {char* buf; int buflen; scalar_t__ reading; } ;
struct TYPE_19__ {scalar_t__ accesslog; int echomode; scalar_t__ strict; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int ) ;
 TYPE_4__* FUNC_5 () ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_2__*,char*,scalar_t__) ;
 scalar_t__ FUNC_8 (char*) ;
 int * FUNC_9 (char*,char*) ;
 int FUNC_10 (int ,TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (TYPE_2__*,int,int) ;
 scalar_t__ FUNC_14 (TYPE_4__*) ;
 TYPE_3__ VAR_5 ;

__attribute__((used)) static int
FUNC_15 (WSClient * VAR_6, WSServer * VAR_7)
{
  int VAR_8 = 0, VAR_9 = 0;
  char *VAR_10 = ((void*)0);

  if (VAR_6->headers == ((void*)0))
    VAR_6->headers = FUNC_5 ();

  VAR_10 = VAR_6->headers->buf;
  VAR_9 = VAR_6->headers->buflen;

  if ((VAR_8 = FUNC_7 (VAR_6, VAR_10 + VAR_9, VAR_0 - VAR_9)) < 1) {
    if (VAR_6->status & VAR_2)
      FUNC_3 (VAR_6, VAR_1);
    return VAR_8;
  }
  VAR_6->headers->buflen += VAR_8;

  VAR_10[VAR_6->headers->buflen] = '\0';


  if (FUNC_9 (VAR_10, "\r\n\r\n") == ((void*)0)) {
    if (FUNC_8 (VAR_10) < VAR_0)
      return FUNC_13 (VAR_6, VAR_4, VAR_8);

    FUNC_3 (VAR_6, VAR_1);
    return FUNC_13 (VAR_6, VAR_2, VAR_8);
  }


  if (FUNC_6 (VAR_6->headers) != 0) {
    FUNC_3 (VAR_6, VAR_1);
    return FUNC_13 (VAR_6, VAR_2, VAR_8);
  }


  if (FUNC_14 (VAR_6->headers) != 0) {
    FUNC_3 (VAR_6, VAR_1);
    return FUNC_13 (VAR_6, VAR_2, VAR_8);
  }

  FUNC_12 (VAR_6->headers);


  FUNC_11 (VAR_6, VAR_6->headers);


  if (VAR_7->onopen && VAR_5.strict && !VAR_5.echomode)
    VAR_7->onopen (VAR_7->pipeout, VAR_6);
  VAR_6->headers->reading = 0;


  FUNC_2 (&VAR_6->end_proc, ((void*)0));
  if (VAR_5.accesslog)
    FUNC_1 (VAR_6, 101);
  FUNC_0 (("Active: %d\n", FUNC_4 (VAR_7->colist)));

  return FUNC_13 (VAR_6, VAR_3, VAR_8);
}
