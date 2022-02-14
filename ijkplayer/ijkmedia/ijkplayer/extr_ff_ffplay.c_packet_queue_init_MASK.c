
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int abort_request; int cond; int mutex; } ;
typedef TYPE_1__ PacketQueue ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ,char*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_6(PacketQueue *VAR_2)
{
    FUNC_5(VAR_2, 0, sizeof(PacketQueue));
    VAR_2->mutex = FUNC_2();
    if (!VAR_2->mutex) {
        FUNC_4(((void*)0), VAR_0, "SDL_CreateMutex(): %s\n", FUNC_3());
        return FUNC_0(VAR_1);
    }
    VAR_2->cond = FUNC_1();
    if (!VAR_2->cond) {
        FUNC_4(((void*)0), VAR_0, "SDL_CreateCond(): %s\n", FUNC_3());
        return FUNC_0(VAR_1);
    }
    VAR_2->abort_request = 1;
    return 0;
}
