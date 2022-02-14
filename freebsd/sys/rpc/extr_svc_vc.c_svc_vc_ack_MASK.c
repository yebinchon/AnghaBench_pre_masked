
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int bool_t ;
struct TYPE_5__ {TYPE_1__* xp_socket; int xp_snt_cnt; } ;
struct TYPE_4__ {int so_snd; } ;
typedef TYPE_2__ SVCXPRT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static bool_t
FUNC_2(SVCXPRT *VAR_1, uint32_t *VAR_2)
{

 *VAR_2 = FUNC_0(&VAR_1->xp_snt_cnt);
 *VAR_2 -= FUNC_1(&VAR_1->xp_socket->so_snd);
 return (VAR_0);
}
