
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xkb_keysym_t ;
typedef int uint32_t ;
typedef int _GLFWwindow ;
struct TYPE_4__ {int modifiers; int keymap; int state; } ;
struct TYPE_5__ {TYPE_1__ xkb; } ;
struct TYPE_6__ {TYPE_2__ wl; } ;
typedef int GLFWbool ;


 int const VAR_0 ;
 int const VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int *,long,int const,int const) ;
 long FUNC_1 (int ) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int ,int const) ;
 int FUNC_4 (int ,int,int const**) ;

__attribute__((used)) static GLFWbool FUNC_5(_GLFWwindow* VAR_3, uint32_t VAR_4)
{
    uint32_t VAR_5, VAR_6;
    long VAR_7;
    const xkb_keysym_t *VAR_8;
    xkb_keysym_t VAR_9;

    VAR_5 = VAR_4 + 8;
    VAR_6 = FUNC_4(VAR_2.wl.xkb.state, VAR_5, &VAR_8);

    if (VAR_6 == 1)
    {



        VAR_9 = VAR_8[0];

        VAR_7 = FUNC_1(VAR_9);
        if (VAR_7 != -1)
        {
            const int VAR_10 = VAR_2.wl.xkb.modifiers;
            const int VAR_11 = !(VAR_10 & (VAR_1 | VAR_0));
            FUNC_0(VAR_3, VAR_7, VAR_10, VAR_11);
        }
    }

    return FUNC_3(VAR_2.wl.xkb.keymap, VAR_8[0]);
}
