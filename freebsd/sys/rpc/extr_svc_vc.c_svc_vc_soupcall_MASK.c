
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int dummy; } ;
struct TYPE_3__ {int xp_socket; } ;
typedef TYPE_1__ SVCXPRT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(struct socket *VAR_1, void *VAR_2, int VAR_3)
{
 SVCXPRT *VAR_4 = (SVCXPRT *) VAR_2;

 if (FUNC_0(VAR_4->xp_socket))
  FUNC_1(VAR_4);
 return (VAR_0);
}
