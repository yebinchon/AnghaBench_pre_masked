
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wl_fixed_t ;
typedef scalar_t__ uint32_t ;
struct wl_pointer {int dummy; } ;
typedef int _GLFWwindow ;
struct TYPE_3__ {int * pointerFocus; } ;
struct TYPE_4__ {TYPE_1__ wl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int *,double,double) ;
 int FUNC_1 (int) ;
 double const FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void* VAR_3,
                              struct wl_pointer* VAR_4,
                              uint32_t VAR_5,
                              uint32_t VAR_6,
                              wl_fixed_t VAR_7)
{
    _GLFWwindow* VAR_8 = VAR_2.wl.pointerFocus;
    double VAR_9 = 0.0, VAR_10 = 0.0;



    const double VAR_11 = 1.0 / 10.0;

    if (!VAR_8)
        return;

    FUNC_1(VAR_6 == VAR_0 ||
           VAR_6 == VAR_1);

    if (VAR_6 == VAR_0)
        VAR_9 = FUNC_2(VAR_7) * VAR_11;
    else if (VAR_6 == VAR_1)
        VAR_10 = FUNC_2(VAR_7) * VAR_11;

    FUNC_0(VAR_8, VAR_9, VAR_10);
}
