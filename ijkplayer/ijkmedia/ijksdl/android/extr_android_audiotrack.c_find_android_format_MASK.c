
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sdl_format; int android_format; } ;
typedef TYPE_1__ AudioFormatMapEntry ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(int VAR_2)
{
    for (int VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); ++VAR_3) {
        AudioFormatMapEntry *VAR_4 = &VAR_1[VAR_3];
        if (VAR_4->sdl_format == VAR_2)
            return VAR_4->android_format;
    }
    return VAR_0;
}
