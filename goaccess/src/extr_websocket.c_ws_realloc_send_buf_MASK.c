
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int qlen; char* queued; } ;
typedef TYPE_1__ WSQueue ;
struct TYPE_7__ {int status; TYPE_1__* sockqueue; } ;
typedef TYPE_2__ WSClient ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char const*,int) ;
 char* FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int,int) ;

__attribute__((used)) static int
FUNC_4 (WSClient * VAR_4, const char *VAR_5, int VAR_6)
{
  WSQueue *VAR_7 = VAR_4->sockqueue;
  char *VAR_8 = ((void*)0);
  int VAR_9 = 0;

  VAR_9 = VAR_7->qlen + VAR_6;
  VAR_8 = FUNC_1 (VAR_7->queued, VAR_9);
  if (VAR_8 == ((void*)0) && VAR_9 > 0) {
    FUNC_2 (VAR_4);
    return FUNC_3 (VAR_4, VAR_1 | VAR_0, 1);
  }
  VAR_7->queued = VAR_8;
  FUNC_0 (VAR_7->queued + VAR_7->qlen, VAR_5, VAR_6);
  VAR_7->qlen += VAR_6;



  if (VAR_7->qlen >= VAR_2)
    VAR_4->status |= VAR_3;

  return 0;
}
