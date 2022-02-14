
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int colist; } ;
typedef TYPE_1__ WSServer ;
struct TYPE_6__ {scalar_t__ headers; int listener; } ;
typedef TYPE_2__ WSClient ;
typedef int GSLList ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (scalar_t__) ;
 int * FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3 (WSClient * VAR_0, WSServer * VAR_1)
{
  GSLList *VAR_2 = ((void*)0);

  if (!(VAR_2 = FUNC_2 (VAR_0->listener, &VAR_1->colist)))
    return;

  if (VAR_0->headers)
    FUNC_1 (VAR_0->headers);
  FUNC_0 (&VAR_1->colist, VAR_2);
}
