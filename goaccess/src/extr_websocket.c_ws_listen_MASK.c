
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WSServer ;
struct TYPE_2__ {int wfds; int rfds; } ;


 scalar_t__ FUNC_0 (int,int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static void
FUNC_4 (int VAR_1, int VAR_2, WSServer * VAR_3)
{

  if (FUNC_0 (VAR_2, &VAR_0.rfds) && VAR_2 == VAR_1)
    FUNC_1 (VAR_1, VAR_3);

  else if (FUNC_0 (VAR_2, &VAR_0.rfds) && VAR_2 != VAR_1)
    FUNC_2 (VAR_2, VAR_3);

  else if (FUNC_0 (VAR_2, &VAR_0.wfds) && VAR_2 != VAR_1)
    FUNC_3 (VAR_2, VAR_3);
}
