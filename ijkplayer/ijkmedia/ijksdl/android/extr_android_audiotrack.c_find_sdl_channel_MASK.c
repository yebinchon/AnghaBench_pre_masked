
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int Uint8 ;
struct TYPE_4__ {int android_channel; int sdl_channel; } ;
typedef TYPE_1__ AudioChannelMapEntry ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static Uint8 FUNC_1(int VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); ++VAR_2) {
        AudioChannelMapEntry *VAR_3 = &VAR_0[VAR_2];
        if (VAR_3->android_channel == VAR_1)
            return VAR_3->sdl_channel;
    }
    return 0;
}
