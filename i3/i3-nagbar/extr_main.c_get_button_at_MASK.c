
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int16_t ;
struct TYPE_4__ {scalar_t__ x; scalar_t__ width; } ;
typedef TYPE_1__ button_t ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static button_t *FUNC_0(int16_t VAR_2, int16_t VAR_3) {
    for (int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
        if (VAR_2 >= (VAR_1[VAR_4].x) && VAR_2 <= (VAR_1[VAR_4].x + VAR_1[VAR_4].width))
            return &VAR_1[VAR_4];

    return ((void*)0);
}
