
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ colist; int * pipeout; int * pipein; } ;
typedef TYPE_1__ WSServer ;
typedef int WSPipeOut ;
typedef int WSPipeIn ;
struct TYPE_7__ {scalar_t__ accesslog; } ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ,int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_2__ VAR_1 ;

void
FUNC_8 (WSServer * VAR_2)
{
  WSPipeIn **VAR_3 = &VAR_2->pipein;
  WSPipeOut **VAR_4 = &VAR_2->pipeout;

  FUNC_5 (*VAR_3);
  FUNC_6 (*VAR_4);


  if (VAR_1.accesslog)
    FUNC_0 ();


  if (FUNC_2 (VAR_2->colist) > 0)
    FUNC_3 (VAR_2->colist, VAR_0, ((void*)0));

  if (VAR_2->colist)
    FUNC_4 (VAR_2->colist);





  FUNC_1 (VAR_2);
}
