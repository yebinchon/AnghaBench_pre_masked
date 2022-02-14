
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_6__ {scalar_t__ index; scalar_t__ lane; scalar_t__ slice; scalar_t__ pass; } ;
typedef TYPE_1__ argon2_position_t ;
struct TYPE_7__ {scalar_t__ lanes; } ;
typedef TYPE_2__ argon2_instance_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__) ;

void
FUNC_1(argon2_instance_t *VAR_1, uint32_t VAR_2)
{
    argon2_position_t VAR_3;
    uint32_t VAR_4;
    uint32_t VAR_5;

    if (VAR_1 == ((void*)0) || VAR_1->lanes == 0) {
        return;
    }

    VAR_3.pass = VAR_2;
    for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
        VAR_3.slice = (uint8_t) VAR_5;
        for (VAR_4 = 0; VAR_4 < VAR_1->lanes; ++VAR_4) {
            VAR_3.lane = VAR_4;
            VAR_3.index = 0;
            FUNC_0(VAR_1, VAR_3);
        }
    }
}
