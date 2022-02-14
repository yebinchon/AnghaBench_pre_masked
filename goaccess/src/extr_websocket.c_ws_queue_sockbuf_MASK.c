
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int qlen; void* queued; } ;
typedef TYPE_1__ WSQueue ;
struct TYPE_5__ {int status; TYPE_1__* sockqueue; } ;
typedef TYPE_2__ WSClient ;


 int VAR_0 ;
 int FUNC_0 (void*,char const*,int) ;
 void* FUNC_1 (int,int) ;

__attribute__((used)) static void
FUNC_2 (WSClient * VAR_1, const char *VAR_2, int VAR_3, int VAR_4)
{
  WSQueue *VAR_5 = FUNC_1 (1, sizeof (WSQueue));

  if (VAR_4 < 1)
    VAR_4 = 0;

  VAR_5->queued = FUNC_1 (VAR_3 - VAR_4, sizeof (char));
  FUNC_0 (VAR_5->queued, VAR_2 + VAR_4, VAR_3 - VAR_4);
  VAR_5->qlen = VAR_3 - VAR_4;
  VAR_1->sockqueue = VAR_5;

  VAR_1->status |= VAR_0;
}
