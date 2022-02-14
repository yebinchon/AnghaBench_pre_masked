
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {float const r; float const g; float const b; int * window; } ;
typedef TYPE_1__ Thread ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (float const,float const,float const,float) ;
 float FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (float) ;

__attribute__((used)) static int FUNC_8(void* VAR_2)
{
    const Thread* VAR_3 = VAR_2;

    FUNC_4(VAR_3->window);
    FUNC_6(1);

    while (VAR_1)
    {
        const float VAR_4 = (float) FUNC_0(FUNC_7(FUNC_3() * 2.f));
        FUNC_2(VAR_3->r * VAR_4, VAR_3->g * VAR_4, VAR_3->b * VAR_4, 0.f);

        FUNC_1(VAR_0);
        FUNC_5(VAR_3->window);
    }

    FUNC_4(((void*)0));
    return 0;
}
