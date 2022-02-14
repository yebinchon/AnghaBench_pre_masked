
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int rc4state ;
struct TYPE_5__ {int sessions_collected; TYPE_1__* sessions; } ;
struct TYPE_4__ {int* keystream; int * iv; } ;
typedef TYPE_2__ PTW_attackstate ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,size_t) ;
 int FUNC_1 (int *,int,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(PTW_attackstate * VAR_3, uint8_t * VAR_4, int VAR_5) {
 int VAR_6;
        int VAR_7;
        uint8_t VAR_8[VAR_1];
        rc4state VAR_9;

        for (VAR_6 = 0; VAR_6 < VAR_3->sessions_collected; VAR_6++) {
                FUNC_0(&VAR_8[VAR_0], VAR_4, VAR_5);
                FUNC_0(VAR_8, VAR_3->sessions[VAR_6].iv, VAR_0);
                FUNC_1(VAR_8, VAR_5+VAR_0, &VAR_9);
                for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
                        if ((FUNC_2(&VAR_9) ^ VAR_3->sessions[VAR_6].keystream[VAR_7]) != 0) {
                                return 0;
                        }
                }
        }
        return 1;
}
