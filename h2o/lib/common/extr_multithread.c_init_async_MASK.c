
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int write; TYPE_4__* read; } ;
struct TYPE_6__ {TYPE_1__ async; } ;
typedef TYPE_2__ h2o_multithread_queue_t ;
typedef int h2o_loop_t ;
typedef int buf ;
struct TYPE_7__ {TYPE_2__* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int*) ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int ,int ) ;
 void* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (int ,char*,int) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_7(h2o_multithread_queue_t *VAR_6, h2o_loop_t *VAR_7)
{





    int VAR_8;
    char VAR_9[128];

    VAR_8 = FUNC_1(0, VAR_1 | VAR_0);
    if (VAR_8 == -1) {
        FUNC_4("eventfd: %s", FUNC_6(VAR_4, VAR_9, sizeof(VAR_9)));
    }
    VAR_6->async.write = VAR_8;
    VAR_6->async.read = FUNC_3(VAR_7, VAR_8, 0);
    VAR_6->async.read->data = VAR_6;
    FUNC_5(VAR_6->async.read, VAR_5);
}
