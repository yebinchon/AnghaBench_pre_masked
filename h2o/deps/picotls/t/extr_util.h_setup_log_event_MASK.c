
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cb; } ;
struct st_util_log_event_t {TYPE_1__ super; int * fp; } ;
struct TYPE_5__ {TYPE_1__* log_event; } ;
typedef TYPE_2__ ptls_context_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char*,char const*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(ptls_context_t *VAR_3, const char *VAR_4)
{
    static struct st_util_log_event_t VAR_5;

    if ((VAR_5.fp = FUNC_1(VAR_4, "at")) == ((void*)0)) {
        FUNC_2(VAR_2, "failed to open file:%s:%s\n", VAR_4, FUNC_3(VAR_0));
        FUNC_0(1);
    }
    VAR_5.super.cb = VAR_1;
    VAR_3->log_event = &VAR_5.super;
}
