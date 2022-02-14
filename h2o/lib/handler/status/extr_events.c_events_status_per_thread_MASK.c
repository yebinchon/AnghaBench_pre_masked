
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct st_events_status_ctx_t {int mutex; int h2_write_closed; int h2_read_closed; int * h2_protocol_level_errors; int ssl_errors; int * emitted_status_errors; } ;
struct TYPE_7__ {scalar_t__ write_closed; scalar_t__ read_closed; scalar_t__* protocol_level_errors; } ;
struct TYPE_8__ {TYPE_2__ events; } ;
struct TYPE_6__ {scalar_t__ errors; } ;
struct TYPE_9__ {TYPE_3__ http2; TYPE_1__ ssl; scalar_t__* emitted_error_status; } ;
typedef TYPE_4__ h2o_context_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, h2o_context_t *VAR_3)
{
    size_t VAR_4;
    struct st_events_status_ctx_t *VAR_5 = VAR_2;

    FUNC_0(&VAR_5->mutex);

    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        VAR_5->emitted_status_errors[VAR_4] += VAR_3->emitted_error_status[VAR_4];
    }
    VAR_5->ssl_errors += VAR_3->ssl.errors;
    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        VAR_5->h2_protocol_level_errors[VAR_4] += VAR_3->http2.events.protocol_level_errors[VAR_4];
    }
    VAR_5->h2_read_closed += VAR_3->http2.events.read_closed;
    VAR_5->h2_write_closed += VAR_3->http2.events.write_closed;

    FUNC_1(&VAR_5->mutex);
}
