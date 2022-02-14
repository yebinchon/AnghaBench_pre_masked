
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ WPARAM ;
struct TYPE_5__ {int* keycodes; } ;
struct TYPE_7__ {TYPE_1__ win32; } ;
struct TYPE_6__ {scalar_t__ message; scalar_t__ wParam; scalar_t__ time; int lParam; } ;
typedef TYPE_2__ MSG ;
typedef int LPARAM ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *,int ,int ,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 TYPE_3__ VAR_12 ;

__attribute__((used)) static int FUNC_3(WPARAM VAR_13, LPARAM VAR_14)
{

    if (VAR_13 == VAR_4)
    {
        MSG VAR_15;
        DWORD VAR_16;


        if (FUNC_1(VAR_14) & VAR_2)
            return VAR_1;




        VAR_16 = FUNC_0();

        if (FUNC_2(&VAR_15, ((void*)0), 0, 0, VAR_3))
        {
            if (VAR_15.message == VAR_7 ||
                VAR_15.message == VAR_9 ||
                VAR_15.message == VAR_8 ||
                VAR_15.message == VAR_10)
            {
                if (VAR_15.wParam == VAR_5 &&
                    (FUNC_1(VAR_15.lParam) & VAR_2) &&
                    VAR_15.time == VAR_16)
                {

                    return VAR_11;
                }
            }
        }

        return VAR_0;
    }

    if (VAR_13 == VAR_6)
    {


        return VAR_11;
    }

    return VAR_12.win32.keycodes[FUNC_1(VAR_14) & 0x1FF];
}
