
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_6__ {size_t size; TYPE_2__* entries; } ;
struct TYPE_8__ {scalar_t__ largest_known_received; TYPE_1__ inflight; } ;
typedef TYPE_3__ h2o_qpack_encoder_t ;
struct TYPE_7__ {scalar_t__ stream_id; scalar_t__ largest_ref; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,size_t) ;

__attribute__((used)) static int FUNC_1(h2o_qpack_encoder_t *VAR_1, int64_t VAR_2, const char **VAR_3)
{
    size_t VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_1->inflight.size; ++VAR_4)
        if (VAR_1->inflight.entries[VAR_4].stream_id == VAR_2)
            goto Found;

    *VAR_3 = "Header Acknowledgement: invalid stream id";
    return VAR_0;

Found:

    if (VAR_1->largest_known_received < VAR_1->inflight.entries[VAR_4].largest_ref)
        VAR_1->largest_known_received = VAR_1->inflight.entries[VAR_4].largest_ref;

    FUNC_0(VAR_1, VAR_4);

    return 0;
}
