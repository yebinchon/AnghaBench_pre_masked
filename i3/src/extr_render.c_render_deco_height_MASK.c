
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int height; } ;
struct TYPE_4__ {TYPE_1__ font; } ;


 TYPE_2__ VAR_0 ;

int FUNC_0(void) {
    int VAR_1 = VAR_0.font.height + 4;
    if (VAR_0.font.height & 0x01)
        ++VAR_1;
    return VAR_1;
}
