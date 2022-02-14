
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {int io_error; scalar_t__ test_fail_point; scalar_t__ logical_pos; scalar_t__ test_fail_point_next; int inner; } ;
typedef TYPE_2__ Context ;


 scalar_t__ FUNC_0 (int ,scalar_t__,int) ;

__attribute__((used)) static int64_t FUNC_1(URLContext *VAR_0, int64_t VAR_1, int VAR_2)
{
    Context *VAR_3 = VAR_0->priv_data;
    int64_t VAR_4 = 0;

    VAR_4 = FUNC_0(VAR_3->inner, VAR_1, VAR_2);
    if (VAR_4 < 0) {
        VAR_3->io_error = (int)VAR_4;
        return VAR_4;
    }

    VAR_3->logical_pos = VAR_4;
    if (VAR_3->test_fail_point)
        VAR_3->test_fail_point_next = VAR_3->logical_pos + VAR_3->test_fail_point;

    VAR_3->io_error = 0;
    return VAR_4;
}
