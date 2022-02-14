
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {scalar_t__ type; int id_; } ;
struct TYPE_5__ {scalar_t__ type; int id_; } ;
struct TYPE_7__ {int exclusive; int weight_m1; TYPE_2__ dependency; TYPE_1__ prioritized; } ;
typedef TYPE_3__ h2o_http3_priority_frame_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int* FUNC_1 (int*,int ) ;

uint8_t *FUNC_2(uint8_t *VAR_3, const h2o_http3_priority_frame_t *VAR_4)
{
    FUNC_0(VAR_4->prioritized.type != VAR_1);
    uint8_t *VAR_5 = VAR_3;

    *VAR_3++ = VAR_0;
    ++VAR_3;
    *VAR_3++ = ((uint8_t)VAR_4->prioritized.type << 6) | ((uint8_t)VAR_4->dependency.type << 4) | (VAR_4->exclusive << 3);
    VAR_3 = FUNC_1(VAR_3, VAR_4->prioritized.id_);
    if (VAR_4->dependency.type != VAR_1)
        VAR_3 = FUNC_1(VAR_3, VAR_4->dependency.id_);
    *VAR_3++ = VAR_4->weight_m1;
    VAR_5[1] = VAR_3 - (VAR_5 + 2);

    FUNC_0(VAR_3 - VAR_5 < VAR_2);
    return VAR_3;
}
