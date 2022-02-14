
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int idle_timeout; } ;
struct TYPE_4__ {TYPE_1__ transport_params; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_1(void)
{
    FUNC_0("even", VAR_3);

    uint64_t VAR_4 = VAR_0.transport_params.idle_timeout;
    VAR_0.transport_params.idle_timeout = (uint64_t)300 * 1000;
    FUNC_0("downstream", VAR_2);
    VAR_0.transport_params.idle_timeout = (uint64_t)300 * 1000;
    FUNC_0("bidirectional", VAR_1);
    VAR_0.transport_params.idle_timeout = VAR_4;
}
