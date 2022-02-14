
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int const uint64_t ;
typedef int uint32_t ;
struct st_h2o_qpack_decode_header_ctx_t {int largest_ref; int base_index; TYPE_4__* qpack; } ;
typedef int int64_t ;
struct TYPE_8__ {scalar_t__ size; } ;
struct TYPE_9__ {TYPE_2__ list; } ;
struct TYPE_7__ {scalar_t__ base_offset; scalar_t__ last; scalar_t__ first; } ;
struct TYPE_10__ {int max_entries; int total_inserts; scalar_t__ max_blocked; TYPE_3__ blocked_streams; TYPE_1__ table; } ;
typedef TYPE_4__ h2o_qpack_decoder_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int*,int const**,int const*,int) ;
 int FUNC_2 (TYPE_4__*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(h2o_qpack_decoder_t *VAR_2, struct st_h2o_qpack_decode_header_ctx_t *VAR_3, int64_t VAR_4,
                                const uint8_t **VAR_5, const uint8_t *VAR_6)
{
    VAR_3->qpack = VAR_2;


    if (FUNC_1(&VAR_3->largest_ref, VAR_5, VAR_6, 8) != 0)
        return VAR_1;
    if (VAR_3->largest_ref > 0) {
        if (VAR_2->max_entries == 0)
            return VAR_1;
        const uint32_t VAR_7 = 2 * VAR_2->max_entries;
        uint64_t VAR_8 = VAR_2->total_inserts + VAR_2->max_entries;
        uint64_t VAR_9 = VAR_8 / VAR_7 * VAR_7;
        VAR_3->largest_ref += VAR_9 - 1;
        if (VAR_3->largest_ref > VAR_8 && VAR_3->largest_ref > VAR_7)
            VAR_3->largest_ref -= VAR_7;
        FUNC_0(VAR_3->largest_ref != 0);
    }


    if (*VAR_5 >= VAR_6)
        return VAR_1;
    int VAR_10 = (**VAR_5 & 0x80) != 0;
    if (FUNC_1(&VAR_3->base_index, VAR_5, VAR_6, 7) != 0)
        return VAR_1;
    VAR_3->base_index = VAR_10 == 0 ? VAR_3->largest_ref + VAR_3->base_index : VAR_3->largest_ref - VAR_3->base_index - 1;


    if (VAR_3->largest_ref >= VAR_2->table.base_offset + VAR_2->table.last - VAR_2->table.first) {
        if (VAR_2->blocked_streams.list.size + 1 >= VAR_2->max_blocked)
            return VAR_1;
        FUNC_2(VAR_2, VAR_4, VAR_3->largest_ref);
        return VAR_0;
    }

    return 0;
}
