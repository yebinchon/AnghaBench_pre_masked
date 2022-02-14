
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int h2o_socket_t ;
struct TYPE_3__ {unsigned int cur; int ret; int call_cnt; } ;
struct TYPE_4__ {TYPE_1__ minimize_notsent_lowat; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static int FUNC_0(h2o_socket_t *VAR_1, unsigned VAR_2)
{
    VAR_0.minimize_notsent_lowat.cur = VAR_2;
    ++VAR_0.minimize_notsent_lowat.call_cnt;
    return VAR_0.minimize_notsent_lowat.ret;
}
