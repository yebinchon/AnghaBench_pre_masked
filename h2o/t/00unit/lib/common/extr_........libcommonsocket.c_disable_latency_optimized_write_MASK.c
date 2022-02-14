
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int suggested_tls_payload_size; int suggested_write_size; int state; scalar_t__ notsent_is_minimized; } ;
struct TYPE_7__ {TYPE_1__ _latency_optimization; } ;
typedef TYPE_2__ h2o_socket_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(h2o_socket_t *VAR_2, int (*VAR_3)(h2o_socket_t *, unsigned))
{
    if (VAR_2->_latency_optimization.notsent_is_minimized) {
        VAR_3(VAR_2, 0);
        VAR_2->_latency_optimization.notsent_is_minimized = 0;
    }
    VAR_2->_latency_optimization.state = VAR_0;
    VAR_2->_latency_optimization.suggested_tls_payload_size = 16384;
    VAR_2->_latency_optimization.suggested_write_size = VAR_1;
}
