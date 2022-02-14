
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum xprt_stat { ____Placeholder_xprt_stat } xprt_stat ;
struct TYPE_3__ {int xp_socket; } ;
typedef TYPE_1__ SVCXPRT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static enum xprt_stat
FUNC_1(SVCXPRT *VAR_2)
{

 if (FUNC_0(VAR_2->xp_socket))
  return (VAR_1);

 return (VAR_0);
}
