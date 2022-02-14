
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_7__ {size_t size; TYPE_1__* entries; } ;
struct TYPE_8__ {TYPE_2__ inflight; } ;
typedef TYPE_3__ h2o_qpack_encoder_t ;
struct TYPE_6__ {scalar_t__ stream_id; } ;


 int FUNC_0 (TYPE_3__*,size_t) ;

__attribute__((used)) static int FUNC_1(h2o_qpack_encoder_t *VAR_0, int64_t VAR_1, const char **VAR_2)
{
    size_t VAR_3 = 0;

    while (VAR_3 < VAR_0->inflight.size) {
        if (VAR_0->inflight.entries[VAR_3].stream_id == VAR_1) {
            FUNC_0(VAR_0, VAR_3);
        } else {
            ++VAR_3;
        }
    }

    return 0;
}
