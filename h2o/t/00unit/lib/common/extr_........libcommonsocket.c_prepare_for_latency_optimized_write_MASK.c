
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_11__ {int notsent_is_minimized; int suggested_tls_payload_size; int suggested_write_size; int state; } ;
struct TYPE_12__ {TYPE_1__ _latency_optimization; } ;
typedef TYPE_2__ h2o_socket_t ;
struct TYPE_13__ {int min_rtt; int max_additional_delay; int max_cwnd; } ;
typedef TYPE_4__ h2o_socket_latency_optimization_conditions_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int (*) (TYPE_2__*,unsigned int)) ;

__attribute__((used)) static inline void FUNC_2(h2o_socket_t *VAR_2,
                                                       const h2o_socket_latency_optimization_conditions_t *VAR_3, uint32_t VAR_4,
                                                       uint32_t VAR_5, uint32_t VAR_6, uint32_t VAR_7, uint64_t VAR_8,
                                                       int (*VAR_9)(h2o_socket_t *, unsigned))
{

    if (VAR_4 < VAR_3->min_rtt * (uint64_t)1000)
        goto Disable;
    if (VAR_4 * VAR_3->max_additional_delay < VAR_8 * 1000 * 100)
        goto Disable;


    VAR_2->_latency_optimization.state = VAR_0;





    if (VAR_5 * VAR_6 < VAR_3->max_cwnd) {
        if (!VAR_2->_latency_optimization.notsent_is_minimized) {
            if (VAR_9(VAR_2, 1 ) != 0)
                goto Disable;
            VAR_2->_latency_optimization.notsent_is_minimized = 1;
        }
        VAR_2->_latency_optimization.suggested_tls_payload_size = FUNC_0(VAR_2, VAR_5);
        VAR_2->_latency_optimization.suggested_write_size =
            VAR_7 * (size_t)VAR_2->_latency_optimization.suggested_tls_payload_size;
    } else {
        if (VAR_2->_latency_optimization.notsent_is_minimized) {
            if (VAR_9(VAR_2, 0) != 0)
                goto Disable;
            VAR_2->_latency_optimization.notsent_is_minimized = 0;
        }
        VAR_2->_latency_optimization.suggested_tls_payload_size = 16384;
        VAR_2->_latency_optimization.suggested_write_size = VAR_1;
    }
    return;

Disable:
    FUNC_1(VAR_2, VAR_9);
}
