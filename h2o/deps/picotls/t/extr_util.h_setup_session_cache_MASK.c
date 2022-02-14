
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cb; } ;
struct st_util_session_cache_t {TYPE_1__ super; } ;
struct TYPE_5__ {int ticket_lifetime; int max_early_data_size; TYPE_1__* encrypt_ticket; } ;
typedef TYPE_2__ ptls_context_t ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(ptls_context_t *VAR_1)
{
    static struct st_util_session_cache_t VAR_2;

    VAR_2.super.cb = VAR_0;

    VAR_1->ticket_lifetime = 86400;
    VAR_1->max_early_data_size = 8192;
    VAR_1->encrypt_ticket = &VAR_2.super;
}
