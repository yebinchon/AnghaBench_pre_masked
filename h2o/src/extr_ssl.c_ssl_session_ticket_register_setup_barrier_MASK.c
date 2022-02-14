
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int h2o_barrier_t ;
struct TYPE_4__ {int * update_thread; } ;
struct TYPE_6__ {TYPE_1__ ticket; } ;
struct TYPE_5__ {int * barrier; } ;


 int FUNC_0 (int ) ;
 TYPE_3__ VAR_0 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char*) ;
 TYPE_2__ VAR_1 ;

void FUNC_3(h2o_barrier_t *VAR_2)
{
    if (VAR_0.ticket.update_thread == ((void*)0))
        FUNC_2("ticket-based encryption MUST be enabled when running QUIC");
    FUNC_0(VAR_1.barrier == ((void*)0));
    FUNC_1(VAR_2, 1);
    VAR_1.barrier = VAR_2;
}
