
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int anchor257; int * anchors; scalar_t__ offset; scalar_t__ bits; } ;
typedef TYPE_1__ h2o_http2_scheduler_queue_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(h2o_http2_scheduler_queue_t *VAR_0)
{
    size_t VAR_1;
    VAR_0->bits = 0;
    VAR_0->offset = 0;
    for (VAR_1 = 0; VAR_1 != sizeof(VAR_0->anchors) / sizeof(VAR_0->anchors[0]); ++VAR_1)
        FUNC_0(VAR_0->anchors + VAR_1);
    FUNC_0(&VAR_0->anchor257);
}
