
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t uint32_t ;
struct TYPE_10__ {int * v; } ;
typedef TYPE_1__ block ;
struct TYPE_11__ {int slice; int lane; int pass; } ;
typedef TYPE_2__ argon2_position_t ;
struct TYPE_12__ {size_t segment_length; int type; int passes; int memory_blocks; } ;
typedef TYPE_3__ argon2_instance_t ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_2(const argon2_instance_t *VAR_1,
                   const argon2_position_t *VAR_2, uint64_t *VAR_3)
{
    block VAR_4, VAR_5, VAR_6, VAR_7;
    uint32_t VAR_8;

    FUNC_1(&VAR_4, 0);
    FUNC_1(&VAR_5, 0);

    if (VAR_1 != ((void*)0) && VAR_2 != ((void*)0)) {
        VAR_5.v[0] = VAR_2->pass;
        VAR_5.v[1] = VAR_2->lane;
        VAR_5.v[2] = VAR_2->slice;
        VAR_5.v[3] = VAR_1->memory_blocks;
        VAR_5.v[4] = VAR_1->passes;
        VAR_5.v[5] = VAR_1->type;

        for (VAR_8 = 0; VAR_8 < VAR_1->segment_length; ++VAR_8) {
            if (VAR_8 % VAR_0 == 0) {
                VAR_5.v[6]++;
                FUNC_1(&VAR_7, 0);
                FUNC_1(&VAR_6, 0);
                FUNC_0(&VAR_4, &VAR_5, &VAR_7);
                FUNC_0(&VAR_4, &VAR_7, &VAR_6);
            }

            VAR_3[VAR_8] = VAR_6.v[VAR_8 % VAR_0];
        }
    }
}
