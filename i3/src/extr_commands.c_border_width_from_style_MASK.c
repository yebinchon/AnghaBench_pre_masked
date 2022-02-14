
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ border_style_t ;
struct TYPE_2__ {scalar_t__ default_floating_border; int default_floating_border_width; scalar_t__ default_border; int default_border_width; } ;
typedef int Con ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int *) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(border_style_t VAR_3, long VAR_4, Con *VAR_5) {
    if (VAR_3 == VAR_0) {
        return 0;
    }
    if (VAR_4 >= 0) {
        return FUNC_1(VAR_4);
    }

    const bool VAR_6 = FUNC_0(VAR_5) != ((void*)0);

    if (VAR_6 && VAR_3 == VAR_2.default_floating_border) {
        return VAR_2.default_floating_border_width;
    } else if (!VAR_6 && VAR_3 == VAR_2.default_border) {
        return VAR_2.default_border_width;
    } else {

        return FUNC_1(VAR_3 == VAR_1 ? 2 : 1);
    }
}
