
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_11__ {size_t size; TYPE_4__* entries; } ;
struct TYPE_12__ {size_t num_unblocked; TYPE_1__ list; } ;
struct TYPE_13__ {scalar_t__ total_inserts; TYPE_2__ blocked_streams; } ;
typedef TYPE_3__ h2o_qpack_decoder_t ;
struct TYPE_14__ {scalar_t__ largest_ref; int stream_id; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int const**,int const*,int) ;
 int FUNC_1 (TYPE_3__*,int ,char const**) ;
 int FUNC_2 (TYPE_3__*,int ,char const**) ;
 int FUNC_3 (TYPE_3__*,int,int ,int,int const*,int ,char const**) ;
 int FUNC_4 (TYPE_3__*,int,int const*,int ,int,int const*,int ,char const**) ;
 int FUNC_5 (TYPE_4__*,TYPE_4__*,int) ;

int FUNC_6(h2o_qpack_decoder_t *VAR_1, int64_t **VAR_2, size_t *VAR_3,
                                   const uint8_t **VAR_4, const uint8_t *VAR_5, const char **VAR_6)
{
    if (VAR_1->blocked_streams.num_unblocked != 0) {
        size_t VAR_7 = VAR_1->blocked_streams.list.size - VAR_1->blocked_streams.num_unblocked;
        if (VAR_7 != 0)
            FUNC_5(VAR_1->blocked_streams.list.entries, VAR_1->blocked_streams.list.entries + VAR_7,
                    sizeof(VAR_1->blocked_streams.list.entries[0]) * VAR_7);
        VAR_1->blocked_streams.list.size = VAR_7;
        VAR_1->blocked_streams.num_unblocked = 0;
    }

    const uint8_t *VAR_8 = *VAR_4;
    int VAR_9 = 0;

    while (VAR_8 != VAR_5 && VAR_9 == 0) {
        switch (*VAR_8 >> 5) {
        default: {
            int64_t VAR_10, VAR_11;
            int VAR_12 = (*VAR_8 & 0x40) != 0;
            if ((VAR_9 = FUNC_0(&VAR_10, &VAR_8, VAR_5, 6)) != 0)
                goto Exit;
            if (VAR_8 == VAR_5)
                goto Exit;
            int VAR_13 = (*VAR_8 & 0x80) != 0;
            if ((VAR_9 = FUNC_0(&VAR_11, &VAR_8, VAR_5, 7)) != 0)
                goto Exit;
            if (!(VAR_8 + VAR_11 <= VAR_5))
                goto Exit;
            VAR_9 = FUNC_3(VAR_1, VAR_12, VAR_10, VAR_13, VAR_8, VAR_11, VAR_6);
            VAR_8 += VAR_11;
        } break;
        case 2:
        case 3: {
            int64_t VAR_14, VAR_15;
            int VAR_16 = (*VAR_8 & 0x20) != 0;
            if ((VAR_9 = FUNC_0(&VAR_14, &VAR_8, VAR_5, 5)) != 0)
                goto Exit;
            if (!(VAR_8 + VAR_14 < VAR_5))
                goto Exit;
            const uint8_t *VAR_17 = VAR_8;
            VAR_8 += VAR_14;
            int VAR_18 = (*VAR_8 & 0x80) != 0;
            if ((VAR_9 = FUNC_0(&VAR_15, &VAR_8, VAR_5, 7)) != 0)
                goto Exit;
            if (!(VAR_8 + VAR_15 <= VAR_5))
                goto Exit;
            VAR_9 = FUNC_4(VAR_1, VAR_16, VAR_17, VAR_14, VAR_18, VAR_8, VAR_15, VAR_6);
            VAR_8 += VAR_15;
        } break;
        case 0: {
            int64_t VAR_19;
            if ((VAR_9 = FUNC_0(&VAR_19, &VAR_8, VAR_5, 5)) != 0)
                goto Exit;
            VAR_9 = FUNC_1(VAR_1, VAR_19, VAR_6);
        } break;
        case 1: {
            int64_t VAR_20;
            if ((VAR_9 = FUNC_0(&VAR_20, &VAR_8, VAR_5, 5)) != 0)
                goto Exit;
            VAR_9 = FUNC_2(VAR_1, VAR_20, VAR_6);
        } break;
        }
        *VAR_4 = VAR_8;
    }

Exit:
    if (VAR_9 == VAR_0)
        VAR_9 = 0;
    if (VAR_9 == 0) {

        *VAR_2 = &VAR_1->blocked_streams.list.entries[0].stream_id;
        for (VAR_1->blocked_streams.num_unblocked = 0; VAR_1->blocked_streams.num_unblocked < VAR_1->blocked_streams.list.size;
             ++VAR_1->blocked_streams.num_unblocked) {
            if (VAR_1->blocked_streams.list.entries[VAR_1->blocked_streams.num_unblocked].largest_ref > VAR_1->total_inserts)
                break;
            (*VAR_2)[VAR_1->blocked_streams.num_unblocked] =
                VAR_1->blocked_streams.list.entries[VAR_1->blocked_streams.num_unblocked].stream_id;
        }
        *VAR_3 = VAR_1->blocked_streams.num_unblocked;
    }
    return (int)VAR_9;
}
