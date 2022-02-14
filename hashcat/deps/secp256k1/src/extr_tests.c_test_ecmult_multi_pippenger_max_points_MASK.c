
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int secp256k1_scratch ;
struct TYPE_2__ {int error_callback; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (size_t) ;
 size_t FUNC_2 (int) ;
 size_t FUNC_3 (int *,int *) ;
 size_t FUNC_4 (size_t,int) ;
 size_t FUNC_5 (int) ;
 int FUNC_6 (int *,int *,size_t) ;
 int FUNC_7 (int *,int *,size_t) ;
 size_t FUNC_8 (int *,int *) ;
 int * FUNC_9 (int *,size_t) ;
 int FUNC_10 (int *,int *) ;

void FUNC_11(void) {
    size_t VAR_3 = FUNC_5(256);
    size_t VAR_4 = FUNC_4(FUNC_2(VAR_0-1)+512, 12);
    secp256k1_scratch *VAR_5;
    size_t VAR_6;
    int VAR_7 = 0;

    for(; VAR_3 < VAR_4; VAR_3+=256) {
        size_t VAR_8;
        size_t VAR_9;
        size_t VAR_10;
        VAR_5 = FUNC_9(&VAR_2->error_callback, VAR_3);
        FUNC_0(VAR_5 != ((void*)0));
        VAR_10 = FUNC_8(&VAR_2->error_callback, VAR_5);
        VAR_6 = FUNC_3(&VAR_2->error_callback, VAR_5);
        if (VAR_6 == 0) {
            FUNC_10(&VAR_2->error_callback, VAR_5);
            continue;
        }
        VAR_7 = FUNC_1(VAR_6);

        VAR_9 = FUNC_4(VAR_6, VAR_7);
        for (VAR_8 = 0; VAR_8 < VAR_1 - 1; VAR_8++) {
            FUNC_0(FUNC_6(&VAR_2->error_callback, VAR_5, 1));
            VAR_9--;
        }
        FUNC_0(FUNC_6(&VAR_2->error_callback, VAR_5, VAR_9));
        FUNC_7(&VAR_2->error_callback, VAR_5, VAR_10);
        FUNC_10(&VAR_2->error_callback, VAR_5);
    }
    FUNC_0(VAR_7 == VAR_0);
}
