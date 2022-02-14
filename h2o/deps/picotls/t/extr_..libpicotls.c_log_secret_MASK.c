
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* ctx; } ;
typedef TYPE_2__ ptls_t ;
struct TYPE_11__ {int len; int base; } ;
typedef TYPE_3__ ptls_iovec_t ;
struct TYPE_12__ {int (* cb ) (TYPE_4__*,TYPE_2__*,char const*,char*,int ) ;} ;
struct TYPE_9__ {TYPE_4__* log_event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*,char const*,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_2__*,char const*,char*,int ) ;

__attribute__((used)) static void FUNC_3(ptls_t *VAR_2, const char *VAR_3, ptls_iovec_t VAR_4)
{
    char VAR_5[VAR_1 * 2 + 1];

    FUNC_0(VAR_0, VAR_2, VAR_3, FUNC_1(VAR_5, VAR_4.base, VAR_4.len));

    if (VAR_2->ctx->log_event != ((void*)0))
        VAR_2->ctx->log_event->cb(VAR_2->ctx->log_event, VAR_2, VAR_3, "%s", FUNC_1(VAR_5, VAR_4.base, VAR_4.len));
}
