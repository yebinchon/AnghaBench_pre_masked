
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ opensles; } ;
struct TYPE_7__ {TYPE_1__* opaque; } ;
struct TYPE_6__ {int right_volume; int left_volume; } ;
typedef int SDL_Aout ;
typedef TYPE_2__ IJKFF_Pipeline ;
typedef TYPE_3__ FFPlayer ;


 int * FUNC_0 () ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static SDL_Aout *FUNC_3(IJKFF_Pipeline *VAR_0, FFPlayer *VAR_1)
{
    SDL_Aout *VAR_2 = ((void*)0);
    if (VAR_1->opensles) {
        VAR_2 = FUNC_1();
    } else {
        VAR_2 = FUNC_0();
    }
    if (VAR_2)
        FUNC_2(VAR_2, VAR_0->opaque->left_volume, VAR_0->opaque->right_volume);
    return VAR_2;
}
