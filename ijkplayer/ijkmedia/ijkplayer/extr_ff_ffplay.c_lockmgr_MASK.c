
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVLockOp { ____Placeholder_AVLockOp } AVLockOp ;






 int VAR_0 ;
 void* FUNC_0 () ;
 int FUNC_1 (void*) ;
 int FUNC_2 () ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int *,int ,char*,int ) ;

__attribute__((used)) static int FUNC_6(void **VAR_1, enum AVLockOp VAR_2)
{
    switch (VAR_2) {
    case 131:
        *VAR_1 = FUNC_0();
        if (!*VAR_1) {
            FUNC_5(((void*)0), VAR_0, "SDL_CreateMutex(): %s\n", FUNC_2());
            return 1;
        }
        return 0;
    case 129:
        return !!FUNC_3(*VAR_1);
    case 128:
        return !!FUNC_4(*VAR_1);
    case 130:
        FUNC_1(*VAR_1);
        return 0;
    }
    return 1;
}
