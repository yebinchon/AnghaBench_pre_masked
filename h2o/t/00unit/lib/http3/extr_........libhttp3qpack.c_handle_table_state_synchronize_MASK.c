
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_4__ {scalar_t__ base_offset; scalar_t__ last; scalar_t__ first; } ;
struct TYPE_5__ {scalar_t__ largest_known_received; TYPE_1__ table; } ;
typedef TYPE_2__ h2o_qpack_encoder_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(h2o_qpack_encoder_t *VAR_1, int64_t VAR_2, const char **VAR_3)
{
    if (VAR_2 == 0)
        goto Error;

    int64_t VAR_4 = VAR_1->largest_known_received + VAR_2;
    if (VAR_4 >= VAR_1->table.base_offset + VAR_1->table.last - VAR_1->table.first)
        goto Error;
    VAR_1->largest_known_received = VAR_4;

    return 0;
Error:
    *VAR_3 = "Table State Synchronize: invalid argument";
    return VAR_0;
}
