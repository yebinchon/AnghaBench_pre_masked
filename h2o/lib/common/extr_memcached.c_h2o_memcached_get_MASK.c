
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int h2o_multithread_receiver_t ;
struct TYPE_8__ {int value_is_encoded; void* cb_data; int cb; int * receiver; } ;
struct TYPE_7__ {TYPE_2__ get; } ;
struct TYPE_9__ {TYPE_1__ data; } ;
typedef TYPE_3__ h2o_memcached_req_t ;
typedef int h2o_memcached_get_cb ;
typedef int h2o_memcached_context_t ;
typedef int h2o_iovec_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int *,int ,int ,int) ;
 int FUNC_1 (int *,TYPE_3__*) ;

h2o_memcached_req_t *FUNC_2(h2o_memcached_context_t *VAR_3, h2o_multithread_receiver_t *VAR_4, h2o_iovec_t VAR_5,
                                       h2o_memcached_get_cb VAR_6, void *VAR_7, int VAR_8)
{
    h2o_memcached_req_t *VAR_9 = FUNC_0(VAR_3, VAR_2, VAR_5, (VAR_8 & VAR_0) != 0);
    VAR_9->data.get.receiver = VAR_4;
    VAR_9->data.get.cb = VAR_6;
    VAR_9->data.get.cb_data = VAR_7;
    VAR_9->data.get.value_is_encoded = (VAR_8 & VAR_1) != 0;
    FUNC_1(VAR_3, VAR_9);
    return VAR_9;
}
