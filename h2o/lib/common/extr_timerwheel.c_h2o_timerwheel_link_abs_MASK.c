
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_7__ {scalar_t__ last_run; } ;
typedef TYPE_1__ h2o_timerwheel_t ;
struct TYPE_8__ {scalar_t__ expire_at; } ;
typedef TYPE_2__ h2o_timerwheel_entry_t ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;

void FUNC_1(h2o_timerwheel_t *VAR_0, h2o_timerwheel_entry_t *VAR_1, uint64_t VAR_2)
{
    VAR_1->expire_at = VAR_2 < VAR_0->last_run ? VAR_0->last_run : VAR_2;
    FUNC_0(VAR_0, VAR_1);
}
