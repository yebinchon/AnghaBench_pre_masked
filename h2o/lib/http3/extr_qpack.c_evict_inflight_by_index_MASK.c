
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {size_t size; TYPE_4__* entries; } ;
struct TYPE_9__ {TYPE_3__ inflight; int num_blocked; } ;
typedef TYPE_2__ h2o_qpack_encoder_t ;
struct TYPE_8__ {scalar_t__ is_blocking; } ;
struct TYPE_11__ {TYPE_1__ encoder_flags; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,TYPE_4__*,size_t) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_3(h2o_qpack_encoder_t *VAR_0, size_t VAR_1)
{
    if (VAR_0->inflight.entries[VAR_1].encoder_flags.is_blocking)
        --VAR_0->num_blocked;
    --VAR_0->inflight.size;

    if (VAR_0->inflight.size == 0) {
        FUNC_0(VAR_0->inflight.entries);
        FUNC_2(&VAR_0->inflight, 0, sizeof(VAR_0->inflight));
    } else if (VAR_1 < VAR_0->inflight.size) {
        FUNC_1(VAR_0->inflight.entries + VAR_1, VAR_0->inflight.entries + VAR_1 + 1, VAR_0->inflight.size - VAR_1);
    }
}
