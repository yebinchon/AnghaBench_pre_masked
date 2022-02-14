
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int xp_socket; scalar_t__ xp_upcallset; } ;
typedef TYPE_1__ SVCXPRT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(SVCXPRT *VAR_0)
{

 FUNC_0(VAR_0->xp_socket);
 if (VAR_0->xp_upcallset) {
  VAR_0->xp_upcallset = 0;
  FUNC_2(VAR_0->xp_socket, ((void*)0), ((void*)0));
 }
 FUNC_1(VAR_0->xp_socket);

 FUNC_3(VAR_0);
}
