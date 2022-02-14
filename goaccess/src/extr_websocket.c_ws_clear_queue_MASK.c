
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ qlen; struct TYPE_5__* queued; } ;
typedef TYPE_1__ WSQueue ;
struct TYPE_6__ {int status; TYPE_1__* sockqueue; } ;
typedef TYPE_2__ WSClient ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1 (WSClient * VAR_3)
{
  WSQueue **VAR_4 = &VAR_3->sockqueue;
  if (!(*VAR_4))
    return;

  if ((*VAR_4)->queued)
    FUNC_0 ((*VAR_4)->queued);
  (*VAR_4)->queued = ((void*)0);
  (*VAR_4)->qlen = 0;

  FUNC_0 ((*VAR_4));
  (*VAR_4) = ((void*)0);


  VAR_3->status &= ~VAR_2;

  if ((VAR_3->status & VAR_0) && (VAR_3->status & VAR_1))
    VAR_3->status = VAR_0;
}
