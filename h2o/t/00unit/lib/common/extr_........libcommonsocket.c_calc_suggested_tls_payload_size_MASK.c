
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_5__ {TYPE_1__* ssl; } ;
typedef TYPE_2__ h2o_socket_t ;
struct TYPE_4__ {scalar_t__ record_overhead; } ;



__attribute__((used)) static uint16_t FUNC_0(h2o_socket_t *VAR_0, uint16_t VAR_1)
{
    uint16_t VAR_2 = VAR_1;
    if (VAR_0->ssl != ((void*)0) && VAR_0->ssl->record_overhead < VAR_2)
        VAR_2 -= VAR_0->ssl->record_overhead;
    return VAR_2;
}
