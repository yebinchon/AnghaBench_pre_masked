
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tm {int dummy; } ;
typedef int h2o_timestamp_string_t ;
struct TYPE_7__ {int tv_sec; } ;
struct TYPE_8__ {TYPE_1__ tv_at; TYPE_4__* value; } ;
struct TYPE_9__ {TYPE_2__ _timestamp_cache; } ;
typedef TYPE_3__ h2o_context_t ;
struct TYPE_10__ {int log; int rfc1123; } ;


 int FUNC_0 (int *,struct tm*) ;
 TYPE_4__* FUNC_1 (int *,int,int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct tm*) ;

void FUNC_5(h2o_context_t *VAR_0)
{
    struct tm VAR_1;
    if (VAR_0->_timestamp_cache.value != ((void*)0))
        FUNC_2(VAR_0->_timestamp_cache.value);
    VAR_0->_timestamp_cache.value = FUNC_1(((void*)0), sizeof(h2o_timestamp_string_t), ((void*)0));
    FUNC_0(&VAR_0->_timestamp_cache.tv_at.tv_sec, &VAR_1);
    FUNC_4(VAR_0->_timestamp_cache.value->rfc1123, &VAR_1);
    FUNC_3(VAR_0->_timestamp_cache.value->log, VAR_0->_timestamp_cache.tv_at.tv_sec);
}
