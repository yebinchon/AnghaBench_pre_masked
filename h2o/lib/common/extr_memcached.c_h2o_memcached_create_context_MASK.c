
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
typedef int pthread_t ;
typedef int pthread_attr_t ;
struct TYPE_7__ {int base; } ;
struct TYPE_6__ {int text_protocol; TYPE_2__ prefix; int port; int host; scalar_t__ num_threads_connected; int pending; int cond; int mutex; } ;
typedef TYPE_1__ h2o_memcached_context_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int ,TYPE_1__*) ;
 TYPE_2__ FUNC_3 (int *,char const*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int VAR_1 ;

h2o_memcached_context_t *FUNC_9(const char *VAR_2, uint16_t VAR_3, int VAR_4, size_t VAR_5,
                                                      const char *VAR_6)
{
    h2o_memcached_context_t *VAR_7 = FUNC_1(sizeof(*VAR_7));

    FUNC_8(&VAR_7->mutex, ((void*)0));
    FUNC_7(&VAR_7->cond, ((void*)0));
    FUNC_0(&VAR_7->pending);
    VAR_7->num_threads_connected = 0;
    VAR_7->host = FUNC_3(((void*)0), VAR_2, VAR_0).base;
    VAR_7->port = VAR_3;
    VAR_7->text_protocol = VAR_4;
    VAR_7->prefix = FUNC_3(((void*)0), VAR_6, VAR_0);

    {
        pthread_t VAR_8;
        pthread_attr_t VAR_9;
        size_t VAR_10;
        FUNC_5(&VAR_9);
        FUNC_6(&VAR_9, 1);
        for (VAR_10 = 0; VAR_10 != VAR_5; ++VAR_10)
            FUNC_2(&VAR_8, &VAR_9, VAR_1, VAR_7);
        FUNC_4(&VAR_9);
    }

    return VAR_7;
}
