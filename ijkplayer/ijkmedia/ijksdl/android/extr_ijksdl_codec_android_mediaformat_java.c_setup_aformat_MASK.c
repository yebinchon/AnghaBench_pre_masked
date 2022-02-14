
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int jobject ;
struct TYPE_5__ {int func_setBuffer; int func_setInt32; int func_getInt32; int func_delete; TYPE_1__* opaque; } ;
struct TYPE_4__ {int android_media_format; } ;
typedef TYPE_1__ SDL_AMediaFormat_Opaque ;
typedef TYPE_2__ SDL_AMediaFormat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(SDL_AMediaFormat *VAR_4, jobject VAR_5) {
    SDL_AMediaFormat_Opaque *VAR_6 = VAR_4->opaque;
    VAR_6->android_media_format = VAR_5;

    VAR_4->func_delete = VAR_0;
    VAR_4->func_getInt32 = VAR_1;
    VAR_4->func_setInt32 = VAR_3;
    VAR_4->func_setBuffer = VAR_2;
}
