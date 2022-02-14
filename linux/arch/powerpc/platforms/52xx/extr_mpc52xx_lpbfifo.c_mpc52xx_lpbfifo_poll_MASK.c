
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpc52xx_lpbfifo_request {int flags; } ;
struct TYPE_2__ {struct mpc52xx_lpbfifo_request* req; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(void)
{
 struct mpc52xx_lpbfifo_request *VAR_3 = VAR_2.req;
 int VAR_4 = !(VAR_3->flags & VAR_0);
 int VAR_5 = VAR_3->flags & VAR_1;




 if (VAR_4 && VAR_5)
  FUNC_1(0, ((void*)0));
 else
  FUNC_0(0, ((void*)0));
}
