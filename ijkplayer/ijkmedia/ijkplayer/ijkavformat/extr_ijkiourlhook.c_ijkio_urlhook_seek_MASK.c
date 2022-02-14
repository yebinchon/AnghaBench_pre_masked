
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_9__ {TYPE_1__* prot; } ;
struct TYPE_8__ {int io_error; scalar_t__ test_fail_point; scalar_t__ logical_pos; scalar_t__ test_fail_point_next; TYPE_4__* inner; } ;
struct TYPE_7__ {TYPE_3__* priv_data; } ;
struct TYPE_6__ {scalar_t__ (* url_seek ) (TYPE_4__*,scalar_t__,int) ;} ;
typedef TYPE_2__ IjkURLContext ;
typedef TYPE_3__ Context ;


 scalar_t__ FUNC_0 (TYPE_4__*,scalar_t__,int) ;

__attribute__((used)) static int64_t FUNC_1(IjkURLContext *VAR_0, int64_t VAR_1, int VAR_2)
{
    Context *VAR_3 = VAR_0->priv_data;
    int64_t VAR_4 = 0;

    VAR_4 = VAR_3->inner->prot->url_seek(VAR_3->inner, VAR_1, VAR_2);
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
