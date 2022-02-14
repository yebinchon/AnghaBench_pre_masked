
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_4__ {scalar_t__ state; int _scheduler; int _link; int output_window; } ;
typedef TYPE_1__ h2o_http2_stream_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(h2o_http2_stream_t *VAR_1, ssize_t VAR_2)
{
    ssize_t VAR_3 = FUNC_3(&VAR_1->output_window);
    if (FUNC_4(&VAR_1->output_window, VAR_2) != 0)
        return -1;
    if (VAR_3 <= 0 && FUNC_3(&VAR_1->output_window) > 0 &&
        (FUNC_2(VAR_1) || VAR_1->state == VAR_0)) {
        FUNC_0(!FUNC_5(&VAR_1->_link));
        FUNC_1(&VAR_1->_scheduler);
    }
    return 0;
}
