
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double FUNC_0 () ;
 int FUNC_1 (double) ;
 int FUNC_2 (char*,...) ;

void FUNC_3(char *VAR_1, void (*VAR_2)(void*), void (*VAR_3)(void*), void (*VAR_4)(void*), void* VAR_5, int VAR_6, int VAR_7) {
    int VAR_8;
    double VAR_9 = VAR_0;
    double VAR_10 = 0.0;
    double VAR_11 = 0.0;
    for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
        double VAR_12, VAR_13;
        if (VAR_3 != ((void*)0)) {
            VAR_3(VAR_5);
        }
        VAR_12 = FUNC_0();
        VAR_2(VAR_5);
        VAR_13 = FUNC_0() - VAR_12;
        if (VAR_4 != ((void*)0)) {
            VAR_4(VAR_5);
        }
        if (VAR_13 < VAR_9) {
            VAR_9 = VAR_13;
        }
        if (VAR_13 > VAR_11) {
            VAR_11 = VAR_13;
        }
        VAR_10 += VAR_13;
    }
    FUNC_2("%s: min ", VAR_1);
    FUNC_1(VAR_9 * 1000000.0 / VAR_7);
    FUNC_2("us / avg ");
    FUNC_1((VAR_10 / VAR_6) * 1000000.0 / VAR_7);
    FUNC_2("us / max ");
    FUNC_1(VAR_11 * 1000000.0 / VAR_7);
    FUNC_2("us\n");
}
