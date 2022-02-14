
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int colist; } ;
typedef TYPE_1__ WSServer ;
struct TYPE_11__ {int status; int * sockqueue; } ;
typedef TYPE_2__ WSClient ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int,TYPE_2__*,TYPE_1__*) ;
 TYPE_2__* FUNC_2 (int,int *) ;
 int FUNC_3 (TYPE_2__*,int *,int ) ;

__attribute__((used)) static void
FUNC_4 (int VAR_2, WSServer * VAR_3)
{
  WSClient *VAR_4 = ((void*)0);

  if (!(VAR_4 = FUNC_2 (VAR_2, &VAR_3->colist)))
    return;






  FUNC_3 (VAR_4, ((void*)0), 0);

  if (VAR_4->sockqueue == ((void*)0))
    VAR_4->status &= ~VAR_1;




  if ((VAR_4->status & VAR_0) && !(VAR_4->status & VAR_1))
    FUNC_1 (VAR_2, VAR_4, VAR_3);
}
