
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float life; float vz; float x; float vx; float y; float vy; float z; scalar_t__ active; } ;
typedef TYPE_1__ PARTICLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 float VAR_3 ;
 float VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(PARTICLE *VAR_6, float VAR_7)
{

    if (!VAR_6->active)
        return;


    VAR_6->life -= VAR_7 * (1.f / VAR_4);


    if (VAR_6->life <= 0.f)
    {
        VAR_6->active = 0;
        return;
    }


    VAR_6->vz = VAR_6->vz - VAR_3 * VAR_7;


    VAR_6->x = VAR_6->x + VAR_6->vx * VAR_7;
    VAR_6->y = VAR_6->y + VAR_6->vy * VAR_7;
    VAR_6->z = VAR_6->z + VAR_6->vz * VAR_7;


    if (VAR_6->vz < 0.f)
    {

        if ((VAR_6->x * VAR_6->x + VAR_6->y * VAR_6->y) < VAR_1 &&
            VAR_6->z < (VAR_0 + VAR_5 / 2))
        {
            VAR_6->vz = -VAR_2 * VAR_6->vz;
            VAR_6->z = VAR_0 + VAR_5 / 2 +
                    VAR_2 * (VAR_0 +
                    VAR_5 / 2 - VAR_6->z);
        }


        else if (VAR_6->z < VAR_5 / 2)
        {
            VAR_6->vz = -VAR_2 * VAR_6->vz;
            VAR_6->z = VAR_5 / 2 +
                    VAR_2 * (VAR_5 / 2 - VAR_6->z);
        }
    }
}
