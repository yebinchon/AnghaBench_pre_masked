
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int type; int id_; } ;
struct TYPE_5__ {int type; int id_; } ;
struct TYPE_7__ {int exclusive; int weight_m1; TYPE_2__ dependency; TYPE_1__ prioritized; } ;
typedef TYPE_3__ h2o_http3_priority_frame_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const**,int const*) ;

int FUNC_1(h2o_http3_priority_frame_t *VAR_3, const uint8_t *VAR_4, size_t VAR_5, const char **VAR_6)
{
    const uint8_t *VAR_7 = VAR_4, *VAR_8 = VAR_7 + VAR_5;

    if (VAR_8 - VAR_7 < 2)
        goto Fail;

    if ((*VAR_7 & 0x7) != 0)
        goto Fail;
    VAR_3->prioritized.type = (*VAR_7 >> 6) & 0x3;
    VAR_3->dependency.type = (*VAR_7 >> 4) & 0x3;
    VAR_3->exclusive = (*VAR_7 & 0x8) != 0;
    ++VAR_7;
    if (VAR_3->prioritized.type == VAR_1)
        goto Fail;
    if ((VAR_3->prioritized.id_ = FUNC_0(&VAR_7, VAR_8)) == VAR_2)
        goto Fail;
    VAR_3->dependency.id_ = 0;
    if (VAR_3->dependency.type != VAR_1)
        if ((VAR_3->dependency.id_ = FUNC_0(&VAR_7, VAR_8)) == VAR_2)
            goto Fail;
    if (VAR_8 - VAR_7 != 1)
        goto Fail;
    VAR_3->weight_m1 = *VAR_7++;

    return 0;
Fail:
    *VAR_6 = "invalid PRIORITY frame";
    return VAR_0;
}
