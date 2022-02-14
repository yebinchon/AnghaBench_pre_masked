
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ qlen; struct TYPE_5__* queued; } ;
typedef TYPE_1__ WSQueue ;
struct TYPE_6__ {TYPE_1__* fifoqueue; } ;
typedef TYPE_2__ WSPipeOut ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1 (WSPipeOut * VAR_0)
{
  WSQueue **VAR_1 = &VAR_0->fifoqueue;
  if (!(*VAR_1))
    return;

  if ((*VAR_1)->queued)
    FUNC_0 ((*VAR_1)->queued);
  (*VAR_1)->queued = ((void*)0);
  (*VAR_1)->qlen = 0;

  FUNC_0 ((*VAR_1));
  (*VAR_1) = ((void*)0);
}
