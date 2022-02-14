
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {scalar_t__ max_acked; } ;
struct st_quicly_max_streams_t {scalar_t__ count; TYPE_1__ blocked_sender; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct st_quicly_max_streams_t *VAR_1, uint64_t VAR_2)
{
    if (VAR_2 > (uint64_t)1 << 60)
        return VAR_0;

    if (VAR_1->count < VAR_2) {
        VAR_1->count = VAR_2;
        if (VAR_1->blocked_sender.max_acked < VAR_2)
            VAR_1->blocked_sender.max_acked = VAR_2;
    }

    return 0;
}
