
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef void* uint32_t ;
typedef int h2o_http3_forward_packets_cb ;
struct TYPE_4__ {int node_id; void* thread_id; } ;
struct TYPE_5__ {int default_ttl; int forward_packets; TYPE_1__ next_cid; void* accept_thread_divisor; } ;
typedef TYPE_2__ h2o_http3_ctx_t ;



void FUNC_0(h2o_http3_ctx_t *VAR_0, uint32_t VAR_1, uint32_t VAR_2, uint64_t VAR_3,
                                      uint8_t VAR_4, h2o_http3_forward_packets_cb VAR_5)
{
    VAR_0->accept_thread_divisor = VAR_1;
    VAR_0->next_cid.thread_id = VAR_2;
    VAR_0->next_cid.node_id = VAR_3;
    VAR_0->forward_packets = VAR_5;
    VAR_0->default_ttl = VAR_4;
}
