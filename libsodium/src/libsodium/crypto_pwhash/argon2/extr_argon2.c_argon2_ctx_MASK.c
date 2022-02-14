
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ argon2_type ;
struct TYPE_10__ {int passes; unsigned int current_pass; int memory_blocks; int segment_length; int lane_length; int lanes; scalar_t__ type; int threads; int * region; } ;
typedef TYPE_1__ argon2_instance_t ;
struct TYPE_11__ {int m_cost; int lanes; int t_cost; int threads; } ;
typedef TYPE_2__ argon2_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

int
FUNC_4(argon2_context *VAR_5, argon2_type VAR_6)
{

    int VAR_7 = FUNC_3(VAR_5);
    uint32_t VAR_8, VAR_9;
    uint32_t VAR_10;
    argon2_instance_t VAR_11;

    if (VAR_1 != VAR_7) {
        return VAR_7;
    }

    if (VAR_6 != VAR_4 && VAR_6 != VAR_3) {
        return VAR_0;
    }



    VAR_8 = VAR_5->m_cost;

    if (VAR_8 < 2 * VAR_2 * VAR_5->lanes) {
        VAR_8 = 2 * VAR_2 * VAR_5->lanes;
    }

    VAR_9 = VAR_8 / (VAR_5->lanes * VAR_2);

    VAR_8 = VAR_9 * (VAR_5->lanes * VAR_2);

    VAR_11.region = ((void*)0);
    VAR_11.passes = VAR_5->t_cost;
    VAR_11.current_pass = ~ 0U;
    VAR_11.memory_blocks = VAR_8;
    VAR_11.segment_length = VAR_9;
    VAR_11.lane_length = VAR_9 * VAR_2;
    VAR_11.lanes = VAR_5->lanes;
    VAR_11.threads = VAR_5->threads;
    VAR_11.type = VAR_6;




    VAR_7 = FUNC_2(&VAR_11, VAR_5);

    if (VAR_1 != VAR_7) {
        return VAR_7;
    }


    for (VAR_10 = 0; VAR_10 < VAR_11.passes; VAR_10++) {
        FUNC_0(&VAR_11, VAR_10);
    }


    FUNC_1(VAR_5, &VAR_11);

    return VAR_1;
}
